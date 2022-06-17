# Matek API reference

<br/>

## Matek::Math::Analysis::Numerical::Exponentiation

Contains exponentiation functions.<br/>

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational power(
	const Matek::Math::NumberTheory::Number::Rational& base,
	const Matek::Math::NumberTheory::Number::Rational& exponent = 2,
	const Matek::Math::NumberTheory::Accuracy& accuracy = 8
);
```

Computes power with arbitrary rational exponent and arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& base`
- `const Matek::Math::NumberTheory::Number::Rational& exponent`
- `const const Matek::Math::NumberTheory::Accuracy& accuracy`
	- The accuracy definition object

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidRadix`
- `Matek::Exception::InvalidRoundingMethod`
- `Matek::Exception::InvalidExponentOfPower`
- `Matek::Exception::InvalidDegreeOfRoot`
- `Matek::Exception::InvalidRadicandOfRoot`

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational root(
	const Matek::Math::NumberTheory::Number::Rational& radicand,
	const Matek::Math::NumberTheory::Number::Rational& degree = 2,
	const Matek::Math::NumberTheory::Accuracy& accuracy = 8
);
```

Computes root with arbitrary rational degree and arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& radicand`
- `const Matek::Math::NumberTheory::Number::Rational& degree`
- `const Matek::Math::NumberTheory::Accuracy& accuracy`
	- The accuracy definition object

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidRadix`
- `Matek::Exception::InvalidRoundingMethod`
- `Matek::Exception::InvalidExponentOfPower`
- `Matek::Exception::InvalidDegreeOfRoot`
- `Matek::Exception::InvalidRadicandOfRoot`

<br/><br/>