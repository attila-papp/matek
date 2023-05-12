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
		number_1("6.17"),
		number_2("-181726.309069306"),
		epsilon_1("0.0000000000000034"),
		epsilon_2("0.0000000000000000000000078");

	//Calculate sine
	cout << Trigonometry::sine(number_1, epsilon_1).toString(16) << endl;

	//Calculate cosine
	cout << Trigonometry::cosine(number_2, epsilon_2).toString(25) << endl;

	return 0;
}