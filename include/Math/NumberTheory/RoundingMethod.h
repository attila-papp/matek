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

#ifndef MATEK_MATH_NUMBERTHEORY_ROUNDINGMETHOD_H
#define MATEK_MATH_NUMBERTHEORY_ROUNDINGMETHOD_H

namespace Matek::Math::NumberTheory {

	/**
	 * Contains rounding methods.
	 */
	enum class RoundingMethod : int {
		/**
		 * Round towards zero.
		 * Limiting the number of digits.
		 */
		TRUNCATE,

		/**
		 * Round towards negative infinity.
		 */
		FLOOR,

		/**
		 * Round towards positive infinity.
		 */
		CEIL,

		/**
		 * Round half away from zero.
		 * Also known as commercial rounding.
		 */
		HALF_AWAY_FROM_ZERO,

		/**
		 * Round half to even.
		 * Also known as bankers' rounding or convergent rounding.
		 */
		HALF_TO_EVEN,
	};
}

#endif //MATEK_MATH_NUMBERTHEORY_ROUNDINGMETHOD_H