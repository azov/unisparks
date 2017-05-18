#include "dfsparks/effects/system.h"

#include "dfsparks/network.h"
#include "dfsparks/timer.h"
namespace dfsparks {

const char *NetworkStatus::name = "_netstatus";

void NetworkStatus::render(Pixels &pixels, const Frame& frame) const {
	int32_t t = timeMillis();
	uint32_t color = 0;
	switch(network.status()) {
	  case Network::disconnected: 
	  case Network::disconnecting: 
	    color = 0xff6600; 
	    break;
	  case Network::connecting: 
	    color = frame.timeElapsed % 500 < 250 ? 0 : 0xff6600;
	    break;
	  case Network::connected: 
	    color = t - network.lastRxTime() < 100 ? 0 : 0x00ff00;
	    break;
	  case Network::connection_failed: 
	    color = 0xff0000; 
	    break;
	}
	pixels.fill(color);
}

} // namespace dfsparks