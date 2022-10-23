#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BOLDWHITE "\033[1m\033[37m"
#define ORANGE "\033[1m\033[93m"
#define BOLDCYAN    "\033[1m\033[36m" 
#define BOLDRED     "\033[1m\033[31m" 

// For Delay Read the code from txt

void delay()
{
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 100; j++)
        {
        }
    }
}

int main()
{
    const char *colors[] = {BOLDCYAN, ORANGE, BOLDRED };

    FILE *ptr,*ptr1, *ptr2;

    char a, b, c,d;

    ptr=fopen("dip.txt","r");
    ptr1 = fopen("Happy.txt", "r");
    ptr2 = fopen("diwali.txt", "r");

    a = fgetc(ptr1);
    b = fgetc(ptr2);
    c=fgetc(ptr);
  
   

   while (c != EOF)
    {
        delay();
        printf("%c%s", c, colors[0]);
        c = fgetc(ptr);
    }

    while (a != EOF)
    {
        delay();
        printf("%c%s", a, colors[1]);
        a = fgetc(ptr1);
    }

    while (b != EOF)
    {
        delay();
        printf("%c%s", b, colors[2]);
        b = fgetc(ptr2);
    }
   

    return 0;
}