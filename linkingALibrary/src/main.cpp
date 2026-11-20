#include <iostream>
#include <test.h>
#include <profilerLib/profilerLib.h>
#include "assimp/cimport.h"
#include "assimp/scene.h"
#include "assimp/postprocess.h"

int main()
{

	PL::AverageProfiler profiler;


	print();


	std::cin.get();
	return 0;
}