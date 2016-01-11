// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
#define PI 3.14;

int main()
{
	//Some printf() tests
	printf(&"Hello World"[6]);		//access 5th element in array
	
	//Some Pointer tests
	char *aPointer = calloc(8);					//declare pointer, initialized with 0's
	
	for (i = 0; i < 8; i++)
		printf("My pointer is pointing at the integer : %d", *aPointer);
		
	

	return 0;
}

