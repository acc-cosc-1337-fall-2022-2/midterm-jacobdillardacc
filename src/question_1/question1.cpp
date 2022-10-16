#include "question1.h"

vector<double> get_cookie_ingredients(int num)
{
    double sugar;
    double butter;
    double flour;
    vector<double> result; 

    sugar = num*(1.5/48);
    result.push_back(sugar);

    butter = num*(1.0/48);
    result.push_back(butter);
    
    flour = num*(2.75/48);
    result.push_back(flour);

    return result;
}