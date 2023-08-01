//WAP Find out length of string without using inbuilt function 

#include <stdio.h>

int findStringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = findStringLength(inputString);
    printf("Length of the string: %d\n", length);

    return 0;
}
