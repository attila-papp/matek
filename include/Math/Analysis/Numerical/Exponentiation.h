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

#ifndef MATEK_MATH_ANALYSIS_NUMERICAL_EXPONENTIATION_H
#define MATEK_MATH_ANALYSIS_NUMERICAL_EXPONENTIATION_H

#include <vector>
#include <cstdint>
#include <cstddef>

#include "../../NumberTheory/Number/Integer.h"
#include "../../NumberTheory/Number/Rational.h"
#include "../../NumberTheory/Accuracy.h"
#include "../../NumberTheory/Rounding.h"
#include "../../NumberTheory/RoundingMethod.h"
#include "../../../Exception/InvalidExponentOfPower.h"
#include "../../../Exception/InvalidDegreeOfRoot.h"
#include "../../../Exception/InvalidRadicandOfRoot.h"
#include "../../../Exception/InvalidEpsilonValue.h"
#include "../../../Exception/InvalidAntiLogarithm.h"
#include "../../../Exception/InvalidBaseOfLogarithm.h"
#include "../../../Cache/Analysis/Numerical/Exponentiation.h"
#include "Constant.h"
#include "../../../Dto/IntegerRational.h"

namespace Matek::Math::Analysis::Numerical {

	/**
	 * Contains exponentiation functions.
	 */
	class Exponentiation {
		public:
			/**
			 * Computes approximation of power with arbitrary rational exponent
			 * and arbitrary accuracy.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& base
			 *
			 * @param const
			 * Matek::Math::NumberTheory::Number::Rational& exponent
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& epsilon
			 * The result will be within this epsilon accuracy.
			 * Epsilon represents an absolute margin of error.
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidExponentOfPower
			 * @throw Matek::Exception::InvalidDegreeOfRoot
			 * @throw Matek::Exception::InvalidRadicandOfRoot
			 * @throw Matek::Exception::InvalidEpsilonValue
			 */
			static Matek::Math::NumberTheory::Number::Rational power(
				const Matek::Math::NumberTheory::Number::Rational& base,
				const Matek::Math::NumberTheory::Number::Rational& exponent = 2,
				const Matek::Math::NumberTheory::Number::Rational& epsilon =
					Matek::Math::NumberTheory::Number::Rational("0.00000001")
			);

			/**
			 * Computes approximation of the natural exponential function (e^x)
			 * with arbitrary rational exponent and arbitrary accuracy.
			 *
			 * @param const
			 * Matek::Math::NumberTheory::Number::Rational& exponent
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& epsilon
			 * The result will be within this epsilon accuracy.
			 * Epsilon represents an absolute margin of error.
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidEpsilonValue
			 */
			static Matek::Math::NumberTheory::Number::Rational exponential(
				const Matek::Math::NumberTheory::Number::Rational& exponent,
				const Matek::Math::NumberTheory::Number::Rational& epsilon =
					Matek::Math::NumberTheory::Number::Rational("0.00000001")
			);

			/**
			 * Computes approximation of root with arbitrary rational degree
			 * and arbitrary accuracy.
			 *
			 * @param const
			 * Matek::Math::NumberTheory::Number::Rational& radicand
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& degree
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& epsilon
			 * The result will be within this epsilon accuracy.
			 * Epsilon represents an absolute margin of error.
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidExponentOfPower
			 * @throw Matek::Exception::InvalidDegreeOfRoot
			 * @throw Matek::Exception::InvalidRadicandOfRoot
			 * @throw Matek::Exception::InvalidEpsilonValue
			 */
			static Matek::Math::NumberTheory::Number::Rational root(
				const Matek::Math::NumberTheory::Number::Rational& radicand,
				const Matek::Math::NumberTheory::Number::Rational& degree = 2,
				const Matek::Math::NumberTheory::Number::Rational& epsilon =
					Matek::Math::NumberTheory::Number::Rational("0.00000001")
			);

			/**
			 * Computes approximation of natural logarithm with arbitrary
			 * accuracy.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& x
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& epsilon
			 * The result will be within this epsilon accuracy.
			 * Epsilon represents an absolute margin of error.
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidAntiLogarithm
			 * @throw Matek::Exception::InvalidEpsilonValue
			 */
			static Matek::Math::NumberTheory::Number::Rational naturalLogarithm(
				const Matek::Math::NumberTheory::Number::Rational& x,
				const Matek::Math::NumberTheory::Number::Rational& epsilon =
					Matek::Math::NumberTheory::Number::Rational("0.00000001")
			);

			/**
			 * Computes approximation of logarithm with arbitrary rational base
			 * and arbitrary accuracy.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& x
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& base
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& epsilon
			 * The result will be within this epsilon accuracy.
			 * Epsilon represents an absolute margin of error.
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidAntiLogarithm
			 * @throw Matek::Exception::InvalidBaseOfLogarithm
			 * @throw Matek::Exception::InvalidEpsilonValue
			 */
			static Matek::Math::NumberTheory::Number::Rational logarithm(
				const Matek::Math::NumberTheory::Number::Rational& x,
				const Matek::Math::NumberTheory::Number::Rational& base,
				const Matek::Math::NumberTheory::Number::Rational& epsilon =
					Matek::Math::NumberTheory::Number::Rational("0.00000001")
			);

			static Matek::Math::NumberTheory::Number::Rational eevl(
				const Matek::Math::NumberTheory::Number::Integer& gefcs2pn,
				const Matek::Math::NumberTheory::Number::Rational& a,
				const bool fromAbove
			);

			static Matek::Math::NumberTheory::Number::Rational ce1fp(
				const Matek::Math::NumberTheory::Number::Rational& x,
				const Matek::Math::NumberTheory::Number::Rational& ex,
				const Matek::Math::NumberTheory::Number::Rational& epsilon
			);

		private:
			static Matek::Math::NumberTheory::Number::Rational iep(
				const Matek::Math::NumberTheory::Number::Rational& a,
				const Matek::Math::NumberTheory::Number::Integer& n
			);

			static Matek::Math::NumberTheory::Number::Rational ce1fe(
				const Matek::Math::NumberTheory::Number::Rational& ex,
				const Matek::Math::NumberTheory::Number::Integer& enr,
				const Matek::Math::NumberTheory::Number::Rational& epsilon
			);

			static Matek::Math::NumberTheory::Number::Rational ef(
				const Matek::Math::NumberTheory::Number::Rational& ex,
				const Matek::Math::NumberTheory::Number::Rational& epsilon
			);

			static Matek::Dto::IntegerRational nlnx(
				const Matek::Math::NumberTheory::Number::Rational& x
			);

			static Matek::Math::NumberTheory::Number::Rational nn(
				const Matek::Math::NumberTheory::Number::Rational& x,
				const Matek::Math::NumberTheory::Number::Rational& epsilon
			);

			static Matek::Math::NumberTheory::Number::Rational ce1(
				const Matek::Math::NumberTheory::Number::Rational& x,
				const Matek::Math::NumberTheory::Number::Rational& b,
				const Matek::Math::NumberTheory::Number::Rational& epsilon
			);

			static Matek::Math::NumberTheory::Number::Rational ll(
				const Matek::Math::NumberTheory::Number::Rational& x,
				const Matek::Math::NumberTheory::Number::Rational& b,
				const Matek::Math::NumberTheory::Number::Rational& epsilon,
				bool b_e
			);
	};
}

#endif //MATEK_MATH_ANALYSIS_NUMERICAL_EXPONENTIATION_H