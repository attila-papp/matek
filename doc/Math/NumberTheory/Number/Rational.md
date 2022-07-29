# Matek API reference

<br/>

## Matek::Math::NumberTheory::Number::Rational

Represents a rational number, and implements basic operations on it.<br/>
The inner representation of the number is a fraction.<br/>
This number can be practically any size with any accuracy, there is only hardware limit.<br/>

<br/><br/>



### **Constructors**

<br/>

```c++
Rational(long long int number);
```

Constructs rational number with built-in integer type.

Parameters
- `long long int number`
	- The number we wish to create.

<br/><br/>



```c++
Rational(
	std::string str,
	Matek::Math::NumberTheory::Radix radix =
		Matek::Math::NumberTheory::Radix::RADIX_10
);
```

Constructs rational number with `std::string` type.

Parameters
- `std::string str`
	- The number, represented with a string.
	- Valid string values:
		- Base 10: `^(0(\\.0+)?)|(-?((0\\.[0-9]*[1-9][0-9]*)|([1-9][0-9]*(\\.[0-9]+)?)))$`
			- Examples of valid values:
				- `29.41`
				- `-9981`
			- Examples of invalid values:
				- `072.9`
				- `- 2986`
				- `c809.1b`
		- Base 16: `^(0(\\.0+)?)|(-?((0\\.[0-9a-fA-F]*[1-9a-fA-F][0-9a-fA-F]*)|([1-9a-fA-F][0-9a-fA-F]*(\\.[0-9a-fA-F]+)?)))$`
			- Examples of valid values:
				- `b8f2`
				- `-670d.3ce5`
			- Examples of invalid values:
				- `0d40a`
				- `- 1e05.9ae`
				- `w73pm9`
- `Matek::Math::NumberTheory::Radix radix`
	- For valid radix values, see [Radix.md](https://github.com/attila-papp/matek/blob/v0.3.0/doc/Math/NumberTheory/Radix.md)

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`
- `Matek::Exception::InvalidRadix`

<br/><br/>



```c++
Rational(const Integer& numerator, const Integer& denominator = 1);
```

Constructs rational number with fraction.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& numerator`
	- The numerator of the fraction.
- `const Matek::Math::NumberTheory::Number::Integer& denominator`
	- The denominator of the fraction.

Exceptions
- `Matek::Exception::InvalidZeroArgument`

<br/><br/>



```c++
Rational(const Rational& ref);
```

Copy constructs rational number.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

<br/><br/>



### **Comparison operators**

<br/>

```c++
bool operator==(const Rational& ref) const;
```

Equal operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator==(long long int number, const Rational& ref);
```

Equal operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator==(std::string str, const Rational& ref);
```

Equal operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator!=(const Rational& ref) const;
```

Not equal operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator!=(long long int number, const Rational& ref);
```

Not equal operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator!=(std::string str, const Rational& ref);
```

Not equal operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator>(const Rational& ref) const;
```

Greater than operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator>(long long int number, const Rational& ref);
```

Greater than operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator>(std::string str, const Rational& ref);
```

Greater than operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator>=(const Rational& ref) const;
```

Greater than or equal operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator>=(long long int number, const Rational& ref);
```

Greater than or equal operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator>=(std::string str, const Rational& ref);
```

Greater than or equal operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator<(const Rational& ref) const;
```

Less than operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator<(long long int number, const Rational& ref);
```

Less than operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator<(std::string str, const Rational& ref);
```

Less than operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator<=(const Rational& ref) const;
```

Less than or equal operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator<=(long long int number, const Rational& ref);
```

Less than or equal operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator<=(std::string str, const Rational& ref);
```

Less than or equal operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



### **Basic operations**

<br/>

```c++
Rational operator+(const Rational& ref) const;
```

Addition operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
friend Rational operator+(long long int number, const Rational& ref);
```

Addition operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
friend Rational operator+(std::string str, const Rational& ref);
```

Addition operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
Rational operator-(const Rational& ref) const;
```

Subtraction operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
friend Rational operator-(long long int number, const Rational& ref);
```

Subtraction operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
friend Rational operator-(std::string str, const Rational& ref);
```

Subtraction operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
Rational operator*(const Rational& ref) const;
```

Multiplication operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
friend Rational operator*(long long int number, const Rational& ref);
```

Multiplication operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
friend Rational operator*(std::string str, const Rational& ref);
```

Multiplication operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
Rational operator/(const Rational& ref) const;
```

Division operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::DivideByZero`

<br/><br/>



```c++
friend Rational operator/(long long int number, const Rational& ref);
```

Division operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::DivideByZero`

<br/><br/>



```c++
friend Rational operator/(std::string str, const Rational& ref);
```

Division operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::DivideByZero`
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
Rational operator++();
```

Pre-increment operator.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational operator++(int);
```

Post-increment operator.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational operator--();
```

Pre-decrement operator.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational operator--(int);
```

Post-decrement operator.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



### **Assigment operators**

<br/>

```c++
Rational& operator=(const Rational& ref);
```

Assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational&`

<br/><br/>



```c++
Rational operator+=(const Rational& ref);
```

Addition assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational operator-=(const Rational& ref);
```

Subtraction assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational operator*=(const Rational& ref);
```

Multiplication assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational operator/=(const Rational& ref);
```

Division assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `Matek::Math::NumberTheory::Number::Rational`

Exceptions
- `Matek::Exception::DivideByZero`

<br/><br/>



### **Other functions**

<br/>

```c++
bool isNegative() const;
```

Checks if the number is negative.

Return value
- `bool`

<br/><br/>



```c++
Rational getAbsolute() const;
```

Gets the absolute value of the number.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational setAbsolute();
```

Sets number to its absolute value, AND returns with the absolute value.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational getInverse() const;
```

Gets the inverse of the number.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational setInverse();
```

Sets number to its inverse, AND returns with the inverse.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
Rational simplificate();
```

Simplificates the fraction in the inner representation, AND returns with the number.

Return value
- `Matek::Math::NumberTheory::Number::Rational`

<br/><br/>



```c++
std::string toString(
	Matek::Math::NumberTheory::Accuracy accuracy = 8
) const;
```

Gets the string representation of the number.

Parameters
- `Matek::Math::NumberTheory::Accuracy accuracy`
	- The accuracy definition object

Return value
- `std::string`

Exceptions
- `Matek::Exception::InvalidRadix`
- `Matek::Exception::InvalidRoundingMethod`

<br/><br/>



```c++
Integer toInteger(
	Matek::Math::NumberTheory::RoundingMethod method =
		Matek::Math::NumberTheory::RoundingMethod::HALF_TO_EVEN
) const;
```

Rounds number to integer and returns with `Matek::Math::NumberTheory::Number::Integer` type.

Parameters
- `Matek::Math::NumberTheory::RoundingMethod method`
	- For valid rounding method values, see [RoundingMethod.md](https://github.com/attila-papp/matek/blob/v0.3.0/doc/Math/NumberTheory/RoundingMethod.md)

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::InvalidRoundingMethod`

<br/><br/>



```c++
friend std::ostream& operator<<(std::ostream& os, const Rational& ref);
```

Insertion (<<) operator.

Parameters
- `std::ostream& os`
- `const Matek::Math::NumberTheory::Number::Rational& ref`

Return value
- `std::ostream&`

<br/><br/>