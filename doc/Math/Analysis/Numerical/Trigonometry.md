# Matek API reference

<br/>

## Matek::Math::Analysis::Numerical::Trigonometry

Contains trigonometry functions.<br/>

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational sine(
	const Matek::Math::NumberTheory::Number::Rational& x,
	const Matek::Math::NumberTheory::Number::Rational& epsilon =
		Matek::Math::NumberTheory::Number::Rational("0.00000001")
);
```

Computes approximation of sine with arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& x`
	- Angle in radians
- `const Matek::Math::NumberTheory::Number::Rational& epsilon`
	- The result will be within this epsilon accuracy. Epsilon represents an absolute margin of error.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidEpsilonValue`

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational cosine(
	const Matek::Math::NumberTheory::Number::Rational& x,
	const Matek::Math::NumberTheory::Number::Rational& epsilon =
		Matek::Math::NumberTheory::Number::Rational("0.00000001")
);
```

Computes approximation of cosine with arbitrary accuracy.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& x`
	- Angle in radians
- `const Matek::Math::NumberTheory::Number::Rational& epsilon`
	- The result will be within this epsilon accuracy. Epsilon represents an absolute margin of error.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidEpsilonValue`

<br/><br/>