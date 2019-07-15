# include <stdio.h>
# include <string.h>

int main() {

	char string1[100], string2[100];
	short int same = 0;
	int i=0;

	printf("\nEnter the first and the second string: ");
	scanf("%s%s", string1, string2);

	printf("\nEnter the position till which to compare the strings: ");
	int position;
	scanf("%d", &position);

	if(strlen(string1) == strlen(string2)) {

		while(i<position) {

			if(string1[i] == string2[i])
				i++;
			else 
				break;
		}

		if(i == position) {
			same = 1;
			printf("\nThe strings are equal");
		}

	}

	else {

		printf("\nThe two strings aren't equal");
	}

	if(same == 0) {

		if(string1[i] > string2[i])
			printf("\nString1 is greater than string2 ");
		else 
			printf("\nString2 is greater than string1 ");			
	}

	return 0;
}