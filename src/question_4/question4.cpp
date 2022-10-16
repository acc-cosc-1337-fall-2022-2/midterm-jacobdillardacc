#include "question4.h"

int binary_to_decimal(string input)
{
    string num = input;
    int decimal = 0;

    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >=0; i--)
    {
        if (num[i] == '1')
        {
            decimal += base;
        }
        base = base*2;
    }
    return decimal;
}