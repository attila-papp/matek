/**
 * Matek
 * Version 0.2.0
 * https://github.com/attila-papp/matek
 *
 * Freeware Licence Agreement:
 * https://github.com/attila-papp/matek/blob/v0.2.0/LICENCE.md
 *
 * Copyright (C) 2021-present, Attila Papp.
 */

#ifndef MATEK_EXCEPTION_INVALIDRADICANDOFROOT_H
#define MATEK_EXCEPTION_INVALIDRADICANDOFROOT_H

#include <exception>

namespace Matek::Exception {

	/**
	 * Invalid radicand of root exception
	 */
	class InvalidRadicandOfRoot : public std::exception {
		public:
			/**
			 * Returns exception message
			 *
			 * @return const char*
			 */
			const char* what() const noexcept;
	};
}

#endif //MATEK_EXCEPTION_INVALIDRADICANDOFROOT_H