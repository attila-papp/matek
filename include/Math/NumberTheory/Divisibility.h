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

#ifndef MATEK_MATH_NUMBERTHEORY_DIVISIBILITY_H
#define MATEK_MATH_NUMBERTHEORY_DIVISIBILITY_H

#include "Number/Integer.h"
#include "../../Exception/InvalidZeroArgument.h"

namespace Matek::Math::NumberTheory {

	/**
	 * Contains divisibility functions.
	 */
	class Divisibility {
		public:
			/**
			 * Calculates greatest common divisor.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& a
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& b
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::InvalidZeroArgument
			 */
			static Matek::Math::NumberTheory::Number::Integer
			greatestCommonDivisor(
				const Matek::Math::NumberTheory::Number::Integer& a,
				const Matek::Math::NumberTheory::Number::Integer& b
			);

			/**
			 * Calculates least common multiple.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& a
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& b
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::InvalidZeroArgument
			 */
			static Matek::Math::NumberTheory::Number::Integer
			leastCommonMultiple(
				const Matek::Math::NumberTheory::Number::Integer& a,
				const Matek::Math::NumberTheory::Number::Integer& b
			);
	};
}

#endif //MATEK_MATH_NUMBERTHEORY_DIVISIBILITY_H