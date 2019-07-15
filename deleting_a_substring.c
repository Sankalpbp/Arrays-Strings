# include <stdio.h>
# include <string.h>
# define N 100
# define M 40

int main(void) {

	char text[N], string[M], new_text[N];
	int i=0, j=0, found=0, k, n=0, copy_loop=0;

	printf("\nEnter the main text: ");
	scanf("%s", text);

	printf("\nEnter the string to be deleted: ");
	scanf("%s", string);

	while(text[i] != '\0') {

		j=0, found = 0, k = i;

		while(text[k] == string[j] && string[j] != '\0') {
			k++;
			j++;
		}

		if(string[j] == '\0') {
			copy_loop = k;
		}

		new_text[n] = text[copy_loop];
		i++;
		copy_loop++;
		n++;
	}

	new_text[n] = '\0';
	printf("\nThe new string is ; ");
	puts(new_text);

	return 0;
}