#include "question4.h"

int main()
{
    int run_program = 0;
    char user_choice;
    string binary_input;

    do
    {
        cout<<"Enter an 8 digit binary number to be converted to a decimal: ";
        cin>>binary_input;

        if(binary_input.length() == 8 && binary_input.find('1','0'))
        {
            cout<<"\n"<<binary_input<<" = "<<binary_to_decimal(binary_input);
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

        else
        {
            cout<<"\nError: binary number must contain 8 digits with only 1's and 0's.\n";
        }

    }
    while(run_program != 1);
    
    return 0;
}