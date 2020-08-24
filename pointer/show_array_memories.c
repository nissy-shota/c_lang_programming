#include <stdio.h>

int main(void)
{
	int array[10];
	printf("array___(%p)\n",array);
	printf("array0\n",&array[0]);
	printf("array1\n",&array[1]);
	printf("array2\n",&array[2]);
	return 0;
}