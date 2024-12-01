#include "header.h"
#include <iostream>
#include <iomanip>
#include <sys/time.h>

int main()
{
	// -------------------------------------------------------------------------------
		// add code here if necessary




	// -------------------------------------------------------------------------------
	
	// --- Approach1 -----------------------------------------------------------------
	struct timeval tv;
	gettimeofday(&tv, NULL);
	long long startTime = tv.tv_sec * 1000000LL + tv.tv_usec;
	approach1(/*some argse*/);
	gettimeofday(&tv, NULL);
	long long endTime = tv.tv_sec * 1000000LL + tv.tv_usec;
	std::cout << "Duration of the 1st approach: " << std::setprecision(5);
	std::cout << (endTime - startTime) / 1000.0 << " ms" << std::endl;
	// -------------------------------------------------------------------------------


	// --- Approach2 -----------------------------------------------------------------
	gettimeofday(&tv, NULL);
	startTime = tv.tv_sec * 1000000LL + tv.tv_usec;
	approach2(/*some argse*/);
	gettimeofday(&tv, NULL);
	endTime = tv.tv_sec * 1000000LL + tv.tv_usec;
	std::cout << "Duration of the 2nd approach: " << std::setprecision(5);
	std::cout << (endTime - startTime) / 1000.0 << " ms" << std::endl;
	// -------------------------------------------------------------------------------

	return 0;
}