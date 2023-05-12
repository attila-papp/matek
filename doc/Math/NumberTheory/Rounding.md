# Matek API reference

<br/>

## Matek::Math::NumberTheory::Rounding

Contains rounding functions.<br/>

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Rational round(
	const Matek::Math::NumberTheory::Number::Rational& number,
	const Matek::Math::NumberTheory::Accuracy& accuracy = 0
);
```

Rounds rational number.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& number`
	- The number we wish to round.
- `const Matek::Math::NumberTheory::Accuracy& accuracy`
	- The accuracy definition object.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidRadix`
- `Matek::Exception::InvalidRoundingMethod`

<br/><br/>