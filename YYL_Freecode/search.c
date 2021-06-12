#include <stdio.h> 
#include <stdbool.h> 
void Search (char text[], char word[]);
int main() 
{
    char TEXT[100];
    char WORD[100];
    int i,found;
    int position;
    i = 1;
    while ( WORD[i] != '\n' ) {
        scanf("%c", WORD[i]);
        i++;
    }
    while ( TEXT[i] != '\n' ) {
        scanf("%c", TEXT[i]);
        i++;
    }
    void Search (TEXT,WORD);
    if (found) {
        printf("The word is in the text!");
        printf("its position is in the %d of the text!", &position);
    }
    else {
        printf("The word is not in the text!");
    }




    return 0;

}

void Search (char text[], char word[]) 
{
    bool found;
    int index;
    int *position;
    found = false;
    index = 1;
    while (text[index] != '\n') {
        if ( word[index] == text[index] ) {
            *position = index;
		    while ( (word[index] = text[index] ) && (word[index] != '\n') ) {
                index = index + 1;
            }
            if (word[index] != text[index]) {
                *position = 0;
            }
        }	
        if (word[index] == '\0') {
            found = true;
        }
        index = index + 1;
        }
} 
		
		
