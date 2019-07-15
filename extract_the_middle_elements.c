# include <stdio.h>
# include <string.h>

int main() {

	char string[100];

	printf("\nEnter the string: ");
	scanf("%[^\n]%*c", string);

	int index = 0;

	while(string[index] != '\n') {
		index++;
	}

	index -= 2;

	printf("\n\n");
	
	for(int i=index; i<(index + 5); i++) {

		printf("%c", string[i]);
	}

	printf("\n\n");
	
	return 0;
}