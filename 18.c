#include <stdio.h>

int main() {
    char str[100], str2[100], rev[100];
    int i, j, len = 0, flag;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // i. Length
    while(str[len] != '\0') {
        len++;
    }
    printf("Length = %d\n", len);

    // ii. Reverse
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);

    // iii. Equality check (manual)
    printf("Enter another string: ");
    scanf("%s", str2);

    i = 0;
    while(str[i] != '\0' && str2[i] != '\0') {
        if(str[i] != str2[i]) {
            printf("Strings are not equal\n");
            break;
        }
        i++;
    }

    if(str[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal\n");
    else if(str[i] == str2[i])
        printf("Strings are not equal\n");

    // iv. Palindrome check
    flag = 0;
    for(i = 0; i < len; i++) {
        if(str[i] != rev[i]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    // v. Substring check (manual)
    flag = 0;
    for(i = 0; str[i] != '\0'; i++) {
        j = 0;
        while(str[i + j] == str2[j] && str2[j] != '\0') {
            j++;
        }
        if(str2[j] == '\0') {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}