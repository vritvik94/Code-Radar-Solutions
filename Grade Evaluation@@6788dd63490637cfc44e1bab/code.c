#include <stdio.h>

int main(){
    char g;
    scanf("%c",&g);
    if(g=='A')
        printf("Excellent");
    else if(g=='B')
        printf("Good");
    else if(g=='C')
        printf("Average");
    else if(g=='D')
        printf("Below Average");
    else if(g=='F')
        printf("Fail");
    else
        printf("Invalid grade");
    return 0;
}