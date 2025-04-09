#include<stdio.h>

int countVowels(char str[])
{
    int count=0,i=0;
    while(str[i]!='\0')
    {
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            count ++;
    }
    i++;
    return count;
}

int main(){
    char str[100];
    scanf("%s",&str);
    countVowels(str);
    return 0;
}