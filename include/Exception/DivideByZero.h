#ifndef MATEK_EXCEPTION_DIVIDEBYZERO_H
#define MATEK_EXCEPTION_DIVIDEBYZERO_H

#include <exception>

/**
 * @author: Attila Papp
 */
namespace Matek::Exception {

	/**
	 * Divide by zero exception
	 */
	class DivideByZero : public std::exception {
		public:
			/**
			 * Returns exception message
			 *
			 * @return const char*
			 */
			const char* what() const noexcept;
	};
}

#endif //MATEK_EXCEPTION_DIVIDEBYZERO_H