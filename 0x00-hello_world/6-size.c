#include <stdio.h>
/**
 *  main -entry
 *  Return:0
 */
int main(void)
{
  int i;
  double d;
  char c;
	printf("Size of a char: %i byte(s)\n", sizeof(char));
        printf("Size of an int: %i byte(s)\n", sizeof(int));
        printf("size of a long int: %i byte(s)\n", sizeof(long int));
        printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
        printf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}

