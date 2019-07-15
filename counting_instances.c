# include <stdio.h>
# include <string.h>

int main() {

	char string[50];
	int character;

	printf("\nEnter the string: ");
	scanf("%s", string);

	printf("\nEnter the character");
	character = getchar();

	putchar(character);

	return 0;
}