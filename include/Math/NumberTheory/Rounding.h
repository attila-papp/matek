/**
 * Matek
 * Version 0.1.0
 * https://github.com/attila-papp/matek
 *
 * Freeware Licence Agreement:
 * https://github.com/attila-papp/matek/blob/v0.1.0/LICENCE.md
 *
 * Copyright (C) 2021-present, Attila Papp.
 */

#ifndef MATEK_MATH_NUMBERTHEORY_ROUNDING_H
#define MATEK_MATH_NUMBERTHEORY_ROUNDING_H

#include <string>

#include "Number/Rational.h"
#include "Radix.h"
#include "RoundingMethod.h"
#include "Accuracy.h"
#include "../../Exception/InvalidRadix.h"
#include "../../Exception/InvalidRoundingMethod.h"

namespace Matek::Math::NumberTheory {

	/**
	 * Contains rounding functions.
	 */
	class Rounding {
		public:
			/**
			 * Rounds rational number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& number
			 *
			 * @param const Matek::Math::NumberTheory::Accuracy& accuracy
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidRadix
			 * @throw Matek::Exception::InvalidRoundingMethod
			 */
			static Matek::Math::NumberTheory::Number::Rational round(
				const Matek::Math::NumberTheory::Number::Rational& number,
				const Matek::Math::NumberTheory::Accuracy& accuracy = 0
			);
	};
}

#endif //MATEK_MATH_NUMBERTHEORY_ROUNDING_H