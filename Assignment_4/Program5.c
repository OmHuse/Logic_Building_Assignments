/*5.Write a program which accept number from user 
     and return difference between summation of all its factors and non factors.

Input: 12
Output: -34(16 - 50)
Input: 10
Output: -29(8 - 37)
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int isum1 = 0 ;
    int isum2 = 0;
    int Diff = 0;

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            isum1 = isum1 + iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            isum2 = isum2 + iCnt;
        }
    }

   Diff = isum1 - isum2 ;

   return Diff;
}
int main()
{

    int iValue = 0; 
    int iRet = 0;

    printf("Enter number :- ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}