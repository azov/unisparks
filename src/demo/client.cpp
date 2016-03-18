#include "demo/socket.h"
#include "demo/client.h"
#include "demo/ui.h"
#include "DFSparks.h"

namespace dfsparks {
  namespace client {

    void run(std::atomic<bool>& stopped) {
      printf("client started\n");
      Socket sock;
      sock.set_reuseaddr(true);
      sock.bind("*", udp_port);

      while(!stopped) {
        char buf[frame::max_size];
        size_t size = sock.recvfrom(&buf, sizeof(buf));
        printf("received %ld bytes\n", size);
        ui::update(buf,size);
      } 

      printf("client ended\n");
    }

  } // namespace client
} // namespace dfsparks
