#include <iostream>
using namespace std;

class carpark
{
private:
    int carId, chargePerHour;
    float prkedTime;

public:
    void readData()
    {
        cout << "Enter car id, charge per hour and parked time:";
        cin >> carId;
        cin >> chargePerHour;
        cin >> prkedTime;
    }
    float parkedCost()
    {
        return prkedTime * chargePerHour;
    }
    void showData()
    {
        cout << "Car Id = " << carId << endl;
        cout << "Charge Per Hour = " << chargePerHour << endl;
        cout << "Total Parking Cost = " << parkedCost() << endl;
    }
};
int main()
{
    carpark car1;
    car1.readData();
    car1.showData();
    return 0;
}