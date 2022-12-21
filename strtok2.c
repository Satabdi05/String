#include <stdio.h>
#include <string.h>
int main() {
   char input_string[] = "Hello Tutorials Point!";
   char token_list[20][20];
   char* token = strtok(input_string, " ");
   int num_tokens = 0; // Index to token list. We will append to the list
   while (token != NULL) {
      strcpy(token_list[num_tokens], token); // Copy to token list
      num_tokens++;
      token = strtok(NULL, " "); // Get the next token. Notice that input=NULL now!
   }
   // Print the list of tokens
   printf("Token List:");
   for (int i=0; i < num_tokens; i++) {
      printf("%s", token_list[i]);
   }
   return 0;
}
