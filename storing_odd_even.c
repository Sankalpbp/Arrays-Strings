# include <stdio.h>
# define N 20

void display_array(int arr[], int n);

int main() {

	int arr[N][N] = {
		{1, 2, 3, 4},
		{3, 5 ,6, 6},
		{21, 54, 32, 5},
		{2, 3, 5, 6},
	};

	int arr_odd[N], arr_even[N];
	int k=0, l=0;

	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			if(arr[i][j] %2 == 0) {
				arr_even[k++] = arr[i][j];
			}
			else {
				arr_odd[l++] = arr[i][j]; 
			}
		}
	}

	display_array(arr_odd, l);
	display_array(arr_even, k);

	return 0;
}

void display_array(int arr[], int n) {

	printf("\n");
	for(int i=0; i<n; i++) {
		printf(" %d", arr[i]);
	}
}

