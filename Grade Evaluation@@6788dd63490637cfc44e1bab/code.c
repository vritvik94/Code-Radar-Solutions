#include <stdio.h>

int main(){
    char m;
    scanf("%c",&m);
    if(m=='A')
        printf("Excellent");
    else if(m=='B');
        printf("Good");
    else if(m=='C')
        printf("Average");
    else if(m=='D')
        printf("Below Average");
    else if(m=='F')
        printf("Fail");
    else
        printf("Invalid");
    return 0;
}