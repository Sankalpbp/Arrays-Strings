# include <stdio.h>
# include <string.h>

int main() {

	char names[5][10], temp[10];
	int i, n, j;

	printf("\nEnter the number of students: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++) {

		printf("\nEnter the name of the %d student: ", i+1);
		scanf("%s", names[i]);
	}

	for(int i=0; i<n; i++) {

		for(j=0; j<n-i-1; j++) {

			if(strcmp(names[j], names[j+1]) > 0) {

				strcpy(temp, names[j]);
				strcpy(names[j], names[j+1]);
				strcpy(names[j+1], temp);
			}
		}
	}

	printf("\nThe name of the students in alphabetically are: ");
	for(int i=0; i<n; i++) {
		puts(names[i]);
	}	

	return 0;
}