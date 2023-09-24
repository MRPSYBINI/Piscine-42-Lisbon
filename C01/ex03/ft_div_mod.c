#include <stdio.h>
void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    } 
}
int main()
{
    int a;
    int b;
    int x;
    int y;

    a = 138;
    b = 12;

    ft_div_mod(a, b, &x, &y);
    printf("%d, %d\n", x, y);
    return (0);
}