#include <stdio.h>
int length_sentence(char ch_arr[]);
void count_words(char ch_arr[]);
void num_vowels(char ch_arr[]);
void frequency_vowels(char ch_arr[]);
void main() {
	char ch_arr[100];
	int i;
	scanf("%[^\n]%*c", ch_arr);
	
	length_sentence(ch_arr);
	count_words(ch_arr);
	num_vowels(ch_arr);
	frequency_vowels(ch_arr);
	
}

int length_sentence(char ch_arr[]){
	int i;
	for(i=0;i<=99;i++)
	{
		if ((int)ch_arr[i] >= 65 && (int)ch_arr[i] <=90 || (int)ch_arr[i] >= 97 && (int)ch_arr[i] <= 122 || (int)ch_arr[i]==32)
		{
			continue;
		}
		else
		{
			printf("length of the sentence is %d\n", i);
			break;
		}
	}
}

void count_words(char ch_arr[])
{
	int i;
	int k=1;
	for(i=0;i<=99;i++)
	{
		if ((int)ch_arr[i]==32)
		{
			k=k+1;	
		}	
	}
	printf("number of words is  %d\n", k);
}

void num_vowels(char ch_arr[])
{	
	int i;
	int k=0;
	for(i=0;i<=99;i++)

	{
		if ((int)ch_arr[i] ==97  || (int)ch_arr[i]==101 || (int)ch_arr[i] == 111 || (int)ch_arr[i] == 117 || (int)ch_arr[i]==105)
		{
			k=k+1;	
		}	
		if ((int)ch_arr[i] == (97-32)  || (int)ch_arr[i]== (101-32) || (int)ch_arr[i] == (111-32) || (int)ch_arr[i] == (117-32) || (int)ch_arr[i] == (105-32))
		{
			k=k+1;
		}
	}
	printf("number of vowels is %d \n",k);
}

void frequency_vowels(char ch_arr[])
{	
	int k=0;
	int a=0;
	int e=0;
	int i=0;
	int o=0;
	int u=0;
	for(k=0;k<=99;k++)

	{
		if ((int)ch_arr[k] ==97 || (int)ch_arr[k] ==( 97-32))	
                {

			a=a+1;	
		}	
		if ((int)ch_arr[k] == 101|| (int)ch_arr[k]== (101-32))
		{
			e=e+1;
		}
		if ((int)ch_arr[k] == 111 || (int)ch_arr[k] == (111-32))
		{
			o=o+1;
		}
		if ((int)ch_arr[k] == 117 || (int)ch_arr[k]==(117-32))
		{
			u=u+1;
		}
		if ((int)ch_arr[k]== 105 || (int)ch_arr[k]==(105-32))
		{
			i=i+1;
		}
	}
	printf("number a is %d \n",a);
	printf("number e is %d \n",e);
	printf("number i is %d \n",i);
	printf("number o is %d \n",o);
	printf("number u is %d \n",u);
}
