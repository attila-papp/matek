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
	//Create epsilon accuracy
	Rational
		epsilon_1("0.000000000000073"),
		epsilon_2("0.00000000000000000008");

	//Calculate Euler's number
	cout << Constant::e(epsilon_1).toString(15) << endl;

	//Calculate Pi
	cout << Constant::pi(epsilon_2).toString(20) << endl;

	return 0;
}