# Matek API reference

<br/>

## Matek::Math::Analysis::Numerical::Constant

Contains functions of constants.<br/>

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational pi(
	const Matek::Math::NumberTheory::Number::Rational& epsilon =
		Matek::Math::NumberTheory::Number::Rational("0.00000001")
);
```

Computes approximation of pi with arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& epsilon`
	- The result will be within this epsilon accuracy. Epsilon represents an absolute margin of error.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidEpsilonValue`

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational e(
	const Matek::Math::NumberTheory::Number::Rational& epsilon =
		Matek::Math::NumberTheory::Number::Rational("0.00000001")
);
```

Computes approximation of Euler's number with arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& epsilon`
	- The result will be within this epsilon accuracy. Epsilon represents an absolute margin of error.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidEpsilonValue`

<br/><br/>