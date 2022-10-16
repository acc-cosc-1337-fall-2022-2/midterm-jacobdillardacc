#include "question3.h"

int main()
{
    int num1 = 5;
    int num2 = 10;

    cout<<"num1 = "<<num1;
    cout<<"\nnum2 = "<<num2;

    ref_swap(num1,num2);

    cout<<"\nAfter reference swap:\n";
    cout<<"num1 = "<<num1;
    cout<<"\nnum2 = "<<num2;

    val_swap(num1,num2);

    cout<<"\nAfter value swap:\n";
    cout<<"num1 = "<<num1;
    cout<<"\nnum2 = "<<num2;

    return 0;
}