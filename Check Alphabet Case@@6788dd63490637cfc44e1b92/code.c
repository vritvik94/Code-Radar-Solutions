#include <stdio.h>

int main(){
    int alpha;
    scanf("%c",&alpha);
    if(alpha>=A and alpha<=Z)
        printf("Uppercase");
    else if(alpha>=a and alpha<=z)
        printf("Lowercase");
    else
        printf("Not an alphabet");
    return 0;
}