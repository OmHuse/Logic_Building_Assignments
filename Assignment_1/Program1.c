////////////////////////////////////////////////////////
//
//     File Name    :     Program1.c
//
//     Description  :     Program to divide two numbers
//
//     Author       :     Om Laxman Huse
//
//     Date         :     08/05/2025
//     
////////////////////////////////////////////////////////
#include<stdio.h>

    int  Divide(int iNo1 ,int iNo2)
    {
        int iAns = 0;    
        
        if(iNo2==0)
        {
            return -1;
        }
        iAns = iNo1 / iNo2;

        return iAns;

    }
    
    int main ()
{
    int ivalue1 = 15 , ivalue2 = 5;
    int iRet = 0;

    iRet = Divide(ivalue1 , ivalue2);

    printf(" Division is %d",iRet);


     return 0;
}