
#if !defined(LEAP_H)
#define LEAP_H

#include <string>

namespace leap {

bool is_leap_year(int year) {
  bool ret = false;

  // on every year that is evenly divisible by 4
  if(year % 4 == 0) {
    ret = true;
    // except every year that is evenly divisible by 100
    if(year % 100 == 0) {
      ret = false;

      // unless the year is also evenly divisible by 400
      if(year % 400 == 0) {
        ret = true;
      }
    }
  }

  return ret;
}

}

#endif
