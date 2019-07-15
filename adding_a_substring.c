# include <stdio.h>
# include <string.h>

int main() {

	char string[100], substring[30], new_string[100], character = ' ';
	printf("\nEnter the string and the substring: ");
	scanf("%[^\n]%*c", string);
	scanf("%[^\n]%*c", substring);

	int k =0, i =0, j = 0;
	while(string[i] != '\0') {

		if(string[i] == character) {

			new_string[j] = string[i];
			j++;
			while(substring[k] != '\0') {
				new_string[j] = substring[k];
				k++;
				j++;
			}

			new_string[j] = character;
			j++;
		}

		else {
			new_string[j] = string[i];
			j++;
		}
		i++;
	}

	new_string[j] = '\0';

	printf("\nThe new string is : %s\n\n", new_string);

	return 0;	
}