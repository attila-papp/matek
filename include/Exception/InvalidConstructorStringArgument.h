#ifndef MATEK_EXCEPTION_INVALIDCONSTRUCTORSTRINGARGUMENT_H
#define MATEK_EXCEPTION_INVALIDCONSTRUCTORSTRINGARGUMENT_H

#include <exception>

/**
 * @author: Attila Papp
 */
namespace Matek::Exception {

	/**
	 * Invalid constructor string argument exception
	 */
	class InvalidConstructorStringArgument : public std::exception {
		public:
			/**
			 * Returns exception message
			 *
			 * @return const char*
			 */
			const char* what() const noexcept;
	};
}

#endif //MATEK_EXCEPTION_INVALIDCONSTRUCTORSTRINGARGUMENT_H