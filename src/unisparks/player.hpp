#ifndef UNISPARKS_PLAYER_H
#define UNISPARKS_PLAYER_H
#include "unisparks/effect.hpp"
#include "unisparks/layout.hpp"
#include "unisparks/network.hpp"
#include "unisparks/renderer.hpp"
#include "unisparks/renderers/simple.hpp"
#include "unisparks/registry.hpp"

namespace unisparks {

class Player {
 public:

  Player();
  ~Player();

  // Disallow copy, allow move
  Player(const Player&) = delete;
  Player& operator=(const Player&) = delete;

  /**
   * Reset player to the same state as if it was just constructed
   */
  void reset();

  // Constructing the player
  
  Player& clearStrands();
  Player& addStrand(const Layout& l, Renderer& r);
  Player& addStrand(const Layout& l, SimpleRenderFunc r);
  Player& addEffect(const char* name, const Effect& effect,
                    bool autoplay = true);
  Player& autoplayEffect(const char* name, bool v = true);
  Player& preferredEffectDuration(Milliseconds v);
  Player& throttleFps(FramesPerSecond v);
  Player& connect(Network& n);

  /**
   * Prepare for rendering
   *
   * Call this when you're done adding strands and setting up
   * player configuration.
   */
  void begin();
  void begin(const Layout& layout, Renderer& renderer);
  void begin(const Layout& layout, SimpleRenderFunc renderer);
  void begin(const Layout& layout, Renderer& renderer, Network& network);
  void begin(const Layout& layout, SimpleRenderFunc renderer, Network& network);

  /**
   * Exit rendering mode and cleanup runtime resources
   */
  void end();

  /**
   *  Render current frame to all strands
   */
  void render();

  /**
   *  Render current frame to all strands
   */
  void render(Milliseconds dt);

  /**
   *  Play effect with given name
   */
  void play(const char* name);

  /**
   *  Overlay given effect on top of currently playing effect.
   *  If there was another overlay, it will be replaced with the new one.
   */
  void overlay(const char* name);

  /**
   *  Remove overlayed effect if one was set up
   */
  void clearOverlay();

  /**
   *  Play effect with given index in the playlist
   */
  void jump(int idx);

  /**
   *  Play previous effect in the playlist
   */
  void prev();

  /**
   *  Play next effect in the playlist
   */
  void next();

  /**
   *  Pause playback
   */
  void pause();

  /**
   *  Resume playback
   */
  void resume();

  /**
   * Run text command
   */
  const char* command(const char* cmd);

  /**
   * Returns total number of effects
   * player can play. This is regardless
   * of whether the effects are in the
   * playlist.
   */
  size_t effectCount() const {
    return effectCount_;
  }

  /**
   * Returns current playlist position
   */
  size_t effectIndex() const {
    return track_;
  }

  /**
   * Returns the name of currently playing effect
   */
  const char* effectName() const;

  /**
   * Returns the name of currently playing overlay or "none"
   * if no overlay is playing.
   */
  const char* overlayName() const {
    return overlayIdx_ < effectCount_ ? effects_[overlayIdx_].name : "none";
  }

  /**
   * Returns time elapsed since effect start
   */
  Milliseconds effectTime() const {
    return time_;
  }

  /**
   * Returns current tempo
   */
  BeatsPerMinute tempo() const {
    return tempo_;
  }

  /**
   * Returns whether playback is paused
   */
  bool paused() const {
    return paused_;
  }

  /**
   * Returns whether player is connected to network
   */
  bool connected() const {
    return network_ && network_->status() == CONNECTED;
  }

  /**
   * Returns number of frames rendered per second.
   */
  int fps() const {
    return fps_;
  }

  /**
   * Returns the bounding box of all pixels
   */
  const Box& bounds() const {
    return viewport_;
  }

 private:
  void syncToNetwork();
  bool syncEffectByName(const char* name, Milliseconds time);
  bool syncEffectByIndex(size_t index, Milliseconds time);
  bool switchToPlaylistItem(size_t index);
  bool findEffect(const char* name, size_t* idx);
  Frame effectFrame() const;
  Frame overlayFrame() const;

  /**
   * This is similar to addEffect, but it will not override effects
   * that were already added, and it also won't fail if the max number
   * of effects was exceeded.
   */
  void addDefaultEffect(const char* name, const Effect& effect,
                        bool autoplay = true);

  void addDefaultEffects2D();

  bool ready_;

  struct Strand {
    const Layout* layout;
    Renderer* renderer;
  };

  Strand strands_[255];
  size_t strandCount_;

  Box viewport_;
  void* effectContext_;
  void* overlayContext_;

  struct EffectInfo {
    const Effect* effect;
    const char* name;
    bool autoplay;
  };

  EffectInfo effects_[255];
  size_t effectCount_;
  static constexpr size_t MAX_EFFECTS = sizeof(effects_) / sizeof(*effects_);

  size_t effectIdx_;
  Milliseconds time_;

  size_t overlayIdx_;
  Milliseconds overlayTime_;

  BeatsPerMinute tempo_;
  Metre metre_;
  // Milliseconds lastDownbeatTime_;

  uint8_t playlist_[255];
  size_t playlistSize_;
  size_t track_;

  bool paused_;

  Network* network_;

  Milliseconds preferredEffectDuration_;

  int throttleFps_;

  Milliseconds lastRenderTime_;

  // Mutable because it is used for logging
  mutable int fps_;
  mutable Milliseconds lastFpsProbeTime_;
  mutable int framesSinceFpsProbe_;
};


} // namespace unisparks
#endif /* UNISPARKS_PLAYER_H */