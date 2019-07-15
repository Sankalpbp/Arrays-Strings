# include <stdio.h>
# include <string.h>

void printstring(char array[]);

int main() {

	char string[40];
	int n;

	printf("\nEnter the string: ");
	scanf("%s", string);

	printstring(string);

	return 0;
}

void printstring(char array[]) {

	int i=0;

	while(array[i] != '\0') {
		printf("%c", array[i]);
		i++;
	}
}