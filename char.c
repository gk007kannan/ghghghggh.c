#include <stdio.h>
#include<conio.h>
#define MAX_SIZE 100
void main()
{
    char str[MAX_SIZE];
    int alphabets, digits, others, i;
    clrscr();
    alphabets = digits = others = i = 0;
 printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);
    getch();
}
