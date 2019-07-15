# include <stdio.h>
# include <string.h>

int main() {

	char string[100], substring[40], new_string[100];
	int k=0, i=0, j=0, index;

	printf("\nEnter the string: ");
	scanf("%s", string);

	printf("\nEnter the substring to be added: ");
	scanf("%s", substring);

	printf("\nEnter the index where to be added: ");
	scanf("%d", &index);

	while(string[i] != '\0') {

		if(i == index) {

			while(substring[k] != '\0') {
				new_string[j] = substring[k];
				k++;
				j++;
			}
		}

		else {
			new_string[j] = string[i];
			j++;
		}
		i++;
	}

	new_string[j] = '\0';

	printf("\nThe new string is : %s", new_string);
	
	return 0;
}