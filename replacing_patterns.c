# include <stdio.h>
# include <string.h>

int main() {

	char string[200], pattern[20], new_string[200], replace_pattern[100];
	int i=0, j=0, k, n=0, copy_loop = 0, replace_index=0;

	printf("\nEnter the string: ");
	scanf("%s", string);
	printf("\nEnter the pattern to be replaced: ");
	scanf("%s", pattern);
	printf("\nEnter the replacing pattern: ");
	scanf("%s", replace_pattern);

	while(string[i] != '\0') {

		j=0, k=i;

		while(string[k] == pattern[j] && pattern[j] != '\0') {

			k++;
			j++;
		}

		if(pattern[j] == '\0') {

			copy_loop = k;

			while(replace_pattern[replace_index] != '\0') {
				new_string[n] = replace_pattern[replace_index];
				replace_index++;
				n++;
			}
		}

		new_string[n] = string[copy_loop];
		i++;
		copy_loop++;
		n++;
	}

	new_string[n] = '\0';
	printf("\nThe new string is : ");
	puts(new_string);

	return 0;
}