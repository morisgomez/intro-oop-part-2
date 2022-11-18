#include <iostream>
#include <string>
using namespace std;

class employee
{
    //member variables:
    public: //access specifier is public for attributes & methods.
    double wage;
    double weeklyHours;
    double taxRate;

    void getTaxRate (const string value) //const so it doesnt get changed in function body.
    {
        if (value == "California")
        {
            taxRate = 13.25 / 100;
        }
        else if (value == "Washington")
        {
            taxRate = 11.75 / 100;
        }
        else if (value == "New York")
        {
            taxRate = 14.5 / 100;
        }
    } //closes function.

    void getWage (const double value) //const so it doesnt get changed in function body.
    {
        wage = value;
    } //closes function.

    void getHours (const double value) //const so it doesnt get changed in function body.
    {
        weeklyHours = value;
    } //closes function.

    double taxedIncome ()
    {
        double x = wage * weeklyHours;
        double y = x * taxRate;
        double z = x - y;
        return z;
    } //closes function.
};

int main ()
{
    cout << "whats your hourly wage?";
    double userWage;
    cin >> userWage;
    cout << "how many hours did you work this week?";
    double userHours;
    cin >> userHours;
    cout << "which state do you live in (California, Washington or New York)?";
    string userState;
    cin >> userState;
    
    //object creation of jared.
    employee jared;
    jared.getWage(userWage);
    jared.getHours(userHours);
    jared.getTaxRate(userState);
    cout << "Considering your state's tax rate, your net pay for this week is: $" << jared.taxedIncome();
    return 0;
}
//Q: when would i use reference parameters in these member functions?
