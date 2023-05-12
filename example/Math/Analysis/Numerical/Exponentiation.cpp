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
#include "../../../../include/Matek.h"

using namespace std;
using namespace Matek::Math::NumberTheory;
using namespace Matek::Math::NumberTheory::Number;
using namespace Matek::Math::Analysis::Numerical;

int main(int argc, char* argv[]) {
	//Create numbers and epsilon accuracy
	Rational
		number_1("5.4"),
		number_2("-8007168681680.306"),
		number_3("1.5"),
		number_4("349"),
		number_5("5.20762458029"),
		epsilon_1("0.00000000000000001"),
		epsilon_2("0.0000000000000000000000000000005");

	//Calculate power
	cout << Exponentiation::power(number_1, 4) << endl;

	//Calculate exponential
	cout << Exponentiation::exponential(
		number_5, epsilon_2
	).toString(31) << endl;

	//Calculate root
	cout
	<< Exponentiation::root(number_2, number_3, epsilon_1).toString(17)
	<< endl;

	//Calculate natural logarithm
	cout << Exponentiation::naturalLogarithm(number_4) << endl;

	//Calculate logarithm
	cout << Exponentiation::logarithm(
		number_4, number_5, epsilon_1
	).toString(16) << endl;

	return 0;
}