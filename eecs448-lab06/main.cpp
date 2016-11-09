/**
*	@author Logan Ayer
*	@date 11/2/2016
*	@file main.cpp
*	@brief Uses the test class to run tests
*/

#include <iostream>
#include "Test.h"

int main(int argc, char** argv)
{
	Test myTester;
	myTester.runTests();
	
	return (0);

}

