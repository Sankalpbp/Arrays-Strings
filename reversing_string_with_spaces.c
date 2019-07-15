# include <stdio.h>
# include <string.h>

int main() {

	char string[100];

	printf("\nEnter the string: ");
	scanf("%[^\n]%*c", string);

	printf("%s\n\n", string);
	printf("\n\n");

	for(int i=strlen(string)-1 ; i>=0; i--) {

		printf("%c", string[i]);
	}

	printf("\n\n");

	return 0;
}