#include <stdio.h>

int main(){
    char[20],temp;
    int l,i,j;
    scanf("%s",a)
    gets(a);
    for(l=0;a[l]!=0;l++);
    j=l-1;
    for(i=0;i<l/2;i++)
    {
        temp=a[i];
        a[i]=a[j];
        a[i]=temp;
        j--;
    }
    printf("%s",a)
    return 0;
}