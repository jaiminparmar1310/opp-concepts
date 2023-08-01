//WAP to find reverse of string using recursion 

#include <stdio.h>
#include <string.h>

void reverseString
    (char* str, int start, int end) 
{
    if (start >= end) {
        return; 
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

int main() {
    char inputStr[100];
    printf("Enter a string: ");
    scanf("%s", inputStr);

    int length = strlen(inputStr);
    reverseString(inputStr, 0, length - 1);

    printf("Reversed string: %s\n", inputStr);

    return 0;
}
