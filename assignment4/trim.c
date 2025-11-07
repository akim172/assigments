
#include <stdio.h>

void trim(char s[]) {
   /* TODO: remove all trailing spaces at the end of the string s. any other spaces in-between the string must be preserved.
    * Note that you cannot make use of built-in string library functions. You will not earn any points if you do.
    * Your code will be manually checked for this and your grade may be overwritten. 
    * 
    * You may, however, write your own string functions that you need.
    */
    int lenstr = 0;
    while (s[lenstr] != '\0'){
      lenstr++;
    }
    for (int i = lenstr-1; i >= 0; i--){
         if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r' ){
            s[i] = '\0';
         } else {
            break;
         }
      }
    }

int main() {
   char str[100];  // Assuming max input length of 100 characters
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);  // Read input including spaces
   printf("Input string: [%s]\n", str);
   trim(str);  // Call the function to trim trailing spaces
   printf("Trimmed string: [%s]\n", str);

   return 0;
}
