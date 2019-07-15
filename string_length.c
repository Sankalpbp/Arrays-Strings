# include <stdio.h>
# define N 40

int main(void) {

	char string[N];

	printf("\nEnter the string: ");
	scanf("%s", string); // string is an address in itself

	int count = 0, i=0;
	while(string[i] != '\0') {

		count++;
		i++;
	}

	printf("\nLength of the string is : %d", count);

	return 0;
}