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

#ifndef MATEK_EXCEPTION_INVALIDBASEOFLOGARITHM_H
#define MATEK_EXCEPTION_INVALIDBASEOFLOGARITHM_H

#include <exception>

namespace Matek::Exception {

	/**
	 * Invalid base of logarithm exception.
	 * Base must be positive, and cannot be 1.
	 */
	class InvalidBaseOfLogarithm : public std::exception {
		public:
			/**
			 * Returns exception message.
			 *
			 * @return const char*
			 */
			const char* what() const noexcept;
	};
}

#endif //MATEK_EXCEPTION_INVALIDBASEOFLOGARITHM_H