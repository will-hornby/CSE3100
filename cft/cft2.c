#include <stdio.h>

int main()
{
	float sum;
	int i;
    int n = 10000;
	
	// Calculating the sum using a for loop
	sum = 0;
	for(i=0; i<=n; i++)
	{
		sum += 8/(4*i + 1)/(4*i + 3);
	}
	//print out the sum. 
	//Note how we set the format to only two digits after the decimal point 
	printf("The sum is %f\n", sum); 
	return 0;
}