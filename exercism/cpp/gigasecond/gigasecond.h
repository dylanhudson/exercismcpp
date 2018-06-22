#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>

#ifndef GIGASECOND_H
#define GIGASECOND_H

namespace gigasecond {
    
const std::time_t GIGASECOND = 1000000000;

boost::posix_time::ptime
advance(boost::posix_time::ptime start);

}

#endif

