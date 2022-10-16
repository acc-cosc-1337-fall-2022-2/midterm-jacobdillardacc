#include "question3.h"

void ref_swap(int &num1, int &num2)
{
    int num;
    
    num = num1;
    num1 = num2;
    num2 = num;

    return;
}

void val_swap(int num1, int num2)
{
    int num;
    
    num = num1;
    num1 = num2;
    num2 = num;

    return;
}