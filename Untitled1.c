#include<stdio.h>
int main()
{
    int age = 25;

    int* ptr = &age;

    //*ptr = 31;

    //Printf("%d", age);

    printf("Address : %p\n", ptr);

    printf("Value : %d", *ptr);

    return 0;

}
