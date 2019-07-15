# include <stdio.h>
# define N 20

int main() {

	int arr[N][N], n;

	printf("\nEnter the number of elments: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++) {

		for(int j=0; j<n; j++) {
			arr[i][j] = i+j+1;
		}
	}

	int product = 1;

	for(int i=0; i<2; ++i) {
		for (int j = 1; j < 3; ++j) {
			
			product *= arr[i][j];
		}
	}

	printf("\nProduct is : %d\n", product);

	return 0;
}