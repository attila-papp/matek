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

#ifndef MATEK_MATH_NUMBERTHEORY_NUMBER_INTEGER_H
#define MATEK_MATH_NUMBERTHEORY_NUMBER_INTEGER_H

#include <vector>
#include <string>
#include <regex>
#include <math.h>
#include <iostream>
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
			 * Constructs integer number with built-in integer type
			 *
			 * @param long long int number
			 */
			Integer(long long int number);

			/**
			 * Constructs integer number with std::string type
			 *
			 * @param std::string str
			 * The number, represented with a string.
			 * Valid string values:
			 *     Base 10: ^(0)|(-?[1-9][0-9]*)$
			 *     Base 16: ^(0)|(-?[1-9a-fA-F][0-9a-fA-F]*)$
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
			 * Copy constructs integer number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 */
			Integer(const Integer& ref);

			/**
			 * Destructs integer number
			 */
			~Integer();

			/**
			 * Assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer&
			 */
			Integer& operator=(const Integer& ref);

			/**
			 * Equal operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator==(const Integer& ref) const;

			/**
			 * Equal operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator==(long long int number, const Integer& ref);

			/**
			 * Equal operator with std::string type on the left
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
			 * Not equal operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator!=(const Integer& ref) const;

			/**
			 * Not equal operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator!=(long long int number, const Integer& ref);

			/**
			 * Not equal operator with std::string type on the left
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
			 * Greater than operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator>(const Integer& ref) const;

			/**
			 * Greater than operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator>(long long int number, const Integer& ref);

			/**
			 * Greater than operator with std::string type on the left
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
			 * Greater than or equal operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator>=(const Integer& ref) const;

			/**
			 * Greater than or equal operator with built-in integer type on
			 * the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator>=(long long int number, const Integer& ref);

			/**
			 * Greater than or equal operator with std::string type on
			 * the left
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
			 * Less than operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator<(const Integer& ref) const;

			/**
			 * Less than operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator<(long long int number, const Integer& ref);

			/**
			 * Less than operator with std::string type on the left
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
			 * Less than or equal operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			bool operator<=(const Integer& ref) const;

			/**
			 * Less than or equal operator with built-in integer type on
			 * the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return bool
			 */
			friend bool operator<=(long long int number, const Integer& ref);

			/**
			 * Less than or equal operator with std::string type on the left
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
			 * Addition operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator+(const Integer& ref) const;

			/**
			 * Addition operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			friend Integer operator+(long long int number, const Integer& ref);

			/**
			 * Addition operator with std::string type on the left
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
			 * Subtraction operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator-(const Integer& ref) const;

			/**
			 * Subtraction operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			friend Integer operator-(long long int number, const Integer& ref);

			/**
			 * Subtraction operator with std::string type on the left
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
			 * Multiplication operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator*(const Integer& ref) const;

			/**
			 * Multiplication operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			friend Integer operator*(long long int number, const Integer& ref);

			/**
			 * Multiplication operator with std::string type on the left
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
			 * Division operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Integer operator/(const Integer& ref) const;

			/**
			 * Division operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			friend Integer operator/(long long int number, const Integer& ref);

			/**
			 * Division operator with std::string type on the left
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
			 * Modulus operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Integer operator%(const Integer& ref) const;

			/**
			 * Modulus operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			friend Integer operator%(long long int number, const Integer& ref);

			/**
			 * Modulus operator with std::string type on the left
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
			 * Pre-increment operator
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator++();

			/**
			 * Post-increment operator
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator++(int);

			/**
			 * Pre-decrement operator
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator--();

			/**
			 * Post-decrement operator
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator--(int);

			/**
			 * Addition assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator+=(const Integer& ref);

			/**
			 * Subtraction assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator-=(const Integer& ref);

			/**
			 * Multiplication assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer operator*=(const Integer& ref);

			/**
			 * Division assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Integer operator/=(const Integer& ref);

			/**
			 * Modulus assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Integer operator%=(const Integer& ref);

			/**
			 * Checks if the number is negative
			 *
			 * @return bool
			 */
			bool isNegative() const;

			/**
			 * Gets the absolute value of the number
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer getAbsolute() const;

			/**
			 * Sets number to its absolute value,
			 * AND returns with the absolute value
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer setAbsolute();

			/**
			 * Gets the inverse of the number
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer getInverse() const;

			/**
			 * Sets number to its inverse,
			 * AND returns with the inverse
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 */
			Integer setInverse();

			/**
			 * Gets the string representation of the number
			 *
			 * @param Matek::Math::NumberTheory::Radix radix
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
			 * Insertion (<<) operator
			 *
			 * @param std::ostream& os
			 *
			 * @param const Matek::Math::NumberTheory::Number::Integer& ref
			 *
			 * @return std::ostream&
			 */
			friend std::ostream&
				operator<<(std::ostream& os, const Integer& ref);

			bool am(bool b, std::vector<unsigned char> v) const;

		private:
			struct Impl;

			std::experimental::propagate_const<std::unique_ptr<Impl>> pImpl;
	};
}

#endif //MATEK_MATH_NUMBERTHEORY_NUMBER_INTEGER_H