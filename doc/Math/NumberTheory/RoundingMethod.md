# Matek API reference

<br/>

## Matek::Math::NumberTheory::RoundingMethod

Enum class.<br/>
Contains rounding methods.<br/>
For more information about rounding methods, see [https://en.wikipedia.org/wiki/Rounding](https://en.wikipedia.org/wiki/Rounding).

<br/><br/>



```c++
TRUNCATE
```

Round towards zero.<br/>
Limiting the number of digits.

<br/><br/>



```c++
FLOOR
```

Round towards negative infinity.

<br/><br/>



```c++
CEIL
```

Round towards positive infinity.

<br/><br/>



```c++
HALF_AWAY_FROM_ZERO
```

Round half away from zero.<br/>
Also known as commercial rounding.

<br/><br/>



```c++
HALF_TO_EVEN
```

Round half to even.<br/>
Also known as bankers' rounding or convergent rounding.

<br/><br/>