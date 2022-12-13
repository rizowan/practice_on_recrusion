#include <stdio.h>
void print_from_1(int i, int n)
{
    if (i > n)
        return;
    print_from_1(i + 1, n);
    printf("%d ", i);
    
}
int main()
{
    int n;
    scanf("%d", &n);
    print_from_1(1, n);
    return 0;
}