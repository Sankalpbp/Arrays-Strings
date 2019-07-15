# include <stdio.h>
# include <string.h>

int main() {

	int n, i;
	char string[100][100];

	printf("\nEnter the number of strings: ");
	scnaf("%d", &n);

	for(int i=0; i<n; i++) {
		scanf("%[^\n]%*c", string[i]);
	}

	printReverseParagraphs(string[]);

	return 0;
}


void printReverse(char string[]) {

	int length = strlen(string);

	int i;

	for(int i= length -1; i>=0; i--) {

		if(string[i] == '\n')  {
			string[i]  = '\0';
		
			printf("%s ", &string[i] + 1);
		}
	}

	printf("%s\n\n", string);
}
