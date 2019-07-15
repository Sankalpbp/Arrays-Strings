# include <stdio.h>
# include <string.h>

int countOccurences(char string[], char word[]);

int main() {

	char text[100], word[10];

	printf("\nEnter the text");
	scanf ("%[^\n]%*c", text);

	printf("\nEnter the word");
	scanf("%[^\n]%*c", word);

	int count = countOccurences(text, word);
	printf("\nThe number is: %d", count);

	return 0;
}

int countOccurences(char string[], char word[]) {

	int j, found, count;
	int stringLength, wordLength;

	stringLength = strlen(string);
	wordLength = strlen(word);

	count = 0;

	for(int i=0; i<=stringLength - wordLength; i++) {

		found = 1;

		for(int j=0; j<wordLength; j++) {

			if(string[i + j] != word[j]) {
				found = 0;
				break;
			}
		}

		if(found == 1) {
			count++;
		}
	}

	return count;
}














