# include <stdio.h>
# define N 20

int main() {

	int arr[N][N] = {

		{1, 2, 3, 4},
		{2, 3, 5, 6},
		{1, 5,6, 3},
		{2,5,6,2}
	};

	int sum =0;
	
	for(int i=0; i<4; ++i) {

		for(int j=0; j<4; ++j)

			if(i<j)
				sum += arr[i][j];
	}
	

	printf("\nsum is : %d", sum);

	return 0;
}
