# include <stdio.h>

int main() {

	int arr[100];

	for(int i=0; i<100; i++) {

		arr[i] = i+1;
	}

	for(int i=0; i<100; i++) {
		for(int j=0; j<100; j++) {
			if(arr[i] + arr[j] == 50) 
				printf("\n%d and %d\n", i, j);
		}
	}

	return 0;
}