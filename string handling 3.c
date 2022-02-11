//Write a program to take a string input and print that string into capital letter.
#include<stdio.h>
main()
{
    char fname[30];
    int i=0;
    printf("Enter a string:\n");
    gets(fname);
    while(fname[i]!='\0')
    {
        printf("%c",fname[i]-32);
        i++;
    }
}
