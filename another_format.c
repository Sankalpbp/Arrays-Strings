# include <stdio.h>
# include <string.h>

void printReverse(char string[]);

int main() {

	char string[50];

	printf("\nEnter the string: ");
	scanf("%[^\n]%*c", string);

	printf("\n\n%s ", string);

	printReverse(string);

	return 0;
}

void printReverse(char string[]) {

	int length = strlen(string);

	int i;

	for(int i= length -1; i>=0; i--) {

		if(string[i] == ' ')  {
			string[i]  = '\0';
		
			printf("%s ", &string[i] + 1);
		}
	}

	printf("%s\n\n", string);
}