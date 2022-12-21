#include<stdio.h>
#include<string.h>

int main(void)
{
    char buff [15];
    int pass =0;

    printf("\n Enter the Passord");
    gets(buff);

    if(strcmp (buff,"123456"))
        {
            printf("\n Wrong password \n");
        }
        else
        {
            printf("\n Correct Password  \n");
            pass =1;
        }
        if (pass)
        {
            printf("\n You can continue :  \n");
        }
}
