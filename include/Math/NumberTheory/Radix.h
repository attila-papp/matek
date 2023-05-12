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

#ifndef MATEK_MATH_NUMBERTHEORY_RADIX_H
#define MATEK_MATH_NUMBERTHEORY_RADIX_H

namespace Matek::Math::NumberTheory {

	/**
	 * Contains radix values of numeral systems.
	 */
	enum class Radix : int {
		/**
		 * For decimal numeral system.
		 */
		RADIX_10,

		/**
		 * For hexadecimal numeral system.
		 */
		RADIX_16,
	};
}

#endif //MATEK_MATH_NUMBERTHEORY_RADIX_H