#include "hamming.h"
#include <iostream>
#include <string>

int 
hamming::compute(std::string a, std::string b) 
{
	int hamming_dist = 0;

	for(int i = 0; i < a.size(); i++) {

		if (a[i] != b[i]) { hamming_dist++; }
	
	}

return hamming_dist;
}