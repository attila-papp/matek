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

#ifndef MATEK_MATH_ANALYSIS_NUMERICAL_CONSTANT_H
#define MATEK_MATH_ANALYSIS_NUMERICAL_CONSTANT_H

#include <cstdint>
#include <cstddef>

#include "../../NumberTheory/Number/Integer.h"
#include "../../NumberTheory/Number/Rational.h"
#include "../../NumberTheory/Accuracy.h"
#include "../../NumberTheory/Rounding.h"
#include "Exponentiation.h"
#include "../../../Exception/InvalidEpsilonValue.h"
#include "../../../Cache/Analysis/Numerical/Constant.h"

namespace Matek::Math::Analysis::Numerical {

	/**
	 * Contains functions of constants.
	 */
	class Constant {
		public:
			/**
			 * Computes approximation of pi with arbitrary accuracy.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& epsilon
			 * The result will be within this epsilon accuracy.
			 * Epsilon represents an absolute margin of error.
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidEpsilonValue
			 */
			static Matek::Math::NumberTheory::Number::Rational pi(
				const Matek::Math::NumberTheory::Number::Rational& epsilon =
					Matek::Math::NumberTheory::Number::Rational("0.00000001")
			);

			/**
			 * Computes approximation of Euler's number with arbitrary accuracy.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& epsilon
			 * The result will be within this epsilon accuracy.
			 * Epsilon represents an absolute margin of error.
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidEpsilonValue
			 */
			static Matek::Math::NumberTheory::Number::Rational e(
				const Matek::Math::NumberTheory::Number::Rational& epsilon =
					Matek::Math::NumberTheory::Number::Rational("0.00000001")
			);

		private:
	};
}

#endif //MATEK_MATH_ANALYSIS_NUMERICAL_CONSTANT_H