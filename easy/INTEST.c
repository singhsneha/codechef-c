#include <stdio.h>

int main(int argc, char const *argv[])
{
	long n, k;
	long input;
	long output = 0;
	scanf("%ld %ld", &n, &k);
	while(n){
		n--;
		scanf("%ld", &input);
		if (input % k == 0)
		{
			output++;
		}
	}
	printf("%ld\n", output);
	return 0;
}