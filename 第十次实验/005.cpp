#include <iostream>
using namespace std;

//长方体  的设计与实现
class Rect {
   private:
    double a, b, c;

   public:
    Rect() {}
    Rect(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void set(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    inline double S() { return (a * b + b * c + c * a) * 2; }
    inline double V() { return a * b * c; }
};

//测试
int main() {
    double a, b, c;
    cout << "第一个长方体的长、宽、高：";
    cin >> a >> b >> c;
    cout << "第二个长方体的长、宽、高：";
    Rect rect1 = Rect();
    rect1.set(a, b, c);
    cout << "第一个长方体的表面积为：" << rect1.S() << endl;
    cout << "第一个长方体的体积为：" << rect1.V() << endl;

    cin >> a >> b >> c;
    Rect rect2 = Rect(a, b, c);
    cout << "第二个长方体的表面积为：" << rect2.S() << endl;
    cout << "第二个长方体的体积为：" << rect2.V() << endl;

    return 0;
}