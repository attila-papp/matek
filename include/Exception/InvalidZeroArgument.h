#ifndef MATEK_EXCEPTION_INVALIDZEROARGUMENT_H
#define MATEK_EXCEPTION_INVALIDZEROARGUMENT_H

#include <exception>

/**
 * @author: Attila Papp
 */
namespace Matek::Exception {

	/**
	 * Invalid zero argument exception
	 */
	class InvalidZeroArgument : public std::exception {
		public:
			/**
			 * Returns exception message
			 *
			 * @return const char*
			 */
			const char* what() const noexcept;
	};
}

#endif //MATEK_EXCEPTION_INVALIDZEROARGUMENT_H