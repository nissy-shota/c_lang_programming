#include <stdio.h>

int main(void)
{
	int i = 100;
	FILE *file;
	file = fopen("test.txt","w");
	fprintf(file,"%d",i);
	fclose(file);
	return 0;
}