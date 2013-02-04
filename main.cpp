#include <iostream>
#include "romanNumeral.h"

using namespace std;

//print out the test value, and the return value from generate()
#define TEST_GENERATOR(X) \
	cout << X << "\t" << RomanNumeralGenerator::generate(X) << endl;

int main(int argc, char **argv)
{
	//test RomanNumeralGenerator::generate
	TEST_GENERATOR(-1)
	TEST_GENERATOR(0)
	TEST_GENERATOR(1)
	TEST_GENERATOR(4)
	TEST_GENERATOR(5)
	TEST_GENERATOR(9)
	TEST_GENERATOR(10)
	TEST_GENERATOR(14)
	TEST_GENERATOR(19)
	TEST_GENERATOR(20)
	TEST_GENERATOR(55)
	TEST_GENERATOR(59)
	TEST_GENERATOR(2013)
	TEST_GENERATOR(1495)
	TEST_GENERATOR(1910)
	TEST_GENERATOR(1954)
	TEST_GENERATOR(1990)
	TEST_GENERATOR(3999)
	TEST_GENERATOR(4000)

	return 0;
}
