#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <sstream>
#include <vector>
#include "LinkedListOfInts.h"

class Test
{
public:
	Test();
	void runTests();

	void test1(); //size of empty list is zero
	void test2(); //removeFront on empty list
	void test3(); //removeBack on empty list
	void test4(); //search an empty list
	void test5(); //isEmpty on empty list
	void test6(); //addFront size = 1
	void test7(); //addBack size = 1
	void test8(); //multiple addFront
	void test9(); //multiple addBack
	void test10(); //removeFront on 1 item
	void test11(); //removeBack on 1 item
	void test12(); //multiple removeFront
	void test13(); //multiple removeBack
	void test14(); //order of addFront
	void test15(); //order of addBack
	void test16(); //check if addBack is actually addFront
	void test17(); //removeFront order
	void test18(); //removeBack order
	void test19(); //check if removeFront is actually removeBack
	void test20(); //search finds a value

};

#endif
