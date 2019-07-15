# include <stdio.h>
# include <string.h>

void trim(char* string);

int main() {

	char string[100];

	printf("\nEnter the string: ");
	scanf("%s", string);

	printf("\nString before trimming the white spaces: %s", string);

	trim(string);

	printf("\nString after trimming the white spaces: %s", string);

	return 0;
}

void trim(char* string) {

	int index, i;

	index = 0;

	while(string[index] == ' ' || string[index] == '\t' || string[index] == '\n') {

		index++;
	}

	i=0;

	while(string[i + index] != '\0') {

		string[i] = string[i + index];
		i++;
	}

	string[i] = '\0';

	i = 0;
	index = -1;

	while(string[i] != '\0') {

		if(string[i] != ' ' && string[i] != '\t' && string[i] != '\n') {

			index = i;
		}
		i++;
	}

	string[index + 1] = '\0';
}