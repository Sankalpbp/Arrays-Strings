# include <stdio.h>
# include <string.h>

int main() {

	char string1[100], string2[100], copy_string[200];
	char *pstring1, *pstring2, *pcopy_string;

	pstring1 = string1;
	pstring2 = string2;
	pcopy_string = copy_string;

	printf("\nEnter the first string: ");
	scanf("%s", string1);

	printf("\nEnter the first string: ");
	scanf("%s", string2);

	while(*pstring1 != '\0') {
		*pcopy_string = *pstring1;
		pcopy_string++, pstring1++;
	}

	while(*pstring2 != '\0') {
		*pcopy_string = *pstring2;
		pcopy_string++, pstring2++;
	}

	*pcopy_string = '\0';

	pcopy_string = copy_string;

	printf("\n The concatenated text is : ");
	while(*pcopy_string != '\0') {
		printf("%c", *pcopy_string);
		pcopy_string++;
	}

	printf("\n\n");
	
	return 0;
}