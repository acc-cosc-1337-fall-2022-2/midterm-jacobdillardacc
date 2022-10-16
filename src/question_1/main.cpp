#include "question1.h"

using namespace std;

int main()
{
    int run_program = 0;
    char user_choice;
    int cookies;
    vector<double> resultvector;

    do
    {
        
        cout<<"Enter number of cookies to bake: ";
        cin>>cookies;
        
        if(cookies <=0)
        {
            cout<<"\nError: Number of cookies must be greater than 0. Try again.\n";
        }
        
        else
        {
            resultvector = get_cookie_ingredients(cookies);
            cout<<"\nIngredients required for "<<cookies<<" cookies:\n";
            cout<<resultvector[0]<<" cups of sugar.\n";
            cout<<resultvector[1]<<" cups of butter.\n";
            cout<<resultvector[2]<<" cups of flour.\n";
            cout<<"Continue? (y/n): ";
            cin>>user_choice;
            cout<<"\n";
            
            if(user_choice == 'y' || user_choice == 'Y')
            {
                run_program = 0;
            }
            
            else if(user_choice == 'n' || user_choice == 'N')
            {
                run_program = 1;
            }
        }
    }
    while(run_program != 1);
    

    return 0;
}