#include <stdio.h>

int main(){
    int alpha;
    printf("%c",&alpha);
    if(alpha>=65 and alpha<=90)
        printf("Uppercase");
    else if(alpha>=97 and alpha<=122)
        printf("Lowercase");
    else
        printf("Not an alphabet");
    return 0;
}