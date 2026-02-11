#include <stdio.h>
#include <string.h>

int main() {

    char s[100];
    int i, length;
    int isPalindrome = 1;  

    printf("Enter a string: ");
    scanf("%s", s);

    length = strlen(s);

    for(i = 0; i < length / 2; i++) {
        if(s[i] != s[length - i - 1]) {
            isPalindrome = 0;   
            break;
        }
    }

    if(isPalindrome == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
