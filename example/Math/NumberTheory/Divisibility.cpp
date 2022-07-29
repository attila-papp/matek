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
#include "../../../include/Matek.h"

using namespace std;
using namespace Matek::Math::NumberTheory;
using namespace Matek::Math::NumberTheory::Number;

int main(int argc, char* argv[]) {
	//Create Integer numbers
	Integer
		number_1(858),
		number_2(3135);

	//Get greatest common divisor
	cout << Divisibility::greatestCommonDivisor(number_1, number_2) << endl;

	//Get least common multiple
	cout << Divisibility::leastCommonMultiple(number_1, number_2) << endl;

	return 0;
}