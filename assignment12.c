#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\nString Operations Menu:\n");
        printf("1. Find Length of String\n");
        printf("2. Reverse String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Copy String\n");
        printf("5. Convert to Lowercase\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Compare Two Strings\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume newline character

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                gets(str1);
                printf("Length of string: %lu\n", strlen(str1));
                break;
            
            case 2:
                printf("Enter a string: ");
                gets(str1);
                printf("Reversed string: %s\n", strrev(str1));
                break;
            
            case 3:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            
            case 4:
                printf("Enter source string: ");
                gets(str1);
                strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;
            
            case 5:
                printf("Enter a string: ");
                gets(str1);
                printf("Lowercase string: %s\n", strlwr(str1));
                break;
            
            case 6:
                printf("Enter a string: ");
                gets(str1);
                printf("Uppercase string: %s\n", strupr(str1));
                break;
            
            case 7:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                int cmp = strcmp(str1, str2);
                if (cmp == 0)
                    printf("Strings are equal.\n");
                else if (cmp > 0)
                    printf("First string is greater.\n");
                else
                    printf("Second string is greater.\n");
                break;
            
            case 8:
                printf("Exiting program.\n");
                break;
            
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 8);
}