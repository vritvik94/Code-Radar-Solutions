#include <stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(a,b,c)
    {
        case '+':
            printf("d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d"a*b);
            break;
        case '/':
        if(b!=0){
            printf("%d",a/b);
        }
            break;
        default:
            printf("Error");
            break;
    }
    return 0;
}