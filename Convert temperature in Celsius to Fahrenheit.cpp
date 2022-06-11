#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World\n";
    float F,C;
    cout<<"Convert temperature in Celsius to Fahrenheit :\n---------------------------------------------------";
    cout<< "\nEnter temperature in Celsius : ";
    cin>>C;
    F=C*9/5+32;
    cout<<"Temperature in Farenheit is : "<<F;
    return 0;
}