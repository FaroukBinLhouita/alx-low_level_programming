#include <stdio.h>

int main (void)
{	
	char* name[5] ={
	"int",
	"long long int",
	"long int",
	"float",
	"char"
	};
	int array[5];
	array[0] = sizeof(int);
        array[1] = sizeof(long long int);
        array[2] = sizeof(long int); 
        array[3] = sizeof(float);
        array[4] = sizeof(char);
	for (int i = 0; i < 5; i++)
	{
		printf("the size of %s is %d\n", name[i], array[i]);
	}	
	return 0;
}
