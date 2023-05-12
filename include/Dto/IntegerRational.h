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

#ifndef MATEK_DTO_INTEGERRATIONAL_H
#define MATEK_DTO_INTEGERRATIONAL_H

#include "../Math/NumberTheory/Number/Integer.h"
#include "../Math/NumberTheory/Number/Rational.h"

namespace Matek::Dto {

	class IntegerRational {
		public:
			IntegerRational(
				const Matek::Math::NumberTheory::Number::Integer& integer,
				const Matek::Math::NumberTheory::Number::Rational& rational
			);

			IntegerRational(const IntegerRational& ref);

			~IntegerRational();

			IntegerRational& operator=(const IntegerRational& ref);

			Matek::Math::NumberTheory::Number::Integer getInteger() const;

			Matek::Math::NumberTheory::Number::Rational getRational() const;

		private:
			Matek::Math::NumberTheory::Number::Integer integer;

			Matek::Math::NumberTheory::Number::Rational rational;
	};
}

#endif //MATEK_DTO_INTEGERRATIONAL_H