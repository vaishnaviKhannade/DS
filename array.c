#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    int a[n];
    printf("Enter a number= ");
    scanf("%d",&n);
    printf("Enter alements in array=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Elements in array are=");
     for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

 printf("\nsize of %d",sizeof(int));
 printf("\nvalue1 %u",a);
 printf("\nvalue2 %u",&a[0]);
printf("\nvalue3 %u",a+1);
}