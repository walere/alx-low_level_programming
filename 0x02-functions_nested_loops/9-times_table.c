#include <stdio.h>







int main(void)
{
	int a;
	int b;
	int result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
		result = a * b;
		printf("%3d" , result);
		printf(",");
		printf(" ");
		}
	printf("\n");
	}
	return (0);

}
