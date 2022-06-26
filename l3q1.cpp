#include <iostream>
using namespace std;
class fahrenheit
{
    private:
        float f_temperature,c_temperature;
    public:
        float toCelcius(float f)
        {
            f_temperature=f;
            c_temperature=(f-32.0)*5.0/9.0;
            return c_temperature;
        }
};
class celcius
{
private:
    float f_temperature, c_temperature;

public:
    float toFahrenheit(float c)
    {
        c_temperature = c;
        f_temperature = (c*9.0/5.0 + 32.0);
        return f_temperature;
    }
};

int main()
{
    fahrenheit degF;
    celcius degC;
    float f,c;
    int choice;
    cout<<"Conversion Options\n1.Fahrenheit To Celcius\n2.Celcius To Fahrenheit\n";
    cout<<"Enter Your Choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the Temperature in Fahrenheit:\n";
        cin >> f;
        cout << "Temperature in celcius = " << degF.toCelcius(f);
        break;
    case 2:
        cout << "Enter the Temperature in Celcius:\n";
        cin >> c;
        cout << "Temperature in Fahrenheit = " << degC.toFahrenheit(c);
        break;

    default:
        break;
    }
    return 0;
}