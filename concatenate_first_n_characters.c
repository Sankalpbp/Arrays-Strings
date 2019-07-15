# include <stdio.h>
# include <string.h>

int main() {

	char source_string[50], destination_string[50];
	int characters;

	printf("\nEnter the source string: ");
	scanf("%s", source_string);

	printf("\nEnter the destination string: ");
	scanf("%s", destination_string);

	printf("\nEnter the number of characters to concatenate: ");
	scanf("%d", &characters);

	int i=0;
	int j=0;
	
	while(destination_string[i] != '\0') {
		i++;
	}

	while(j<characters) {

		destination_string[i] = source_string[j];
		i++;
		j++; 
	}

	destination_string[i] = '\0';

	puts(destination_string);

	return 0;
}