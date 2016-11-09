#include "Test.h"

Test::Test(){}

void Test::runTests()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	test11();
	test12();
	test13();
	test14();
	test15();
	test16();
	test17();
	test18();
	test19();
	test20();
}

void Test::test1()
{
	LinkedListOfInts list;
	std::cout << "Test 1: size of empty list is zero: ";

	if(list.size() == 0)
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void Test::test2()
{
	LinkedListOfInts list;
	std::cout << "Test 2: removeBack on empty list: ";

	if(list.removeBack())
		std::cout << "FAIL" << std::endl;
	else
		std::cout << "PASS" << std::endl;
}

void Test::test3()
{
	LinkedListOfInts list;
	std::cout << "Test 3: removeFront on empty list: ";

	if(list.removeFront())
		std::cout << "FAIL" << std::endl;
	else
		std::cout << "PASS" << std::endl;
}

void Test::test4()
{
	LinkedListOfInts list;
	std::cout << "Test 4: arbitrary search on empty list: ";

	if(list.search(0))
		std::cout << "FAIL" << std::endl;
	else
		std::cout << "PASS" << std::endl;
}

void Test::test5()
{
	LinkedListOfInts list;
	std::cout << "Test 5: isEmpty returns true on empty list: ";
	
	if(list.isEmpty())
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void Test::test6()
{
	LinkedListOfInts list;
	std::cout << "Test 6: after 1 addFront, size = 1: ";

	list.addFront(1);
	
	if(list.size() == 1)
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void Test::test7()
{
	LinkedListOfInts list;
	std::cout << "Test 7: after 1 addBack, size = 1: ";
	
	list.addBack(1);

	if(list.size() == 1)
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void Test::test8()
{
	LinkedListOfInts list;
	std::cout << "Test 8: after 25 addFront, size = 25: ";

	for (int i = 0; i < 25; i ++) 
	{
		list.addFront(1);
	}
	
	if(list.size() == 25)
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void Test::test9()
{
	LinkedListOfInts list;
	std::cout << "Test 9: after 25 addBack, size = 25: ";

	for (int i = 0; i < 25; i ++) 
	{
		list.addBack(1);
	}
	
	if(list.size() == 25)
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void Test::test10()
{
	LinkedListOfInts list;
	std::cout << "Test 10: removeFront on 1 item list: ";

	list.addBack(1);
	list.removeFront();
	
	if(list.isEmpty())
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void Test::test11()
{
	LinkedListOfInts list;
	std::cout << "Test 11: removeBack on 1 item list: ";

	list.addBack(1);
	list.removeBack();
	
	if(list.isEmpty())
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void Test::test12()
{
	LinkedListOfInts list;
	std::cout << "Test 12: multiple removeFront: ";

	for (int i = 0; i < 25; i ++) 
	{
		list.addBack(1);
	}
	for (int i = 0; i < 12; i ++) 
	{
		list.removeFront();
	}
	
	if(list.size() == 13)
		std::cout << "PASS" << std::endl;
	else
	{
		std::cout << "FAIL" << std::endl;
	}
}

void Test::test13()
{
	LinkedListOfInts list;
	std::cout << "Test 13: multiple removeBack: ";

	for (int i = 0; i < 25; i ++) 
	{
		list.addBack(1);
	}
	for (int i = 0; i < 12; i ++) 
	{
		list.removeBack();
	}
	
	if(list.size() == 13)
		std::cout << "PASS" << std::endl;
	else
	{
		std::cout << "FAIL" << std::endl;
	}
}

void Test::test14()
{
	LinkedListOfInts list;
	std::cout << "Test 14: order of addFront: ";

	for (int i = 0; i < 25; i ++) 
	{
		list.addFront(i);
	}
	
	std::vector<int> testList = list.toVector();
	std::vector<int> compareList;
	
	for (int i = 24; i >= 0; i --) 
	{
		compareList.push_back(i);
	}
	
	if(testList == compareList)
		std::cout << "PASS" << std::endl;
	else
	{
		std::cout << "FAIL" << std::endl;
	}
}

void Test::test15()
{
	LinkedListOfInts list;
	std::cout << "Test 15: order of addBack: ";

	for (int i = 0; i < 25; i ++) 
	{
		list.addBack(i);
	}
	
	std::vector<int> testList = list.toVector();
	std::vector<int> compareList;
	
	for (int i = 0; i < 25; i ++) 
	{
		compareList.push_back(i);
	}
	
	if(testList == compareList)
		std::cout << "PASS" << std::endl;
	else
	{
		std::cout << "FAIL" << std::endl;
	}
}

void Test::test16()
{
	LinkedListOfInts list;
	std::cout << "Test 16: addBack vs addFront: ";

	for (int i = 0; i < 25; i ++) 
	{
		list.addBack(i);
	}
	
	std::vector<int> testList = list.toVector();
	std::vector<int> compareList;
	
	for (int i = 24; i >= 0; i --) 
	{
		compareList.push_back(i);
	}
	
	if(testList == compareList)
		std::cout << "addBack is doing addFront" << std::endl;
	else
	{
		std::cout << "something weird happened" << std::endl;
	}
}

void Test::test17()
{
	LinkedListOfInts list;
	std::cout << "Test 17: removeFront order: ";

	for (int i = 0; i < 5; i ++) 
	{
		list.addFront(i);
	}
	//4 3 2 1 0
	list.removeFront();
	list.removeFront();
	//2 1 0
	
	std::vector<int> testList = list.toVector();
	std::vector<int> compareList;
	
	for (int i = 2; i >= 0; i --) 
	{
		compareList.push_back(i);
	}
	//2 1 0
	
		
	for (int i = 0; i < 3; i ++) 
	{
		if(testList.at(i) == compareList.at(i))
			std::cout << "PASS" << std::endl;
		else
		{
			std::cout << "FAIL" << std::endl;
		}
	}
}

void Test::test18()
{
	LinkedListOfInts list;
	std::cout << "Test 18: removeBack order: ";

	for (int i = 0; i < 5; i ++) 
	{
		list.addFront(i);
	}
	//4 3 2 1 0
	list.removeBack();
	list.removeBack();
	//4 3 2
	
	std::vector<int> testList = list.toVector();
	std::vector<int> compareList;
	
	for (int i = 4; i >= 2; i --) 
	{
		compareList.push_back(i);
	}
	//4 3 2
		
	for (int i = 0; i < 3; i ++) 
	{
		if(testList.at(i) == compareList.at(i))
			std::cout << "PASS" << std::endl;
		else
		{
			std::cout << "FAIL" << std::endl;
		}
	}
}

void Test::test19()
{
	LinkedListOfInts list;
	std::cout << "Test 19: removeFront vs removeBack: ";

	for (int i = 0; i < 5; i ++) 
	{
		list.addFront(i);
	}
	//4 3 2 1 0
	list.removeFront();
	list.removeFront();
	//Should be 2 1 0 BUT it is not
	
	std::vector<int> testList = list.toVector();
	std::vector<int> compareList;
	
	for (int i = 4; i >= 2; i --) 
	{
		compareList.push_back(i);
	}
	//4 3 2
		
	for (int i = 0; i < 3; i ++) 
	{
		if(testList.at(i) == compareList.at(i))
			std::cout << "PASS" << std::endl;
		else
		{
			std::cout << "FAIL" << std::endl;
		}
	}
}

void Test::test20()
{
	LinkedListOfInts list;
	std::cout << "Test 20: search finds a value: ";

	list.addFront(2);
	
	if(list.search(2))
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}