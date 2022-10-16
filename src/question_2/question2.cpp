#include "question2.h"

string get_factorial_sequence(int num)
{
    int factorial = 1;
    string temp = "";
    stringstream sequence;
    
    for(int i =1; i <= num; ++i)
    {
        factorial *= i;
        if (i != num)
        sequence << i << "x";
        temp = sequence.str();
    }
    
    sequence << num << "=" << factorial;
    return sequence.str();
}