# include <stdio.h>
# define N 20

int main() {

	int arr[N][N], n;

	printf("\nEnter the order of the matrix: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++) {

		printf("\nEnter first row: ");

		for(int j=0; j<n; j++) {	

			scanf("%d", &arr[i][j]);
		}
	}

	int flag = 0;

	for(int i=0; i<n; i++) {

		for(int j=0; j<n; j++) {

			if(arr[i][j] == 0 && i>j)
				continue;

			else {
				printf("\n*****************Not UPPER TRIANGULAR******************");
				return 0;
			}
		}

	}

	printf("\n***************UPPER TRIANGULAR**************");

	return 0;
}