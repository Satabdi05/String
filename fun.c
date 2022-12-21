
#include <stdio.h>
#include <stdlib.h>

char fun();
int main()
{
    char c = fun();
    printf("character is :%c", c);
}
char fun()
{

    return 'a';
}
