# include <stdio.h>
# define N 20

int main() {

	int arr[N], number, i=0;

	printf("\nEnter the number: ");
	scanf("%d", &number);

	while(number >= 1) {

		int digit = number%10;
		arr[i++] = digit;
		number /= 10;
	}

	for(int j=i-1; j>=0; j--) {

		printf("%3d", arr[j]);
	}

	printf("\n\n");
	
	return 0;
}