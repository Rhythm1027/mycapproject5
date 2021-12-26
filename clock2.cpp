#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Clock
{
    private:
        int seconds;
        int hours,minutes,sec;
    public:
        void getTime(void);
        void convertIntoSeconds(void);
        void displayTime(void);
};
 
void Clock::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> hours;
    cout << "Minutes? ";          cin >> minutes;
    cout << "Seconds? ";          cin >> sec;
}
 
void Clock::convertIntoSeconds(void)
{
    seconds = hours*3600 + minutes*60 + sec;
}
 
void Clock::displayTime(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hours << ":"
                             << setw(2) << setfill('0') << minutes << ":"
                             << setw(2) << setfill('0') << sec << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Clock c;
     
    c.getTime();
    c.convertIntoSeconds();
    c.displayTime();
     
    return 0;
}