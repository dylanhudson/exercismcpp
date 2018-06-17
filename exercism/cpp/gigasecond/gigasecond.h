#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>

#ifndef GIGASECOND_H
#define GIGASECOND_H

namespace gigasecond {
    

boost::posix_time::ptime
advance(boost::posix_time::ptime start);

}

#endif

