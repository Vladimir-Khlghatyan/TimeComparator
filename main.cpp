#include "header.h"
#include <iostream>
#include <chrono>

int main()
{
	// -------------------------------------------------------------------------------
		// add code here if necessary




	// -------------------------------------------------------------------------------
	
	// --- Approach1 -----------------------------------------------------------------
	auto start1 = std::chrono::high_resolution_clock::now();
	approach1(/*some argse*/);
	auto end1 = std::chrono::high_resolution_clock::now();
	// -------------------------------------------------------------------------------


	// --- Approach2 -----------------------------------------------------------------
	auto start2 = std::chrono::high_resolution_clock::now();
	approach2(/*some argse*/);
	auto end2 = std::chrono::high_resolution_clock::now();
	// -------------------------------------------------------------------------------


	auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1).count();
	auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count();
	std::cout << "Duration of the 1st approach: " << duration1 << " microseconds" << std::endl;
	std::cout << "Duration of the 2nd approach: " << duration2 << " microseconds" << std::endl;

	return 0;
}