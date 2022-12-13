#include<stdio.h>
int power(int a,int b)
{   
    if(b==0) return 1;
    int c=power(a,(b-1));
    return c*a;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}