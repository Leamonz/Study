#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int n)
{
    if (n == 1)
        return 1;
    else
        return n + Add(n - 1);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", Add(n));
    return 0;
}
