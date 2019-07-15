# include <stdio.h>
# include <string.h>

int main() {

	char string[100];
	int i=0, j, length = 0;

	printf("\nEnter the string: ");
	scanf("%s", string);

	while(string[i] != '\0') {
		length++;
		i++;
	}

	i=0;
	j = length -1;

	while(i <= length/2) {

		if(string[i] == string[j]) {
			i++;
			j--;
		}

		else {
			break;
		}
	}

	if(i>=j)
		printf("\n PALINDROME");
	else 
		printf("\nNOT A PALINDROME");

	return 0;
}