#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, length, i;
    
    printf("Enter a string: ");
    scanf("%s", str1);
    
    printf("Choose an operation:\n");
    printf("1. Calculate Length\n");
    printf("2. Reverse String\n");
    printf("3. Check Equality\n");
    printf("4. Check Palindrome\n");
    printf("5. Check Substring\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Length of the string: %lu\n", strlen(str1));
            break;
        
        case 2:
            strrev(str1);  // Reverse directly
            printf("Reversed string: %s\n", str1);
            break;
        
        case 3:
            printf("Enter another string: ");
            scanf("%s", str2);
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;
        
        case 4:
            strcpy(temp, str1);  // Copy string
            strrev(temp);  // Reverse the copy
            if (strcmp(temp, str1) == 0)
                printf("String is a palindrome.\n");
            else
                printf("String is not a palindrome.\n");
            break;
        
        case 5:
            printf("Enter substring to check: ");
            scanf("%s", str2);
            if (strstr(str1, str2) != 0)
                printf("'%s' is a substring of '%s'.\n", str2, str1);
            else
                printf("'%s' is not a substring of '%s'.\n", str2, str1);
            break;
        
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}





// #include <stdio.h>
// #include <string.h>

// int main() {
//     char input[81], output[81];
//     int i, j = 0;

//     printf("Enter a sentence (max 80 chars): ");
//     gets(input);

//     for (i = 0; input[i] != '\0'; i++) {
//         char ch = input[i];

//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             continue;
//         }

//         output[j++] = ch;
//     }

//     output[j] = '\0';

//     printf("Sentence without vowels: %s\n", output);

//     return 0;
// }