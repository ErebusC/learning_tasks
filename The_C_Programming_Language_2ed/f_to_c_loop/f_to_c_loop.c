#include <stdio.h>
main() {
	
	int fahrenheit = 0;
	int celsius = 0;
	
	//My quick implementation of a similar program shown in chapter 1.2
	//For loop that prints out a table of Fahrenheit values with the celsius conversion
	for (int i = 0; i <= 100; ++i)
	{
		fahrenheit = i;
		celsius = 5 * (fahrenheit - 32) / 9;
		printf("Degrees F:%d  Degrees C:%d\n",  fahrenheit, celsius);
	}


}
