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

#ifndef MATEK_MATH_NUMBERTHEORY_NUMBER_RATIONAL_H
#define MATEK_MATH_NUMBERTHEORY_NUMBER_RATIONAL_H

#include <string>
#include <regex>
#include <stdio.h>
#include <iostream>
#include <memory>
#include <experimental/propagate_const>

#include "Integer.h"
#include "../Radix.h"
#include "../RoundingMethod.h"
#include "../Accuracy.h"
#include "../Divisibility.h"
#include "../../../Exception/DivideByZero.h"
#include "../../../Exception/InvalidConstructorStringArgument.h"
#include "../../../Exception/InvalidEpsilonValue.h"
#include "../../../Exception/InvalidRadix.h"
#include "../../../Exception/InvalidRoundingMethod.h"
#include "../../../Exception/InvalidZeroArgument.h"

namespace Matek::Math::NumberTheory::Number {

	/**
	 * Represents a rational number, and implements basic operations on it.
	 * The inner representation of the number is a fraction.
	 * This number can be practically any size with any accuracy,
	 * there is only hardware limit.
	 */
	class Rational {
		public:
			/**
			 * Constructs rational number with built-in integer type
			 *
			 * @param long long int number
			 */
			Rational(long long int number);

			/**
			 * Constructs rational number with std::string type
			 *
			 * @param std::string str
			 * The number, represented with a string
			 * Valid string values:
			 *     Base 10:
			 *         ^(0(\\.0+)?)|(-?((0\\.[0-9]*[1-9][0-9]*)|
			 *         ([1-9][0-9]*(\\.[0-9]+)?)))$
			 *     Base 16:
			 *         ^(0(\\.0+)?)|(-?((0\\.[0-9a-fA-F]*[1-9a-fA-F][0-9a-f
			 *         A-F]*)|([1-9a-fA-F][0-9a-fA-F]*(\\.[0-9a-fA-F]+)?)))$
			 *
			 * @param Matek::Math::NumberTheory::Radix radix
			 * For valid radix values, see include/Math/NumberTheory/Radix.h
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 * @throw Matek::Exception::InvalidRadix
			 */
			Rational(
				std::string str,
				Matek::Math::NumberTheory::Radix radix =
					Matek::Math::NumberTheory::Radix::RADIX_10
			);

			/**
			 * Constructs rational number with fraction
			 *
			 * @param const
			 * Matek::Math::NumberTheory::Number::Integer& numerator
			 *
			 * @param const
			 * Matek::Math::NumberTheory::Number::Integer& denominator
			 *
			 * @throw Matek::Exception::InvalidZeroArgument
			 */
			Rational(const Integer& numerator, const Integer& denominator = 1);

			/**
			 * Copy constructs rational number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 */
			Rational(const Rational& ref);

			/**
			 * Destructs rational number
			 */
			~Rational();

			/**
			 * Assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational&
			 */
			Rational& operator=(const Rational& ref);

			/**
			 * Equal operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			bool operator==(const Rational& ref) const;

			/**
			 * Equal operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			friend bool operator==(long long int number, const Rational& ref);

			/**
			 * Equal operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator==(std::string str, const Rational& ref);

			/**
			 * Not equal operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			bool operator!=(const Rational& ref) const;

			/**
			 * Not equal operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			friend bool operator!=(long long int number, const Rational& ref);

			/**
			 * Not equal operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator!=(std::string str, const Rational& ref);

			/**
			 * Greater than operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			bool operator>(const Rational& ref) const;

			/**
			 * Greater than operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			friend bool operator>(long long int number, const Rational& ref);

			/**
			 * Greater than operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator>(std::string str, const Rational& ref);

			/**
			 * Greater than or equal operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			bool operator>=(const Rational& ref) const;

			/**
			 * Greater than or equal operator with built-in integer type on
			 * the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			friend bool operator>=(long long int number, const Rational& ref);

			/**
			 * Greater than or equal operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator>=(std::string str, const Rational& ref);

			/**
			 * Less than operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			bool operator<(const Rational& ref) const;

			/**
			 * Less than operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			friend bool operator<(long long int number, const Rational& ref);

			/**
			 * Less than operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator<(std::string str, const Rational& ref);

			/**
			 * Less than or equal operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			bool operator<=(const Rational& ref) const;

			/**
			 * Less than or equal operator with built-in integer type on
			 * the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 */
			friend bool operator<=(long long int number, const Rational& ref);

			/**
			 * Less than or equal operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return bool
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend bool operator<=(std::string str, const Rational& ref);

			/**
			 * Addition operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator+(const Rational& ref) const;

			/**
			 * Addition operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			friend Rational operator+(
				long long int number,
				const Rational& ref
			);

			/**
			 * Addition operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend Rational operator+(std::string str, const Rational& ref);

			/**
			 * Subtraction operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator-(const Rational& ref) const;

			/**
			 * Subtraction operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			friend Rational operator-(
				long long int number,
				const Rational& ref
			);

			/**
			 * Subtraction operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend Rational operator-(std::string str, const Rational& ref);

			/**
			 * Multiplication operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator*(const Rational& ref) const;

			/**
			 * Multiplication operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			friend Rational operator*(
				long long int number,
				const Rational& ref
			);

			/**
			 * Multiplication operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend Rational operator*(std::string str, const Rational& ref);

			/**
			 * Division operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Rational operator/(const Rational& ref) const;

			/**
			 * Division operator with built-in integer type on the left
			 *
			 * @param long long int number
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			friend Rational operator/(
				long long int number,
				const Rational& ref
			);

			/**
			 * Division operator with std::string type on the left
			 *
			 * @param std::string str
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::DivideByZero
			 * @throw Matek::Exception::InvalidConstructorStringArgument
			 */
			friend Rational operator/(std::string str, const Rational& ref);

			/**
			 * Pre-increment operator
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator++();

			/**
			 * Post-increment operator
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator++(int);

			/**
			 * Pre-decrement operator
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator--();

			/**
			 * Post-decrement operator
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator--(int);

			/**
			 * Addition assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator+=(const Rational& ref);

			/**
			 * Subtraction assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator-=(const Rational& ref);

			/**
			 * Multiplication assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational operator*=(const Rational& ref);

			/**
			 * Division assignment operator
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 *
			 * @throw Matek::Exception::DivideByZero
			 */
			Rational operator/=(const Rational& ref);

			/**
			 * Checks if the number is negative
			 *
			 * @return bool
			 */
			bool isNegative() const;

			/**
			 * Gets the absolute value of the number
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational getAbsolute() const;

			/**
			 * Sets number to its absolute value,
			 * AND returns with the absolute value
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational setAbsolute();

			/**
			 * Gets the inverse of the number
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational getInverse() const;

			/**
			 * Sets number to its inverse,
			 * AND returns with the inverse
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational setInverse();

			/**
			 * Simplificates the fraction in the inner representation,
			 * AND returns with the number
			 *
			 * @return Matek::Math::NumberTheory::Number::Rational
			 */
			Rational simplificate();

			/**
			 * Gets the string representation of the number
			 *
			 * @param Matek::Math::NumberTheory::Accuracy accuracy
			 *
			 * @return std::string
			 *
			 * @throw Matek::Exception::InvalidRadix
			 * @throw Matek::Exception::InvalidRoundingMethod
			 */
			std::string toString(
				Matek::Math::NumberTheory::Accuracy accuracy = 8
			) const;

			/**
			 * Rounds number to integer and returns with
			 * Matek::Math::NumberTheory::Number::Integer type
			 *
			 * @param Matek::Math::NumberTheory::RoundingMethod method
			 * For valid rounding method values, see
			 * include/Math/NumberTheory/RoundingMethod.h
			 *
			 * @return Matek::Math::NumberTheory::Number::Integer
			 *
			 * @throw Matek::Exception::InvalidRoundingMethod
			 */
			Integer toInteger(
				Matek::Math::NumberTheory::RoundingMethod method =
					Matek::Math::NumberTheory::RoundingMethod::HALF_TO_EVEN
			) const;

			/**
			 * Insertion (<<) operator
			 *
			 * @param std::ostream& os
			 *
			 * @param const Matek::Math::NumberTheory::Number::Rational& ref
			 *
			 * @return std::ostream&
			 */
			friend std::ostream&
				operator<<(std::ostream& os, const Rational& ref);

			bool am(const Integer& a, const Integer& b) const;

			Integer gn() const;

			Integer gd() const;

			long long int gadfn10() const;

		private:
			struct Impl;

			std::experimental::propagate_const<std::unique_ptr<Impl>> pImpl;
	};
}

#endif //MATEK_MATH_NUMBERTHEORY_NUMBER_RATIONAL_H