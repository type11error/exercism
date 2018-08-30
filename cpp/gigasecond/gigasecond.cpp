#include "gigasecond.h"

ptime gigasecond::advance(ptime time) {
  time_t gigasecond_t = 1000000000;
  return (time + seconds(gigasecond_t));
}
