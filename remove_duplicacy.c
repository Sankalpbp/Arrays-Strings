// removing the duplicacy from the arrays

# include <stdio.h>
# define N 20

void display_array(int array[], int n);

int main() {

	int arr[N], n;

	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++) {

		scanf("%d", &arr[i]);
	}

	display_array(arr, n);

	// bubble sort

	for(int i=0; i<n-1; i++) {

		for(int j=0; j<(n-i-1); j++) {

			if(arr[j] > arr[j+1]) {

				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	int count = 0;

	for(int i=0; i<n; i++) {

		for(int j=0; j<n; j++) {

			if(arr[i] == arr[j] && i!=j) {
				
				count++;
				for(int k=j; k<n; k++) {
					arr[k] = arr[k+1];				
				}

				n--;
			}
		}
	}

	printf("count %d", count);
	display_array(arr, n);

	return 0;
}


void display_array(int array[], int n) {

	printf("\n\n");
	for(int i=0; i<n; i++) {
		printf("%3d", array[i]);
	}

	printf("\n\n");
}