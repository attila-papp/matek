# Matek API reference

<br/>

## Matek::Math::NumberTheory::Divisibility

Contains divisibility functions.<br/>

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Integer greatestCommonDivisor(
	const Matek::Math::NumberTheory::Number::Integer& a,
	const Matek::Math::NumberTheory::Number::Integer& b
);
```

Calculates greatest common divisor.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& a`
- `const Matek::Math::NumberTheory::Number::Integer& b`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::InvalidZeroArgument`

<br/><br/>



```c++
static Matek::Math::NumberTheory::Number::Integer leastCommonMultiple(
	const Matek::Math::NumberTheory::Number::Integer& a,
	const Matek::Math::NumberTheory::Number::Integer& b
);
```

Calculates least common multiple.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& a`
- `const Matek::Math::NumberTheory::Number::Integer& b`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::InvalidZeroArgument`

<br/><br/>