# Matek API reference

<br/>

## Matek::Math::NumberTheory::Number::Integer

Represents an integer number, and implements basic operations on it.<br/>
This number can be practically any size, there is only hardware limit.<br/>

<br/><br/>



### **Constructors**

<br/>

```c++
Integer(long long int number);
```

Constructs integer number with built-in integer type.

Parameters
- `long long int number`
	- The number we wish to create.

<br/><br/>



```c++
Integer(
	std::string str,
	Matek::Math::NumberTheory::Radix radix =
		Matek::Math::NumberTheory::Radix::RADIX_10
);
```

Constructs integer number with `std::string` type.

Parameters
- `std::string str`
	- The number, represented with a string.
	- Valid string values:
		- Base 10: `^(0)|(-?[1-9][0-9]*)$`
			- Examples of valid values:
				- `982`
				- `-1073`
			- Examples of invalid values:
				- `0472`
				- `- 65`
				- `6c3`
		- Base 16: `^(0)|(-?[1-9a-fA-F][0-9a-fA-F]*)$`
			- Examples of valid values:
				- `a830b1`
				- `-709`
			- Examples of invalid values:
				- `066f2`
				- `- 9d3`
				- `s1b76k`
- `Matek::Math::NumberTheory::Radix radix`
	- For valid radix values, see [Radix.md](https://github.com/attila-papp/matek/blob/v0.2.0/doc/Math/NumberTheory/Radix.md)

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`
- `Matek::Exception::InvalidRadix`

<br/><br/>



```c++
Integer(const Integer& ref);
```

Copy constructs integer number.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

<br/><br/>



### **Comparison operators**

<br/>

```c++
bool operator==(const Integer& ref) const;
```

Equal operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator==(long long int number, const Integer& ref);
```

Equal operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator==(std::string str, const Integer& ref);
```

Equal operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator!=(const Integer& ref) const;
```

Not equal operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator!=(long long int number, const Integer& ref);
```

Not equal operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator!=(std::string str, const Integer& ref);
```

Not equal operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator>(const Integer& ref) const;
```

Greater than operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator>(long long int number, const Integer& ref);
```

Greater than operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator>(std::string str, const Integer& ref);
```

Greater than operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator>=(const Integer& ref) const;
```

Greater than or equal operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator>=(long long int number, const Integer& ref);
```

Greater than or equal operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator>=(std::string str, const Integer& ref);
```

Greater than or equal operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator<(const Integer& ref) const;
```

Less than operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator<(long long int number, const Integer& ref);
```

Less than operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator<(std::string str, const Integer& ref);
```

Less than operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
bool operator<=(const Integer& ref) const;
```

Less than or equal operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator<=(long long int number, const Integer& ref);
```

Less than or equal operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

<br/><br/>



```c++
friend bool operator<=(std::string str, const Integer& ref);
```

Less than or equal operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `bool`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



### **Basic operations**

<br/>

```c++
Integer operator+(const Integer& ref) const;
```

Addition operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
friend Integer operator+(long long int number, const Integer& ref);
```

Addition operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
friend Integer operator+(std::string str, const Integer& ref);
```

Addition operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
Integer operator-(const Integer& ref) const;
```

Subtraction operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
friend Integer operator-(long long int number, const Integer& ref);
```

Subtraction operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
friend Integer operator-(std::string str, const Integer& ref);
```

Subtraction operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
Integer operator*(const Integer& ref) const;
```

Multiplication operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
friend Integer operator*(long long int number, const Integer& ref);
```

Multiplication operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
friend Integer operator*(std::string str, const Integer& ref);
```

Multiplication operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
Integer operator/(const Integer& ref) const;
```

Division operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::DivideByZero`

<br/><br/>



```c++
friend Integer operator/(long long int number, const Integer& ref);
```

Division operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::DivideByZero`

<br/><br/>



```c++
friend Integer operator/(std::string str, const Integer& ref);
```

Division operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::DivideByZero`
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
Integer operator%(const Integer& ref) const;
```

Modulus operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::DivideByZero`

<br/><br/>



```c++
friend Integer operator%(long long int number, const Integer& ref);
```

Modulus operator with built-in integer type on the left.

Parameters
- `long long int number`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::DivideByZero`

<br/><br/>



```c++
friend Integer operator%(std::string str, const Integer& ref);
```

Modulus operator with `std::string` type on the left.

Parameters
- `std::string str`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::DivideByZero`
- `Matek::Exception::InvalidConstructorStringArgument`

<br/><br/>



```c++
Integer operator++();
```

Pre-increment operator.

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
Integer operator++(int);
```

Post-increment operator.

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
Integer operator--();
```

Pre-decrement operator.

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
Integer operator--(int);
```

Post-decrement operator.

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



### **Assigment operators**

<br/>

```c++
Integer& operator=(const Integer& ref);
```

Assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer&`

<br/><br/>



```c++
Integer operator+=(const Integer& ref);
```

Addition assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
Integer operator-=(const Integer& ref);
```

Subtraction assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
Integer operator*=(const Integer& ref);
```

Multiplication assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
Integer operator/=(const Integer& ref);
```

Division assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

Exceptions
- `Matek::Exception::DivideByZero`

<br/><br/>



```c++
Integer operator%=(const Integer& ref);
```

Modulus assignment operator.

Parameters
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `Matek::Math::NumberTheory::Number::Integer`

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
Integer getAbsolute() const;
```

Gets the absolute value of the number.

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
Integer setAbsolute();
```

Sets number to its absolute value, AND returns with the absolute value.

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
Integer getInverse() const;
```

Gets the inverse of the number.

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
Integer setInverse();
```

Sets number to its inverse, AND returns with the inverse.

Return value
- `Matek::Math::NumberTheory::Number::Integer`

<br/><br/>



```c++
std::string toString(
	Matek::Math::NumberTheory::Radix radix =
		Matek::Math::NumberTheory::Radix::RADIX_10
) const;
```

Gets the string representation of the number.

Parameters
- `Matek::Math::NumberTheory::Radix radix`

Return value
- `std::string`

Exceptions
- `Matek::Exception::InvalidRadix`

<br/><br/>



```c++
friend std::ostream& operator<<(std::ostream& os, const Integer& ref);
```

Insertion (<<) operator.

Parameters
- `std::ostream& os`
- `const Matek::Math::NumberTheory::Number::Integer& ref`

Return value
- `std::ostream&`

<br/><br/>