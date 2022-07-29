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

#ifndef MATEK_MATH_NUMBERTHEORY_ACCURACY_H
#define MATEK_MATH_NUMBERTHEORY_ACCURACY_H

#include <string>
#include <iostream>
#include <memory>
#include <experimental/propagate_const>

#include "Radix.h"
#include "RoundingMethod.h"

namespace Matek::Math::NumberTheory {

	/**
	 * Defines accuracy.
	 */
	class Accuracy {
		public:
			/**
			 * Constructs accuracy definition
			 *
			 * @param long long int digit
			 * (Examples are in HALF_TO_EVEN rounding method)
			 * Values:
			 *     0: Rounds to integer.
			 *     For example: 547.19 will be 547
			 *
			 *     Positive values: Defines, to how many digits will be
			 *     rounded in the fractional part.
			 *     For example: With value 3, 17.36428 will be 17.364
			 *
			 *     Negative values: Defines, how many digits will be rounded
			 *     in the integer part.
			 *     For example: With value -2, 812.3 will be 800
			 *
			 * @param Matek::Math::NumberTheory::Radix radix
			 * For valid radix values, see include/Math/NumberTheory/Radix.h
			 *
			 * @param Matek::Math::NumberTheory::RoundingMethod method
			 * For valid rounding method values, see
			 * include/Math/NumberTheory/RoundingMethod.h
			 */
			Accuracy(
				long long int digit,
				Matek::Math::NumberTheory::Radix radix =
					Matek::Math::NumberTheory::Radix::RADIX_10,
				Matek::Math::NumberTheory::RoundingMethod method =
					Matek::Math::NumberTheory::RoundingMethod::HALF_TO_EVEN
			);

			/**
			 * Copy constructs accuracy definition
			 *
			 * @param const Matek::Math::NumberTheory::Accuracy& ref
			 */
			Accuracy(const Accuracy& ref);

			/**
			 * Destructs accuracy definition
			 */
			~Accuracy();

			/**
			 * Assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Accuracy& ref
			 *
			 * @return Matek::Math::NumberTheory::Accuracy&
			 */
			Accuracy& operator=(const Accuracy& ref);

			/**
			 * Equal operator.
			 * All members are considered.
			 *
			 * @param const Matek::Math::NumberTheory::Accuracy& ref
			 *
			 * @return bool
			 */
			bool operator==(const Accuracy& ref) const;

			/**
			 * Equal operator with built-in integer type on the left.
			 * All members are considered.
			 *
			 * @param long long int digit
			 *
			 * @param const Matek::Math::NumberTheory::Accuracy& ref
			 *
			 * @return bool
			 */
			friend bool operator==(long long int digit, const Accuracy& ref);

			/**
			 * Not equal operator.
			 * All members are considered.
			 *
			 * @param const Matek::Math::NumberTheory::Accuracy& ref
			 *
			 * @return bool
			 */
			bool operator!=(const Accuracy& ref) const;

			/**
			 * Not equal operator with built-in integer type on the left.
			 * All members are considered.
			 *
			 * @param long long int digit
			 *
			 * @param const Matek::Math::NumberTheory::Accuracy& ref
			 *
			 * @return bool
			 */
			friend bool operator!=(long long int digit, const Accuracy& ref);

			/**
			 * Gets digit
			 *
			 * @return long long int
			 */
			long long int getDigit() const;

			/**
			 * Sets digit
			 *
			 * @param long long int digit
			 *
			 * @return Matek::Math::NumberTheory::Accuracy&
			 */
			Accuracy& setDigit(long long int digit);

			/**
			 * Gets radix
			 *
			 * @return Matek::Math::NumberTheory::Radix
			 */
			Matek::Math::NumberTheory::Radix getRadix() const;

			/**
			 * Sets radix
			 *
			 * @param Matek::Math::NumberTheory::Radix radix
			 *
			 * @return Matek::Math::NumberTheory::Accuracy&
			 */
			Accuracy& setRadix(Matek::Math::NumberTheory::Radix radix);

			/**
			 * Gets rounding method
			 *
			 * @return Matek::Math::NumberTheory::RoundingMethod
			 */
			Matek::Math::NumberTheory::RoundingMethod getRoundingMethod()
			const;

			/**
			 * Sets rounding method
			 *
			 * @param Matek::Math::NumberTheory::RoundingMethod method
			 *
			 * @return Matek::Math::NumberTheory::Accuracy&
			 */
			Accuracy& setRoundingMethod(
				Matek::Math::NumberTheory::RoundingMethod method
			);

		private:
			struct Impl;

			std::experimental::propagate_const<std::unique_ptr<Impl>> pImpl;
	};
}

#endif //MATEK_MATH_NUMBERTHEORY_ACCURACY_H