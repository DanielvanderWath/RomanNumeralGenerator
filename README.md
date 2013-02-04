RomanNumeralGenerator
=====================

My solution to the BBC's Coding Kata: Roman Numerals problem, including unit test, implemented in C++.

A roman numeral generator is not inherently more complex than a binary/decimal converter. When converting a decimal number to binary, you find the largest power of two that is smaller than your input to be your most significant bit, and subtract it's value from the input. Repeat with the next smallest power of two, and the next until your input has reached 0.

The roman number generator is much the same, except you have more than two digits, and some caveats like 4 and 9.

With my implementation, I've assumed that the special rules for 4, 9, 40, 90, 400 and 900 are all required to be supported. In a production environment this is the sort of thing that if not explicitly stated in the spec, I'd query with the customer.

For the error condition, I went with returning a string containing "invalid value" which is easy to spot when the test prints it out, and quicker to implement than throwing an exception (which would also require more code in the test to handle it gracefully). If this was part of a larger project then I'd follow the existing design patterns for informing code further up the stack that something has gone wrong, be it throwing an exception, returning an empty string, etc.

The unit test/demo builds with no errors or warnings, on Fedora Core 15, with the following command line:

	g++ -g -o test main.cpp romanNumeral.cpp

	
