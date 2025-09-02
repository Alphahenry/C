#include <stdio.h>
#include <string.h>

#define MAX_SIZE 50

int main() {
    char user_array[MAX_SIZE] = "";  // Initialize as empty string
    int count = 0;
    char input[10];
    
    printf("Building your character array (type 'done' to finish):\n");
    
    while (count < MAX_SIZE - 1) {
        printf("Enter a character (or 'done' to finish): ");
        fgets(input, sizeof(input), stdin);
        
        // Remove newline character
        input[strcspn(input, "\n")] = '\0';
        
        if (strcmp(input, "done") == 0) {
            break;
        }
        
        
        if (strlen(input) > 0) {
            user_array[count] = input[0];
            count++;
            printf("Added '%c' to array\n", input[0]);
        }
    }
    
    user_array[count] = '\0';
    
    printf("\nFinal array: %s\n", user_array);
    printf("Array length: %d characters\n", count);
    
    return 0;
}