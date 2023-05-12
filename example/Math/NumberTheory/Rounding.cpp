/**
 * Matek
 * Version 0.4.0
 * https://github.com/attila-papp/matek
 *
 * Freeware Licence Agreement:
 * https://github.com/attila-papp/matek/blob/v0.4.0/LICENCE.md
 *
 * Copyright (C) 2021-present, Attila Papp.
 */

#include <iostream>
#include "../../../include/Matek.h"

using namespace std;
using namespace Matek::Math::NumberTheory;
using namespace Matek::Math::NumberTheory::Number;

int main(int argc, char* argv[]) {
	//Create Rational numbers
	Rational
		number_1("240349.50127765016725"),
		number_2(2, 3),
		result(0);

	//Create accuracy objects
	Accuracy
		accuracy_1(6, Radix::RADIX_10, RoundingMethod::HALF_AWAY_FROM_ZERO),
		accuracy_2(3, Radix::RADIX_16, RoundingMethod::FLOOR),
		accuracy_3(-2, Radix::RADIX_10, RoundingMethod::CEIL),
		accuracy_4(-5, Radix::RADIX_16, RoundingMethod::TRUNCATE);

	//Round numbers with default arguments
	result = Rounding::round(number_1);
	cout << result << endl;

	result = Rounding::round(number_2);
	cout << result << endl;

	//Round numbers with more detailed arguments
	result = Rounding::round(number_1, 4);
	cout << result << endl;

	result = Rounding::round(number_1, accuracy_1);
	cout << result << endl;

	result = Rounding::round(number_1, accuracy_3);
	cout << result << endl;

	result = Rounding::round(number_2, 1);
	cout << result << endl;

	result = Rounding::round(number_2, accuracy_2);
	cout << result.toString(accuracy_2) << endl;

	result = Rounding::round(number_2, accuracy_4);
	cout << result.toString(accuracy_4) << endl;

	return 0;
}