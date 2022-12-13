#include <stdio.h>
int print_from_1(int i, int n)
{
    if (i == n)
        return i;
    int s = print_from_1(i + 1, n);
    return s + i;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", print_from_1(1, n));
    return 0;
}