
///////////////////////////////////////////////////////////////////////////
//
//     File Name    : Program2.c
//
//     Description  : Aceept one number form user and  if number is less than 10
//                    then print "hello" otherwise print  "demo"
//
//     Author       : Om Laxman Huse
//
//     Date         : 08/05/2025
//     
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    if (iNo<10)
    {
        printf("Hello");
    }
    else 
    {
       printf("Demo");
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