/*
 * main.cpp
 *   created on: April 24, 2013
 * last updated: May 2022
 *       author: Shujia Liu
 */

#ifndef __ENVIRONMENT__
#include "environment.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main( int argc, char* argv[] ){
	InitURandom(atoi(argv[2])); 
	int maxNumOfTrial;

	TEnvironment* gEnv = new TEnvironment();
	gEnv->fFileNameTSP = argv[1];
			
	maxNumOfTrial = 9999; // repeated times
	gEnv->Npop = 100; // number of items
	gEnv->Nch = 30; // number of offsprings

	gEnv->define();
	for (int n = 0; n < maxNumOfTrial; ++n){ 
		gEnv->doIt(); 
		gEnv->printOn(n);
		//gEnv->writeBest();
	}
	
    return 0;
}
