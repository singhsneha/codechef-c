#include <stdio.h>

int main(int argc, char const *argv[])
{
	float balance;
	int withdrawal;

	scanf ("%d %f", &withdrawal, &balance);

	if (withdrawal % 5 == 0 && balance >= (0.5 + withdrawal))
	{
		printf("%0.2f\n", balance - withdrawal - 0.5);
	} else {
		printf("%0.2f\n", balance);
	}
	return 0;
}