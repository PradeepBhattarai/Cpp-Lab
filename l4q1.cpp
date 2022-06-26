#include <iostream>
using namespace std;
class Time
{
private:
    int hour, minute, second;

public:
    Time(int hours = 0, int minutes = 0, int seconds = 0)
    {
        hour = hours;
        minute = minutes;
        second = seconds;
    }
    Time add(Time t1)
    {
        Time temp;
        temp.second = second + t1.second;
        temp.minute = minute + t1.minute;
        temp.hour = hour + t1.hour;
        if (temp.second >= 60)
        {
            temp.minute += temp.second / 60;
            temp.second = temp.second % 60;
        }
        if (temp.minute >= 60)
        {
            temp.hour += temp.minute / 60;
            temp.minute = temp.minute % 60;
        }
        return temp;
    }
    void Display()
    {
        cout << "In 12 hr format HH:MM:SS = " << hour << ":" << minute << ":" << second << endl;
        cout << "In 24 hr format HH:MM:SS = " << hour+12 << ":" << minute << ":" << second << endl;
    }
};
int main()
{
    Time t1(4, 35, 55), t2(5, 30, 15), t3;
    cout << "Two times are:" << endl;
    t1.Display();
    t2.Display();
    t3 = t1.add(t2);
    cout << "Sum is:" << endl;
    t3.Display();
    return 0;
}