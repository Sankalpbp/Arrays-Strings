# include <stdio.h>
# include <string.h>
# define N 50

void swap(char* i, char* j);

int main(void) {

	char string[N];

	printf("\nEnter the string: ");
	scanf("%s", string);

	int i=0;
	int j= strlen(string) - 1;

	while(i<j) {

		char temp;
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
		i++;
		j--;
	}

	puts(string);

	return 0;
}
