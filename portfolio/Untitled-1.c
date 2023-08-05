#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10],n,i;
    system("cls");
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        arr[i] = n%2;
        n = n/2;
    }
    printf("the number is:");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
