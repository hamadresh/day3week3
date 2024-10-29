#include <stdio.h>

void main(){
	short short_num=0x0204;
	char *pointer =(char *)&short_num;
	printf("this is the first byte %d\n", *pointer);
	printf("pointer siz %d\n", sizeof(pointer));	
}
