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

#ifndef MATEK_MATH_ANALYSIS_NUMERICAL_EXPONENTIATION_H
#define MATEK_MATH_ANALYSIS_NUMERICAL_EXPONENTIATION_H

#include "../../NumberTheory/Number/Integer.h"
#include "../../NumberTheory/Number/Rational.h"
#include "../../NumberTheory/Accuracy.h"
#include "../../NumberTheory/Rounding.h"
#include "../../../Exception/InvalidExponentOfPower.h"
#include "../../../Exception/InvalidDegreeOfRoot.h"
#include "../../../Exception/InvalidRadicandOfRoot.h"

namespace Matek::Math::Analysis::Numerical {

	/**
	 * Contains exponentiation functions.
	 */
	class Exponentiation {
		public:
			/**
			 * Computes power with arbitrary rational exponent
			 * and arbitrary accuracy
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& base
			 *
			 * @param const
			 * Matek::Math::NumberTheory::Number::Rational& exponent
			 *
			 * @param const Matek::Math::NumberTheory::Accuracy& accuracy
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidRadix
			 * @throw Matek::Exception::InvalidRoundingMethod
			 * @throw Matek::Exception::InvalidExponentOfPower
			 * @throw Matek::Exception::InvalidDegreeOfRoot
			 * @throw Matek::Exception::InvalidRadicandOfRoot
			 */
			static Matek::Math::NumberTheory::Number::Rational power(
				const Matek::Math::NumberTheory::Number::Rational& base,
				const Matek::Math::NumberTheory::Number::Rational& exponent = 2,
				const Matek::Math::NumberTheory::Accuracy& accuracy = 8
			);

			/**
			 * Computes root with arbitrary rational degree
			 * and arbitrary accuracy
			 *
			 * @param const
			 * Matek::Math::NumberTheory::Number::Rational& radicand
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& degree
			 *
			 * @param const Matek::Math::NumberTheory::Accuracy& accuracy
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidRadix
			 * @throw Matek::Exception::InvalidRoundingMethod
			 * @throw Matek::Exception::InvalidExponentOfPower
			 * @throw Matek::Exception::InvalidDegreeOfRoot
			 * @throw Matek::Exception::InvalidRadicandOfRoot
			 */
			static Matek::Math::NumberTheory::Number::Rational root(
				const Matek::Math::NumberTheory::Number::Rational& radicand,
				const Matek::Math::NumberTheory::Number::Rational& degree = 2,
				const Matek::Math::NumberTheory::Accuracy& accuracy = 8
			);

		private:
			static Matek::Math::NumberTheory::Number::Rational gev(
				const Matek::Math::NumberTheory::Accuracy& accuracy
			);

			static Matek::Math::NumberTheory::Number::Rational iep(
				const Matek::Math::NumberTheory::Number::Rational& a,
				const Matek::Math::NumberTheory::Number::Integer& n
			);

			static Matek::Math::NumberTheory::Number::Rational idr(
				const Matek::Math::NumberTheory::Number::Rational& a,
				const Matek::Math::NumberTheory::Number::Integer& n,
				const Matek::Math::NumberTheory::Accuracy& accuracy
			);
	};
}

#endif //MATEK_MATH_ANALYSIS_NUMERICAL_EXPONENTIATION_H