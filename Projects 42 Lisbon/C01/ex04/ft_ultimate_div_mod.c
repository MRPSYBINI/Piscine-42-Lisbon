#include <stdio.h>
void    ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0)
    {
        int div = *a / *b;
        int mod = *a % *b;
        *a = div;
        *b = mod;
    }
}
int main()
{
    int a = 142;
    int b = 42;

    ft_ultimate_div_mod(&a, &b);
    printf("%d, %d\n", a, b);
    return(0);
}
