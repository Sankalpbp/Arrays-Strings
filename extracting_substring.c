# include <stdio.h>
# include <string.h>
# define N 50

int main(void) {

	char string[N], new_string[20];

	printf("\nEnter the string: ");
	scanf("%s", string);

	int starting_index;
	printf("\nEnter the starting index: ");
	scanf("%d", &starting_index);

	int length_of_newstring;
	printf("\nEnter the length of the string: ");
	scanf("%d", &length_of_newstring);

	int j=0;
	
	for(int i=starting_index; i<(starting_index + length_of_newstring); i++) {

		new_string[j] = string[i];
		j++;
	}

	new_string[j] = '\0';
	printf("\nThe new string is: %s\n", new_string);

	return 0;
}