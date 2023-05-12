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

#ifndef MATEK_MATH_ANALYSIS_NUMERICAL_TRIGONOMETRY_H
#define MATEK_MATH_ANALYSIS_NUMERICAL_TRIGONOMETRY_H

#include <cstdint>
#include <cstddef>

#include "../../NumberTheory/Number/Integer.h"
#include "../../NumberTheory/Number/Rational.h"
#include "../../NumberTheory/Accuracy.h"
#include "../../NumberTheory/Rounding.h"
#include "../../NumberTheory/RoundingMethod.h"
#include "../../../Exception/InvalidEpsilonValue.h"
#include "Constant.h"

namespace Matek::Math::Analysis::Numerical {

	/**
	 * Contains trigonometry functions.
	 */
	class Trigonometry {
		public:
			/**
			 * Computes approximation of sine with arbitrary accuracy.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& x
			 * Angle in radians
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& epsilon
			 * The result will be within this epsilon accuracy.
			 * Epsilon represents an absolute margin of error.
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidEpsilonValue
			 */
			static Matek::Math::NumberTheory::Number::Rational sine(
				const Matek::Math::NumberTheory::Number::Rational& x,
				const Matek::Math::NumberTheory::Number::Rational& epsilon =
					Matek::Math::NumberTheory::Number::Rational("0.00000001")
			);

			/**
			 * Computes approximation of cosine with arbitrary accuracy.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& x
			 * Angle in radians
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& epsilon
			 * The result will be within this epsilon accuracy.
			 * Epsilon represents an absolute margin of error.
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidEpsilonValue
			 */
			static Matek::Math::NumberTheory::Number::Rational cosine(
				const Matek::Math::NumberTheory::Number::Rational& x,
				const Matek::Math::NumberTheory::Number::Rational& epsilon =
					Matek::Math::NumberTheory::Number::Rational("0.00000001")
			);

		private:
			static Matek::Math::NumberTheory::Number::Rational sc(
				const Matek::Math::NumberTheory::Number::Rational& x,
				const Matek::Math::NumberTheory::Number::Rational& e,
				bool s
			);
	};
}

#endif //MATEK_MATH_ANALYSIS_NUMERICAL_TRIGONOMETRY_H