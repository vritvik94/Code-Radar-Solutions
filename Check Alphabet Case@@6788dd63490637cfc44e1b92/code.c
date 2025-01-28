#include <stdio.h>

int main(){
    char alpha;
    scanf("%c",&alpha);
    if(alpha>=65 && alpha<=90)
        printf("Uppercase");
    else if(alpha>=97 && alpha<=122)
        printf("Lowercase");
    else
        printf("Not an alphabet");
    return 0;
}