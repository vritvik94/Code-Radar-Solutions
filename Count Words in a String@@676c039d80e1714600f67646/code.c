#include<stdio.h>

int countWords(char str[])
{
    int i=0,words=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ' && str[i]!='\n' && (str[i+1]==' ' || str[i+1]=='\0' || str[i+1]=='\n'))
        {
            words++;
        }
        i++;
    }
    return words;
}

int main(){
    char str[100];
    scanf("%s",&str);
    int result=countWords(str);
    printf("%d",result);
    return 0;
}