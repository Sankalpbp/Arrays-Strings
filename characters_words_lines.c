# include <stdio.h>
# include <string.h>

int main() {

	char string[1000];
	int i=0, word_count=1, line_count=1, char_count =1;

	printf("\nEnter a '*' to end");
	printf("\n******************");
	printf("\nEnter the text: ");

	scanf("%c", &string[i]);

	while(string[i] != '*') {
		i++;
		scanf("%c", &string[i]);
	}	

	string[i] = '\0';
	i=0;

	while(string[i] != '\0') {

		if(string[i] == '\n' || i==79) {
			line_count++;
		}
		if(string[i] == ' ' && string[i+1] != ' ') {
			word_count++;
		}

		char_count++;
		i++;
	}

	printf("\nThe words are : %d", word_count);
	printf("\nThe lines are : %d", line_count);
	printf("\nThe characters are : %d", char_count);

	return 0;
}
