# include <stdio.h>
# define N 20

void display_array(int arr[], int n);

int main() {

	int arr[N], n;

	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++) {
		arr[i] = (i+1);
	}

	int temp = arr[1];
	arr[1] = arr[n-2];
	arr[n-2] = temp;

	display_array(arr, n);

	return 0;
}

void display_array(int arr[], int n) {

	for(int i=0; i<n; i++) {
		printf(" %d", arr[i]);
	}
}