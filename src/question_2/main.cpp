#include "question2.h"

int main()
{
    int num;
    char user_choice;
    int run_program = 0;

    do
    {
        cout<<"Enter a number (1-10): ";
        cin>> num;
        
        if(num <= 0 || num > 10)
        {
            cout<<"\nError: Number entered must be between 1-10\n";
        }
        
        else
        {
            cout<<"Factorial sequence: "<<get_factorial_sequence(num);
        }
        cout<<"\nContinue? (y/n): ";
        cin>>user_choice;
        
        if(user_choice == 'y' || user_choice == 'Y')
        {
            run_program = 0;
        }
        
        else if(user_choice == 'n' || user_choice == 'N')
        {
            run_program = 1;
        }

    }
    while(run_program != 1);

    return 0;
}