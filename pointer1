#include <stdio.h>
#include <stdlib.h>

int plus ( int a, int b)
{
    return a+b;
}

int minus ( int a, int b)
{
    return a-b;
}

int m_max ( int a, int b)
{
    if (a > b) return a;
    return b;
}

int m_min ( int a, int b)
{
    if (a < b) return a;
    return b;
}



int main(int argc, const char *argv[])
{
    void *arr[4] = {plus, minus, m_max, m_min};
    int a = 10, b = 5, c, d;

    int(*yoba[])(int, int) = {m_min, m_max};
    printf ("m_min(%i %i) = %i \n",
                   a, b,    yoba[0](a,b) );
    printf ("m_max(%i %i) = %i \n",
                   a, b,    yoba[1](a,b) );


    c = ( (int(*)(int, int)) arr[0] )(a, b);
    d = ( (int(*)(int, int)) arr[1] )(a, b);
    printf ("%i + %i = %i\n", a, b, c);
    printf ("%i - %i = %i\n", a, b, d);
    return 0;
}
