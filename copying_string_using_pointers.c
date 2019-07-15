# include <stdio.h>
# include <string.h>

int main() {

	char string[100], copy_string[100];
	char *pstring, *pcopy_string;

	pstring = string;
	pcopy_string = copy_string;

	printf("\nEnter the string: ");
	scanf("%s", string);

	while(*pstring != '\0') {

		*pcopy_string = *pstring;
		pstring++, pcopy_string++;
	}

	*pcopy_string = '\0';

	printf("\n The copied string is :");

	pcopy_string = copy_string; // this is necessary

	while(*pcopy_string != '\0') {
		
		printf("%c", *pcopy_string);
		pcopy_string++;
	}

	printf("\n\n");
	return 0;
}