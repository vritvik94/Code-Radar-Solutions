#include <stdio.h>
#include <string.h>

int main(){
    char a[20]="hello";
    int l;
    l=strlen(a);
    strrev(a);
    printf("%s",a);
    return 0;
}