#include "gigasecond.h"


const int GIGASECOND = 1000000000;

boost::posix_time::ptime
gigasecond::advance(boost::posix_time::ptime start)
{

		start = start + boost::posix_time::seconds(GIGASECOND);

		return start;  
}
