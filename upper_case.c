# include <stdio.h>
# define N 40

int main(void) {

	char string[N], upper_case_string[N];

	printf("\nEnter the string: ");
	scanf("%s", string); // string is an address in itself

	int i=0, j=0;
	while(string[i] != '\0') {

		if(string[i] >= 'a' && string[i] <= 'z') {
			upper_case_string[j] = string[i] - 'a' + 'A';
			j++;
		}
		else {
			upper_case_string[j] = string[i];
			j++;
		}
		i++;
	}

	printf("\n The new string is: %s\n", upper_case_string);

	return 0;
}