# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).



<br/><br/>

## v0.3.0 - 2022.07.29

### Added
- Functionality
	- Logarithm
	- Simplificate function in `Matek::Math::NumberTheory::Number::Rational` class
- Header files
	- include/Exception/InvalidAntiLogarithm.h
	- include/Exception/InvalidBaseOfLogarithm.h
	- include/Exception/InvalidEpsilonValue.h
	- include/Cache/Analysis/Numerical/Exponentiation.h

### Changed
- Modulo calculation logic has changed in the following functions from truncated to floored. [More information](https://en.wikipedia.org/wiki/Modulo_operation)
	- `Matek::Math::NumberTheory::Number::Integer::operator%(const Integer& ref) const;`
	- `friend Matek::Math::NumberTheory::Number::Integer::operator%(long long int number, const Integer& ref);`
	- `friend Matek::Math::NumberTheory::Number::Integer::operator%(std::string str, const Integer& ref);`
- Accuracy calculation logic of power and root functions has changed in `Matek::Math::Analysis::Numerical::Exponentiation` class.
- Readme file
- Library files
- Documentation files
- Example files
- Performance optimization

### Fixed
- An edge case bug has fixed in `Matek::Math::NumberTheory::Number::Integer::Integer(long long int number);` function.
- An edge case bug has fixed in power and root functions.



<br/><br/>

## v0.2.0 - 2022.06.17

### Added
- Functionality
	- Greatest common divisor
	- Least common multiple
	- Exponentiation
- Header files
	- include/Exception/InvalidExponentOfPower.h
	- include/Exception/InvalidDegreeOfRoot.h
	- include/Exception/InvalidRadicandOfRoot.h
	- include/Math/NumberTheory/Divisibility.h
	- include/Math/Analysis/Numerical/Exponentiation.h

### Changed
- Readme file
- Library files
- Documentation files
- Example files



<br/><br/>

## v0.1.0 - 2021.05.10

### Added
- Functionality
	- Integer and rational number representations
	- Basic operations on the numbers
	- Arbitrary accuracy arithmetic
	- Multiple numeral systems
	- Rounding in several ways
	- Accuracy definition object
- Readme file
- Changelog file
- Licence file
- Header files
	- include/Matek.h
	- include/Exception/DivideByZero.h
	- include/Exception/InvalidConstructorStringArgument.h
	- include/Exception/InvalidRadix.h
	- include/Exception/InvalidRoundingMethod.h
	- include/Exception/InvalidZeroArgument.h
	- include/Math/NumberTheory/Accuracy.h
	- include/Math/NumberTheory/Radix.h
	- include/Math/NumberTheory/Rounding.h
	- include/Math/NumberTheory/RoundingMethod.h
	- include/Math/NumberTheory/Number/Integer.h
	- include/Math/NumberTheory/Number/Rational.h
- Library files
	- for Windows, Linux and MacOS
	- for x86 and x64 architecture
- Documentation files to create a full API reference.
- Example files for the easier understanding of the library.