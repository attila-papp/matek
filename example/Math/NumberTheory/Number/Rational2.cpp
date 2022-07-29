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
	//Create Rational numbers with radix 10 and radix 16
	Rational
		number_1("9052.78"),
		number_2("f80ca54.5b906ec3a", Radix::RADIX_16);

	//Create accuracy objects
	Accuracy
		accuracy_1(5, Radix::RADIX_10, RoundingMethod::FLOOR),
		accuracy_2(8, Radix::RADIX_16),
		accuracy_3(-3, Radix::RADIX_16, RoundingMethod::TRUNCATE);

	//Print numbers in several ways
	cout << number_1 << endl;
	cout << number_2 << endl;

	cout << number_1.toString(2) << endl;
	cout << number_2.toString(-3) << endl;

	cout << number_1.toString(accuracy_1) << endl;
	cout << number_1.toString(accuracy_2) << endl;
	cout << number_1.toString(accuracy_3) << endl;

	cout << number_2.toString(accuracy_1) << endl;
	cout << number_2.toString(accuracy_2) << endl;
	cout << number_2.toString(accuracy_3) << endl;

	//Use toInteger function with other rounding method
	Integer int_1 = number_1.toInteger(RoundingMethod::FLOOR);
	cout << int_1 << endl;

	return 0;
}