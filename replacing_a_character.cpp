// THIS QUESTION WANTS THE USER TO GIVE THE CHARACTER AS INPUT, I COULDN'T FIND ANYTHING IN C TO DO THAT\
HENCE I USED C++(using simply cin>>).

# include <iostream>
# include <stdio.h> 
# include <string.h>
using namespace std;

int main() {

	char string[100], character, replaced_character;

	printf("\nEnter the string: ");
	scanf("%s", string);
	
	printf("Enter the character which you want to replace and with which: ");
	cin >> character;
	cin >> replaced_character;
	int i=0;

	while(string[i] != '\0') {

		if(string[i] == character) {

			string[i] = replaced_character;
			break;
		}

		i++;
	}

	printf("The new string is: %s", string);

	return 0;	
}