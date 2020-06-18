#include <iostream>

using namespace std;

class Time {
   private:
    int hours, minutes, seconds;

   public:
    Time(int hours, int minutes, int seconds) {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    Time() {}
    Time operator+(const Time &a) {
        Time t(0, 0, 0);
        t.hours = this->hours + a.hours;
        t.minutes = this->minutes + a.minutes;
        t.seconds = this->seconds + a.seconds;
        if (t.seconds > 59) {
            t.minutes += t.seconds / 60;
            t.seconds %= 60;
        }
        if (t.minutes > 59) {
            t.hours += t.minutes / 60;
            t.minutes %= 60;
        }
        if (t.hours > 23) {
            t.hours %= 24;
        }
        return t;
    }
    friend ostream &operator<<(ostream &o, const Time &a) {
        o << a.hours << ':' << a.minutes << ':' << a.seconds;
        return o;
    }
};

int main(int argc, char const *argv[]) {
    int a, b, c;
    cin >> a >> b >> c;
    Time t1(a, b, c);
    cin >> a >> b >> c;
    Time t2(a, b, c);
    cout << "the result is:"<<(t1 + t2) << endl;
    return 0;
}
