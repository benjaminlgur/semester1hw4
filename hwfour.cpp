#include <iostream>
using namespace std;

//variables
float input, price, dis, surcharge, offset;
int att, tru;
char a;

float calculate_discount(float price);
float calculate_surcharge(float price);

int main()
{
    //variables
    float input, price, dis, surcharge, offset;
    int att, tru;
    char a;
    
    //dif var 
    att = 10;
    tru = 1;
    
    cout << "Greetings!\n";
    cout << "Please enter a number between $0.01 and $200\n";
    cin >> input;
    while(tru == 1)
    {
        while(input < 0)
        {
            cout << "Please enter valid number\n";
            att = att - 1;
            cout << "you have " << att << " attempts remaining\n";
            cin >> input;
            if (att == 1)
            {
                cout << "too many attempts\n";
                return 0;
            }
        }
        if(input >= 0 && input < 50)
        {
        price = input * 1;
        }
        if(input >= 50 && input < 100)
        {
            price = input * .90;
        }
        if(input >= 100 && input < 150)
        {
            price = input * .85;
        }
        if(input >= 150 && input <= 200)
        {
            price = input * .80;
        }
        if(input > 200 && input < 300)
        {
            price = input * 1.07;
        }
        if(input >=300 && input < 500)
        {
            price = input * 1.13;
        }
        if(input >= 500)
        {
            price = input * 1.19;
        }
        if(input <= 200)
        {
            offset = calculate_discount(price) ;
        }
        if(input > 200)
        {
            offset = calculate_surcharge(price);
        }
        cout << "The orignal price of $" << input << " with the adjustment of $" << offset << " means you owe $" << price << ".\n";
        cout << "Do you wish to enter another price? (Y/n)\n";
        cin >> a;
        if(a == 'n')
        {
            return 0;
        }
        else
        { 
            cout << "Please enter another price\n";
            cin >> input;
        }
    }
}

float calculate_discount(float price)
{
    dis = price - input;
    return dis;
}

float calculate_surcharge(float price)
{
    surcharge = price - input;
    return surcharge;
}



