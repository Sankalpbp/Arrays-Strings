# include <stdio.h>
# include <string.h>
# define N 40

int main(void) {

	char string1[N], string2[N];

	int same = 0, i=0;
	printf("\nEnter the two strings one by one with an Enter");
	scanf("%s", string1);
	scanf("%s", string2);

	int length1 = strlen(string1);
	int length2 =strlen(string2);

	if(length2 != length1) {
		printf("\nThe two strings are not equal.");
	}

	else {

		while(i < length1) {

			if(string1[i] == string2[i]) {
				i++;
			}
			else {
				break;
			}
		}

		if(i == length1) {
			same = 1;
			printf("\nStrings are equal.\n");
		}
	}

	if(same == 0) {

		if(string1[i] > string2[i]) {
			printf("\nString 1 is greater that string2.\n");
		}
		else {
			printf("\nString 2 is greater that string1.\n");
		}
	}

	return 0;
}