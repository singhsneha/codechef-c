#include <stdio.h>

int main(int argc, char const *argv[])
{
	long n;
	long input, output;
	scanf("%ld", &n);
	while(n){
		n--;
		scanf("%ld", &input);
		output = 0;
		while(input){
			output += input / 5;
			input /= 5; 
		}
		printf("%ld\n", output);
	}
	return 0;
}