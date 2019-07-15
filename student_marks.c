# include <stdio.h>

void average_student_marks(int arr*[], int n);

int main() {

	int marks[20][5];

	for(int i=0; i<2; i++) {

		for(int j=0; j<2; j++) {

			printf("\nEnter the marks of %dth student in %dth subject: ", (i+1), (j+1));
			scanf("%d", &marks[i][j]);
		}
	}

	printf("\n Average marks of the students are as follows: ");
	average_student_marks(marks, 2);

	return 0;
}

void average_student_marks(int arr*[], int n) {

	for(int i=0; i<2; i++) {

		int sum = 0;
		
		for(int j=0; j<2; j++) {

			sum += arr[j][i];
		}
		
		printf("\nAverage Marks of %d student is : %d", (i+1), (sum/2));
	}
}

/*int average_subject_marks(int arr[], int n) {

	for(int i=0; i<2; i++) {

		int sum = 0;
		for(int j=0; j<1; j++) {

			sum += arr[i][j];
		}
	}
}*/