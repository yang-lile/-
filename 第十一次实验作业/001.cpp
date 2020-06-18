#include <iostream>

using namespace std;
const double PI = 3.14;

class Circle {
   private:
    int R;

   public:
    Circle(int r) {
        R = r;
        cout << "the circle is created!" << endl;
    }
    inline float GetArea(int r = 0) { return PI * (R * R - r * r); }
};

int main(int argc, char const *argv[]) {
    int R,r;
    cin >> R >> r;
    Circle c(R);
    cout << "the area is:" << c.GetArea() << endl;
    cout << "the ring's area is:" << c.GetArea(r) << endl;
    return 0;
}
