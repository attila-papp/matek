/**
 * Matek
 * Version 0.3.0
 * https://github.com/attila-papp/matek
 *
 * Freeware Licence Agreement:
 * https://github.com/attila-papp/matek/blob/v0.3.0/LICENCE.md
 *
 * Copyright (C) 2021-present, Attila Papp.
 */

#include <iostream>
#include "../../../../include/Matek.h"

using namespace std;
using namespace Matek::Math::NumberTheory;
using namespace Matek::Math::NumberTheory::Number;

int main(int argc, char* argv[]) {
	//Create Integer numbers
	Integer
		number_1(3982),
		number_2(174090365),
		number_3("-385090658085019290618"),
		number_4("708870611806295608780618083535801880525367050415465041");

	//Use some of the comparison operators
	cout << ((number_1 != number_2) ? "true" : "false") << endl;
	cout << ((number_3 <= number_4) ? "true" : "false") << endl;
	cout << ((number_3 > number_2) ? "true" : "false") << endl;

	//Use basic operations
	cout << (number_1 + number_3) << endl;
	cout << (number_2 - number_1) << endl;
	cout << (number_3 * number_4) << endl;
	cout << (number_4 / number_2) << endl;
	cout << (number_4 % number_3) << endl;

	cout << number_1++ << endl;
	cout << number_2-- << endl;
	cout << ++number_1 << endl;
	cout << --number_2 << endl;

	number_1 += number_2;
	number_3 -= number_1;
	number_1 *= number_1;
	number_4 /= number_1;
	number_4 %= number_2;
	cout << number_4 << endl;

	//Check if the number is negative
	cout << (number_3.isNegative() ? "negative" : "not negative") << endl;

	//Use absolute and inverse functions
	cout << number_3.getAbsolute() << endl;
	cout << number_1.getInverse() << endl;

	number_3.setAbsolute();
	number_4.setInverse();

	cout << number_3 << endl;
	cout << number_4 << endl;

	//Use toString function
	string str = number_1.toString();
	cout << str << endl;

	return 0;
}