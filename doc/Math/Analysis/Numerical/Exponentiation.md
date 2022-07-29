# Matek API reference

<br/>

## Matek::Math::Analysis::Numerical::Exponentiation

Contains exponentiation functions.<br/>

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational power(
	const Matek::Math::NumberTheory::Number::Rational& base,
	const Matek::Math::NumberTheory::Number::Rational& exponent = 2,
	const Matek::Math::NumberTheory::Number::Rational& epsilon =
		Matek::Math::NumberTheory::Number::Rational("0.00000001")
);
```

Computes approximation of power with arbitrary rational exponent and arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& base`
- `const Matek::Math::NumberTheory::Number::Rational& exponent`
- `const Matek::Math::NumberTheory::Number::Rational& epsilon`
	- The result will be within this epsilon accuracy

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidExponentOfPower`
- `Matek::Exception::InvalidDegreeOfRoot`
- `Matek::Exception::InvalidRadicandOfRoot`
- `Matek::Exception::InvalidEpsilonValue`

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational root(
	const Matek::Math::NumberTheory::Number::Rational& radicand,
	const Matek::Math::NumberTheory::Number::Rational& degree = 2,
	const Matek::Math::NumberTheory::Number::Rational& epsilon =
		Matek::Math::NumberTheory::Number::Rational("0.00000001")
);
```

Computes approximation of root with arbitrary rational degree and arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& radicand`
- `const Matek::Math::NumberTheory::Number::Rational& degree`
- `const Matek::Math::NumberTheory::Number::Rational& epsilon`
	- The result will be within this epsilon accuracy

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidExponentOfPower`
- `Matek::Exception::InvalidDegreeOfRoot`
- `Matek::Exception::InvalidRadicandOfRoot`
- `Matek::Exception::InvalidEpsilonValue`

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational naturalLogarithm(
	const Matek::Math::NumberTheory::Number::Rational& x,
	const Matek::Math::NumberTheory::Number::Rational& epsilon =
		Matek::Math::NumberTheory::Number::Rational("0.00000001")
);
```

Computes approximation of natural logarithm with arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& x`
- `const Matek::Math::NumberTheory::Number::Rational& epsilon`
	- The result will be within this epsilon accuracy

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidAntiLogarithm`
- `Matek::Exception::InvalidEpsilonValue`

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational logarithm(
	const Matek::Math::NumberTheory::Number::Rational& x,
	const Matek::Math::NumberTheory::Number::Rational& base,
	const Matek::Math::NumberTheory::Number::Rational& epsilon =
		Matek::Math::NumberTheory::Number::Rational("0.00000001")
);
```

Computes approximation of logarithm with arbitrary rational base and arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& x`
- `const Matek::Math::NumberTheory::Number::Rational& base`
- `const Matek::Math::NumberTheory::Number::Rational& epsilon`
	- The result will be within this epsilon accuracy

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidAntiLogarithm`
- `Matek::Exception::InvalidBaseOfLogarithm`
- `Matek::Exception::InvalidEpsilonValue`

<br/><br/>