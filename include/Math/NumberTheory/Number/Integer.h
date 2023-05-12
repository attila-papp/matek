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

#ifndef MATEK_MATH_NUMBERTHEORY_NUMBER_INTEGER_H
#define MATEK_MATH_NUMBERTHEORY_NUMBER_INTEGER_H

#include <vector>
#include <cstdint>
#include <cstddef>
#include <string>
#include <regex>
#include <math.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <memory>
#include <experimental/propagate_const>

#include "../Radix.h"
#include "../../../Exception/DivideByZero.h"
#include "../../../Exception/InvalidConstructorStringArgument.h"
#include "../../../Exception/InvalidRadix.h"

namespace Matek::Math::NumberTheory::Number {

	/**
	 * Represents an integer number, and implements basic operations on it.
	 * This number can be practically any size, there is only hardware limit.
	 */
	class Integer {
		public:
			/**
			 * Constructs integer number with built-in integer type.
			 *
			 * @param std::int64_t number
			 * The number we wish to create.
			 */
			Integer(std::int64_t number);

			/**
			 * Constructs integer number with std::string type.
			 *
			 * @param std::string str
			 * The number, represented with a string.
			 * Valid string values:
			 *     Radix 10: ^(0)|(-?[1-9][0-9]*)$
			 *         Examples of valid values:
			 *             982
			 *             -1073
			 *         Examples of invalid values:
			 *             0472
			 *             - 65
			 *             6c3
			 *     Radix 16: ^(0)|(-?[1-9a-fA-F][0-9a-fA-F]*)$
			 *         Examples of valid values:
			 *             a830b1
			 *             -709
			 *         Examples of invalid values:
			 *             066f2
			 *             - 9d3
			 *             s1b76k
			 *
			 * @param Matek::Math::NumberTheory::Radix radix
			 * For valid radix values, see include/Math/NumberTheory/Radix.h
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 * @throw Matek::Exception::InvalidRadix
			 */
			Integer(
				std::string str,
				Matek::Math::NumberTheory::Radix radix =
					Matek::Math::NumberTheory::Radix::RADIX_10
			);

			/**
			 * Copy constructs integer number.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 */
			Integer(const Integer& ref);

			/**
			 * Destructs integer number.
			 */
			~Integer();

			/**
			 * Assignment operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer&
			 */
			Integer& operator=(const Integer& ref);

			/**
			 * Equal operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator==(const Integer& ref) const;

			/**
			 * Equal operator with built-in integer type on the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator==(std::int64_t number, const Integer& ref);

			/**
			 * Equal operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator==(std::string str, const Integer& ref);

			/**
			 * Not equal operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator!=(const Integer& ref) const;

			/**
			 * Not equal operator with built-in integer type on the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator!=(std::int64_t number, const Integer& ref);

			/**
			 * Not equal operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator!=(std::string str, const Integer& ref);

			/**
			 * Greater than operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator>(const Integer& ref) const;

			/**
			 * Greater than operator with built-in integer type on the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator>(std::int64_t number, const Integer& ref);

			/**
			 * Greater than operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator>(std::string str, const Integer& ref);

			/**
			 * Greater than or equal operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator>=(const Integer& ref) const;

			/**
			 * Greater than or equal operator with built-in integer type on
			 * the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator>=(std::int64_t number, const Integer& ref);

			/**
			 * Greater than or equal operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator>=(std::string str, const Integer& ref);

			/**
			 * Less than operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator<(const Integer& ref) const;

			/**
			 * Less than operator with built-in integer type on the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator<(std::int64_t number, const Integer& ref);

			/**
			 * Less than operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator<(std::string str, const Integer& ref);

			/**
			 * Less than or equal operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator<=(const Integer& ref) const;

			/**
			 * Less than or equal operator with built-in integer type on
			 * the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator<=(std::int64_t number, const Integer& ref);

			/**
			 * Less than or equal operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator<=(std::string str, const Integer& ref);

			/**
			 * Addition operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator+(const Integer& ref) const;

			/**
			 * Addition operator with built-in integer type on the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			friend Integer operator+(std::int64_t number, const Integer& ref);

			/**
			 * Addition operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend Integer operator+(std::string str, const Integer& ref);

			/**
			 * Subtraction operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator-(const Integer& ref) const;

			/**
			 * Subtraction operator with built-in integer type on the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			friend Integer operator-(std::int64_t number, const Integer& ref);

			/**
			 * Subtraction operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend Integer operator-(std::string str, const Integer& ref);

			/**
			 * Multiplication operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator*(const Integer& ref) const;

			/**
			 * Multiplication operator with built-in integer type on the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			friend Integer operator*(std::int64_t number, const Integer& ref);

			/**
			 * Multiplication operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend Integer operator*(std::string str, const Integer& ref);

			/**
			 * Euclidean division operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Integer operator/(const Integer& ref) const;

			/**
			 * Euclidean division operator with built-in integer type
			 * on the left.
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			friend Integer operator/(std::int64_t number, const Integer& ref);

			/**
			 * Euclidean division operator with std::string type on the left.
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend Integer operator/(std::string str, const Integer& ref);

			/**
			 * Modulo operator.
			 * It uses the "floored" logic.
			 * More information: https://en.wikipedia.org/wiki/Modulo_operation
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Integer operator%(const Integer& ref) const;

			/**
			 * Modulo operator with built-in integer type on the left.
			 * It uses the "floored" logic.
			 * More information: https://en.wikipedia.org/wiki/Modulo_operation
			 *
			 * @param std::int64_t number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			friend Integer operator%(std::int64_t number, const Integer& ref);

			/**
			 * Modulo operator with std::string type on the left.
			 * It uses the "floored" logic.
			 * More information: https://en.wikipedia.org/wiki/Modulo_operation
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend Integer operator%(std::string str, const Integer& ref);

			/**
			 * Pre-increment operator.
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator++();

			/**
			 * Post-increment operator.
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator++(int);

			/**
			 * Pre-decrement operator.
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator--();

			/**
			 * Post-decrement operator.
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator--(int);

			/**
			 * Addition assignment operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator+=(const Integer& ref);

			/**
			 * Subtraction assignment operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator-=(const Integer& ref);

			/**
			 * Multiplication assignment operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator*=(const Integer& ref);

			/**
			 * Euclidean division assignment operator.
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Integer operator/=(const Integer& ref);

			/**
			 * Modulo assignment operator.
			 * It uses the "floored" logic.
			 * More information: https://en.wikipedia.org/wiki/Modulo_operation
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Integer operator%=(const Integer& ref);

			/**
			 * Checks if the number is negative.
			 *
			 * @return bool
			 */
			bool isNegative() const;

			/**
			 * Gets the absolute value of the number.
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer getAbsolute() const;

			/**
			 * Sets number to its absolute value, AND returns with the
			 * absolute value.
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer setAbsolute();

			/**
			 * Gets the inverse of the number.
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer getInverse() const;

			/**
			 * Sets number to its inverse, AND returns with the inverse.
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer setInverse();

			/**
			 * Gets the string representation of the number.
			 *
			 * @param Matek::Math::NumberTheory::Radix radix
			 * For valid radix values, see include/Math/NumberTheory/Radix.h
			 *
			 * @return std::string
			 *
			 * @throw Matek::Exception::InvalidRadix
			 */
			std::string toString(
				Matek::Math::NumberTheory::Radix radix =
					Matek::Math::NumberTheory::Radix::RADIX_10
			) const;

			/**
			 * Insertion (<<) operator.
			 *
			 * @param std::ostream& os
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return std::ostream&
			 */
			friend std::ostream&
				operator<<(std::ostream& os, const Integer& ref);

			bool am(bool b, std::vector<std::uint32_t> v) const;

			std::size_t gvs() const;

			Integer cs2pn() const;

			std::size_t gefcs2pn() const;

		private:
			struct Impl;

			std::experimental::propagate_const<std::unique_ptr<Impl>> pImpl;
	};
}

#endif //MATEK_MATH_NUMBERTHEORY_NUMBER_INTEGER_H