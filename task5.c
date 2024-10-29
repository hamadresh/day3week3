#include <stdio.h>

int main() {
    int size = 2;  
    int sizec = 2;
    int matrix[size][sizec];  
    int vector[size];         
    int i, j;
    int output_vector[sizec];

    for(i = 0; i < sizec; i++)
    {
	    output_vector[i]=0;
    }

    /* input matrix values */
    for(i = 0; i < size; i++) 
    {
        for(j = 0; j < sizec; j++) 
	{
            printf("insert matrix value [ %d, %d ]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    /* input vector values */
    for(i = 0; i < size; i++) 
    {
        printf("insert vector value %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    /* printing matrix */
    printf("printing matrix:\n");
    for(i = 0; i < size; i++) 
    {
        for(j = 0; j < sizec; j++) 
	{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");  
    }


    printf("printing vector:\n");
    /* matrix multiplication */
    
    for(i = 0; i < size; i++) 
    {
        printf("%d ", vector[i]);
        printf(" ");  
    }
    printf("\n");



    for(i = 0; i < size; i++) 
    {
        for(j = 0; j < sizec; j++) 
	{
		output_vector[i]= vector[j] * matrix[j][i]+ output_vector[i];
        }
    }
    printf("output vector is: \n");
    for(i=0; i < size; i++)
    {
	    printf("%d \n", output_vector[i]);
    }
    return 0;
}

