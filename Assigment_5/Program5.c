/* Write a program which accept N and Print frist 5 Multiples of N

input :- 4
output :- 4 8 12 16 20
*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int Multiple =1;

    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        Multiple = iNo *iCnt;
        printf("%d\t",Multiple);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number :- ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}