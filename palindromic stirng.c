#include<stdio.h>
#include<string.h>
void main()
{
    char c[20],d[20];
    int i,l,k=0;
    printf("Enter first string :");
    gets(c);
    l=strlen(c);
    for(i=l-1;i>=0;i--)
    {
        d[k]=c[i];
        k++;
    }
    if(strcmp(c,d)==0)
       printf("strings are palindromic");
    else
       printf("strings are not palindromic");
    return 0;
}
