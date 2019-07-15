# include <stdio.h>
# define N 20

int main() {

	int arr[N][N] = {
		{1, 0, 0, 1, 2},
		{3, 0, 2, 0, 0},
		{2, 0, 1, 0, 1},
	};

	int count= 0;
	for(int i=0; i<3; i++) {

		for(int j=0; j<5; j++) {
			if(arr[i][j] != 0) {
				count++;
			}
		}
	}

	printf("\nNon zero elements are: %d", count);

	return 0;

}