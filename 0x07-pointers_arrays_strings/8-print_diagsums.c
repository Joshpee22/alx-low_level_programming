/**                                                                                                                                
 * File: 8-print_diagsums.c                                                                                                        
 * Auth: joshpee                                                                                                                  
 */                                                                                                                                
                                                                                                                                   
#include "main.h"                                                                                                                  
                                                                                                                                
/**                                                                                                                                
 * print_diagsums - Prints the sum of the two diagonals                                                                            
 * of a square matrix of integers.                                                                                
 * @a: The matrix of integers.                                                                                                     
 * @size: The size of the matrix.                                                                                                  
 */


void print_diagsums(int *a, int size)
{
	int index, S1, S2;

	S1 = 0;
	S2 = 0;

	for (index = 0; index < (size * size); i++)
	{
		if (index % (size + 1) == 0)
			S1 += a[index];
		if (index % (size - 1) == 0 && i != 0 && i < size * size - 1)
			S2 += a[index];
	}
	printf("%d, %d\n", S1, S2);
}
