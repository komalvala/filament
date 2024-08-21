#include<stdio.h>
main() 
{
    char str[100];
    int s,e, l= 0, name= 1;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[l] != '\0') {
        l++;
    }

    s = 0;
    e = l-1;

    while (s < e) {
        if (str[s] != str[e]) {
            name = 0;
            break;
        }
        s++;
        e--;
    }

    if (name== 1) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

}