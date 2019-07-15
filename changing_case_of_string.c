# include <stdio.h>
# include <string.h>

int main() {

	char string[50];
	printf("\nEnter the string: ");
	scanf("%[^\n]%*c", string);

	for(int i=0; i<strlen(string); i++) {

		if(string[i] >= 'A' && string[i] <= 'Z')
			string[i] += 32;
	}

	printf("%s\n\n", string);

	return 0;
}