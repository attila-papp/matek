#ifndef MATEK_EXCEPTION_INVALIDRADIX_H
#define MATEK_EXCEPTION_INVALIDRADIX_H

#include <exception>

/**
 * @author: Attila Papp
 */
namespace Matek::Exception {

	/**
	 * Invalid radix exception
	 */
	class InvalidRadix : public std::exception {
		public:
			/**
			 * Returns exception message
			 *
			 * @return const char*
			 */
			const char* what() const noexcept;
	};
}

#endif //MATEK_EXCEPTION_INVALIDRADIX_H