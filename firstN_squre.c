#include<stdio.h>
int main()
{
    int x,i,result;
    printf("Enter first nuture number  :");
    scanf("%d",&x);
     printf("First %d squre is  :\n",x);
    for(i=1;i<=x;i++)
    {
        result=i*i;
        printf("%d ",result);

    }

    return 0;
}
