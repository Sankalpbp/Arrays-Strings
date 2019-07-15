# include <stdio.h>
# include <math.h>
# define N 20

int main() {

	int arr[N], n;

	printf("\nEnter the number of elements: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++) {
		arr[i] = i+1;
	}

	int sum = 0;

	for(int i=0; i<n; i++) {
		sum += pow(arr[i], 2);
	}

	printf("\nthe sum of squares is : %"d, sum);

	return 0;
}