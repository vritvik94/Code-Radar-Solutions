#include <stdio.h>

int getLength(char str[]) {
    int len=0;
    while(str[len]!='\0' && str[len]!='\n') 
    {
        len++;
    }
    return len;
}

int isPalindrome(char str[]) 
{
    int start=0;
    int end=getLength(str)-1;
    while (start<end) 
    {
        if (str[start]!=str[end]) 
        {
            return 0;  
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];
    scanf("%s", str);
    if (isPalindrome(str))
        printf("Yes");
    else
        printf("No");
    return 0;
}
