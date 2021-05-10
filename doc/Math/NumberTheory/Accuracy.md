# Matek API reference

<br/>

## Matek::Math::NumberTheory::Accuracy

Defines accuracy.<br/>

<br/><br/>



### **Constructors**

<br/>

```c++
Accuracy(
	long long int digit,
	Matek::Math::NumberTheory::Radix radix =
		Matek::Math::NumberTheory::Radix::RADIX_10,
	Matek::Math::NumberTheory::RoundingMethod method =
		Matek::Math::NumberTheory::RoundingMethod::HALF_TO_EVEN
);
```

Constructs accuracy definition.

Parameters
- `long long int digit`
	- (Examples are in `HALF_TO_EVEN` rounding method)
	- Values:
		- 0:
			- Rounds to integer.
			- For example: `547.19` will be `547`
		- Positive values:
			- Defines, to how many digits will be rounded in the fractional part.
			- For example: With value 3, `17.36428` will be `17.364`
		- Negative values:
			- Defines, how many digits will be rounded in the integer part.
			- For example: With value -2, `812.3` will be `800`
- `Matek::Math::NumberTheory::Radix radix`
	- For valid radix values, see [Radix.md](https://github.com/attila-papp/matek/blob/v0.1.0/doc/Math/NumberTheory/Radix.md)
- `Matek::Math::NumberTheory::RoundingMethod method`
	- For valid rounding method values, see [RoundingMethod.md](https://github.com/attila-papp/matek/blob/v0.1.0/doc/Math/NumberTheory/RoundingMethod.md)

<br/><br/>



```c++
Accuracy(const Accuracy& ref);
```

Copy constructs accuracy definition.

Parameters
- `const Matek::Math::NumberTheory::Accuracy& ref`

<br/><br/>



### **Getters and setters**

<br/>

```c++
long long int getDigit() const;
```

Gets digit.

Return value
- `long long int`

<br/><br/>



```c++
Accuracy& setDigit(long long int digit);
```

Sets digit.

Parameters
- `long long int digit`

Return value
- `Matek::Math::NumberTheory::Accuracy&`

<br/><br/>



```c++
Matek::Math::NumberTheory::Radix getRadix() const;
```

Gets radix.

Return value
- `Matek::Math::NumberTheory::Radix`

<br/><br/>



```c++
Accuracy& setRadix(Matek::Math::NumberTheory::Radix radix);
```

Sets radix.

Parameters
- `Matek::Math::NumberTheory::Radix radix`

Return value
- `Matek::Math::NumberTheory::Accuracy&`

<br/><br/>



```c++
Matek::Math::NumberTheory::RoundingMethod getRoundingMethod() const;
```

Gets rounding method.

Return value
- `Matek::Math::NumberTheory::RoundingMethod`

<br/><br/>



```c++
Accuracy& setRoundingMethod(Matek::Math::NumberTheory::RoundingMethod method);
```

Sets rounding method.

Parameters
- `Matek::Math::NumberTheory::RoundingMethod method`

Return value
- `Matek::Math::NumberTheory::Accuracy&`

<br/><br/>



### **Comparison operators**

<br/>

```c++
bool operator==(const Accuracy& ref) const;
```

Equal operator.<br/>
All members are considered.

Parameters
- `const Matek::Math::NumberTheory::Accuracy& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator==(long long int digit, const Accuracy& ref);
```

Equal operator with built-in integer type on the left.<br/>
All members are considered.

Parameters
- `long long int digit`
- `const Matek::Math::NumberTheory::Accuracy& ref`

Return value
- `bool`

<br/><br/>



```c++
bool operator!=(const Accuracy& ref) const;
```

Not equal operator.<br/>
All members are considered.

Parameters
- `const Matek::Math::NumberTheory::Accuracy& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator!=(long long int digit, const Accuracy& ref);
```

Not equal operator with built-in integer type on the left.<br/>
All members are considered.

Parameters
- `long long int digit`
- `const Matek::Math::NumberTheory::Accuracy& ref`

Return value
- `bool`

<br/><br/>



### **Assigment operators**

<br/>

```c++
Accuracy& operator=(const Accuracy& ref);
```

Assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Accuracy& ref`

Return value
- `Matek::Math::NumberTheory::Accuracy&`

<br/><br/>