#include <stdio.h>

int main(){
    char a[20];
    int l,i,j;
    gets(a);
    for(l=0;a[l]='\0',l++);
    j=l-1;
    for(i=0;i<l/2;i++)
    {
        if(a[i]!=a[j])
        {
            printf("No");
            return 0;
        }
        j--;
    }
    printf("Yes");
    return 0;
}