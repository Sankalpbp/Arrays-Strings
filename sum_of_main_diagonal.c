# include <stdio.h>
# define N 20

int main() {

	int arr[N][N], n;

	printf("\nEnter the number of elements in the row that is same as the column: ");
	scanf("%d", &n);

	int sum = 0;

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			arr[i][j] = (i+j+1);


	for(int i=0; i<n; i++) {

		for(int j=0; j<n; j++) {

			if(i==j) {
				sum += arr[i][j];
			}
		}

	}

	printf("\nThe required sum is : %d", sum);

	return 0;

}