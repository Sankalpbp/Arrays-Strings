# include <stdio.h>
# define N 40
# define M 100

int main(void) {

	char string[N], destination_string[M];

	printf("\nEnter the string to be added: ");
	scanf("%s", string); // string is an address in itself

	printf("\nEnter the string to which the other string is to be added: ");
	scanf("%s", destination_string);

	int i=0, j=0;

	while(destination_string[i] != '\0') {
		i++;
	}

	while(string[j] != '\0') {

		destination_string[i] = string[j];
		i++;
		j++;
	}

	destination_string[i] = '\0';

	puts(destination_string);
	return 0;
}