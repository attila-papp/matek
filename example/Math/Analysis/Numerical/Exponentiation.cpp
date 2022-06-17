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
using namespace Matek::Math::Analysis::Numerical;

int main(int argc, char* argv[]) {
	//Create numbers
	Rational
		number_1("5.4"),
		number_2("-8007168681680.306"),
		number_3("1.5");

	//Create accuracy object
	Accuracy
		accuracy(16);

	//Calculate power
	cout << Exponentiation::power(number_1, 4) << endl;

	//Calculate root
	cout
	<< Exponentiation::root(number_2, number_3, accuracy).toString(accuracy)
	<< endl;

	return 0;
}