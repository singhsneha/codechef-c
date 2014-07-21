#include<stdio.h>

int main(int argc, char const *argv[])
{
	int input;
	do {
		scanf ("%d", &input);
		if (input != 42)
		{
			printf("%d\n", input);
		}
	} while (input != 42);
	return 0;
}