#include <stdio.h>

void main() {
	char char_arr[5];
	int int_arr[5];
	short short_arr[5];
	double double_arr[5];
	int i;
	for(i=0; i<=5; i++)
	{
		printf("address of char %d is %u \n", i+1, &char_arr[i]);
	}
	for(i=0; i<=5; i++)
	{
	       	printf("address of int %d is: %u \n",i+1, &int_arr[i]);
	}
	for(i=0; i<=5; i++)
	{
	       	printf("address of short %d is: %u \n",i+1, &short_arr[i]);	
	}

	for(i=0; i<=5; i++)
	{
	       	printf("address of double %d is %u:\n",i+1, &double_arr[i]);
	}
}
