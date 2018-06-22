#include "gigasecond.h"

boost::posix_time::ptime
gigasecond::advance(boost::posix_time::ptime start)
{
	start = boost::posix_time::from_time_t(gigasecond::GIGASECOND);


	return start;
    
}
