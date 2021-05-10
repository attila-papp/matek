#ifndef MATEK_EXCEPTION_INVALIDROUNDINGMETHOD_H
#define MATEK_EXCEPTION_INVALIDROUNDINGMETHOD_H

#include <exception>

/**
 * @author: Attila Papp
 */
namespace Matek::Exception {

	/**
	 * Invalid rounding method exception
	 */
	class InvalidRoundingMethod : public std::exception {
		public:
			/**
			 * Returns exception message
			 *
			 * @return const char*
			 */
			const char* what() const noexcept;
	};
}

#endif //MATEK_EXCEPTION_INVALIDROUNDINGMETHOD_H