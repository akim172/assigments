#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[101];
    printf("Enter a string (max 100 characters): ");

    /* TODO: read an input string until the new-line character is read. 
             remove the new line character and check if the string is a palindrome.
             your check should ignore all non alpha-numeric characters and case-sensitivity.
             print if the string is a palindrome or not.
             your print statements should match the sample output prints shown in the pdf. */
    fgets(str, sizeof(str), stdin);
    
    int lenstr = 0;
    while (str[lenstr] != '\0'){
      lenstr++;
    }

    int currCount = 0;
    for (int i = 0; i < lenstr; i++){
        if isalpha(str[i]){
            currCount++;
        }
    }
    char original[currCount+1];
    currCount = 0;
    for (int i = 0; i <= lenstr; i++){
        if isalpha(str[i]){
            original[currCount] = tolower(str[i]);
            currCount++;
        }
    }
    original[currCount] = '\0';

    char palindrome[currCount+1];
    for (int i = 0; i < currCount; i++){
        palindrome[currCount-1-i] = original[i];
    }
    palindrome[currCount] = '\0';

    if (strcmp(original,palindrome) == 0){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
