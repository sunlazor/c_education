#include <stdio.h>
#include <stdlib.h>

int srAr(int arg1, int arg2)
{
    return (arg1 + arg2) / 2;
}

int m_max(int arg1, int arg2)
{
    return (arg1 > arg2) ? arg1 : arg2;
}

int m_min(int arg1, int arg2)
{
    return (arg1 < arg2) ? arg1 : arg2;
}

int sum(int arg1, int arg2)
{
    return arg1 + arg2;
}

int sub(int arg1, int arg2)
{
    return arg1 - arg2;
}

void myError()
{
    printf("Wrong arguments!");
}

int main(int argc, char* argv[])
{
    //void *a[2] = {sum, sub, myError};
    int(*ololo[])(int, int) = {sum, sub, srAr, m_max, m_min};
    //int(*yobaWhore)(int, int) = a[0];
    
    int num  = atoi(argv[1]);
    char *str[] = {"sum", "sub", "arAr", "max", "min"};

    
    if(argc != 4)
    {
        //((void(*)()) a[2])();
        myError();
        return 1;
    }
    /*
    if(atoi(argv[1]) == 0)
    {
        int(*yobaWhore)(int, int) = a[0];
        printf("Sum: %i", yobaWhore(atoi(argv[2]), atoi(argv[3])));    
    }
    else if(atoi(argv[1]) == 1)
    {
        printf("Sub:%i", ((int(*)(int, int)) a[1])(atoi(argv[2]), atoi(argv[3])));
    }
    else ((void(*)())a[2])();
    */
    if ( (num >= 0) && (num <=4) )
    {
        printf("%s: %i", str[num], ololo[num](atoi(argv[2]), atoi(argv[3]) ) ) ;
        return 0;
    }
    myError();
    return 1;
}
