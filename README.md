Jacob Leuquire
COSC 2030 Lab 3
Oct 1, 2018

1 & 2) Overflow at n = 256, it gives a negative value with short data type.

3) Long data type allows a larger limit, up to n = 65536, storing a negative value for sum.

4) For the float, the overflow is at n = 35, where the product returns "inf" for the value and can
	no longer store the number.

5) For the double, the overflow is at n = 170, where the product returns "inf" for the value and can
	no longer store the number.

6) The expected value is 0 if the computations are correct. Double data type overflows at n = 77,
	while float overflows at n = 80. Both show negative values at overflow, but the double data type
	will show the precision errors as low as n = 5, where the Ratio Sum is no longer equal to 0.

7 & 8) The float data type is storing i = 3.4 to a far significant digit, and this means i = 3.4 isn't exact,
	it is stored as 3.39999999... and the added 0.2 each iteration will be able to go one step further 
	than the double, because the extra step is still less than 4.4, even though the cout is exactly 4.4,
	it is really a rounded 4.39999999.... Since the double forces the digits to be exact, the addition is
	exactly as the numbers read, meaning 3.4 is stored as 3.4, and 4.4 as 4.4.

