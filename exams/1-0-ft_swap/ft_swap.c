
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 10;
    int *c = &a;
    int b = -256;
    int *d = &b;
    printf("a = %d, b = %d\n", a, b);
    ft_swap(c, d);
    printf("a = %d, b = %d\n", a, b);
    return (0);
    }
