#include <stdio.h>

int length(char str[])
{
    int len=0;
    while(str[len]!='\0')
        len++;
    return len;
}

void reverseString(char str[])
{
    int len=length(str);
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}

int main(){
    char str[100];
    scanf("%s",&str);
    reverseString(str);
    return 0;
}