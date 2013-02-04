#include "romanNumeral.h"

//if X is less than number, subtract x from number and append y to ret
#define RNG_APPEND_IF_LESS_THAN(X, Y) \
			if(X <= number) \
			{ \
				number -= X; \
				ret += Y; \
				continue; \
			} 

std::string RomanNumeralGenerator::generate(int number)
{
	//before we do anything, make sure number is supported
	if(number < 1 || number > 3999)
	{
		return std::string("invalid value");
	}

	std::string ret;

	//find the largest numeral that is less than or equal to number, and
	//append it to ret. repeat until we reach 0
	while(number > 0)
	{
		RNG_APPEND_IF_LESS_THAN(1000, "M");
		RNG_APPEND_IF_LESS_THAN( 900, "CM");
		RNG_APPEND_IF_LESS_THAN( 500, "D");
		RNG_APPEND_IF_LESS_THAN( 400, "CD");
		RNG_APPEND_IF_LESS_THAN( 100, "C");
		RNG_APPEND_IF_LESS_THAN(  90, "XC");
		RNG_APPEND_IF_LESS_THAN(  50, "L");
		RNG_APPEND_IF_LESS_THAN(  40, "XL");
		RNG_APPEND_IF_LESS_THAN(  10, "X");
		RNG_APPEND_IF_LESS_THAN(   9, "IX");
		RNG_APPEND_IF_LESS_THAN(   5, "V");
		RNG_APPEND_IF_LESS_THAN(   4, "IV");
		RNG_APPEND_IF_LESS_THAN(   1, "I");
	}

	return ret;
}
