
///////////////////////////////////////////////////////////////////////////
//
//     File Name    : Program2.c
//
//     Description  : Aceept one number form user and print it * on screen
//
//     Author       : Om Laxman Huse
//
//     Date         : 08/05/2025
//     
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    
    while(iNo > 0)
    {
        printf("*");

        iNo--;


    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

     Display(iValue);

     return 0;
}