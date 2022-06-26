#include<iostream>
using namespace std;
class vehicleCharge
{
    private:
        int num_vehicle;
        float hour,rate;
    public:
        vehicleCharge(int num=0,float hours=0,float rates=0)
        {
            num_vehicle=num;
            hour=hours;
            rate=rates;
        }
        float totalCharge()
        {
            float charge=num_vehicle*hour*rate;
            if(num_vehicle>10)
            {
                charge=(float)90/100*charge;
            }
            return charge;
        }
};
int main()
{
    vehicleCharge V1(5,2,40);
    vehicleCharge V2(11,5,40);
    cout<<"The total charge = "<<V1.totalCharge()<<endl;
    cout << "The total charge= " <<V2.totalCharge()<< endl;

    return 0;
}