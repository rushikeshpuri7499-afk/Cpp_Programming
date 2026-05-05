
#include<stdio.h>

int Addition(int No1 , int No2)
{
    int Ans = 0;
    Ans = No1+No2;
    return Ans ;
}

int Substraction(int No1 , int No2)
{
    int Ans = 0;
    Ans = No1-No2;
    return Ans ;
}

int main ()
{
    int A = 11 , B = 10;
    int result = 0;
    
    result = Addition (A,B);
    printf("Addition is : %d\n",result);

    result = Substraction(A,B);
    printf("Substraction is :%d\n",result);

    return 0;
}