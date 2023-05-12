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

#ifndef MATEK_CACHE_ANALYSIS_NUMERICAL_CONSTANT_H
#define MATEK_CACHE_ANALYSIS_NUMERICAL_CONSTANT_H

#include <vector>
#include "../../../Math/NumberTheory/Number/Rational.h"

namespace Matek::Cache::Analysis::Numerical {

	class Constant {
		public:
			static const
				std::vector<Matek::Math::NumberTheory::Number::Rational> pi;

			static const
				std::vector<Matek::Math::NumberTheory::Number::Rational> e;
	};
}

#endif //MATEK_CACHE_ANALYSIS_NUMERICAL_CONSTANT_H