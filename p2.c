#include <stdio.h>
int sum(int a[],int n,int i)
{   
    if(i==n) return 0;
    int s=sum(a,n,i+1);
    return (s%10)+(a[i]%10);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",sum(a,n,0));
    
    return 0;
}