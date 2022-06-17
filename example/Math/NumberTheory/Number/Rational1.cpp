/**
 * Matek
 * Version 0.2.0
 * https://github.com/attila-papp/matek
 *
 * Freeware Licence Agreement:
 * https://github.com/attila-papp/matek/blob/v0.2.0/LICENCE.md
 *
 * Copyright (C) 2021-present, Attila Papp.
 */

#include <iostream>
#include "../../../../include/Matek.h"

using namespace std;
using namespace Matek::Math::NumberTheory;
using namespace Matek::Math::NumberTheory::Number;

int main(int argc, char* argv[]) {
	//Create Rational numbers
	Rational
		number_1(691),
		number_2(17, 5),
		number_3("98.1682273"),
		number_4("-38053508839091.308263660858015283808628763");

	//Use some of the comparison operators
	cout << ((number_1 == number_2) ? "true" : "false") << endl;
	cout << ((number_4 < number_3) ? "true" : "false") << endl;
	cout << ((number_2 >= number_4) ? "true" : "false") << endl;

	//Use basic operations
	cout << (number_1 + number_2) << endl;
	cout << (number_3 - number_2) << endl;
	cout << (number_3 * number_4) << endl;
	cout << (number_4 / number_1) << endl;

	cout << number_3++ << endl;
	cout << number_4-- << endl;
	cout << ++number_3 << endl;
	cout << --number_4 << endl;

	number_1 += number_3;
	number_2 -= number_1;
	number_3 *= number_2;
	number_4 /= number_3;
	cout << number_4 << endl;

	//Check if the number is negative
	cout << (number_2.isNegative() ? "negative" : "not negative") << endl;

	//Use absolute and inverse functions
	cout << number_2.getAbsolute() << endl;
	cout << number_4.getInverse() << endl;

	number_2.setAbsolute();
	number_4.setInverse();

	cout << number_2 << endl;
	cout << number_4 << endl;

	//Use toString function
	string str = number_4.toString();
	cout << str << endl;

	//Use toInteger function
	Integer int_1 = number_4.toInteger();
	cout << int_1 << endl;

	return 0;
}