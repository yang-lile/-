#include <iostream>
using namespace std;

const double PI = 3.1416;

class Box  //正方形类
{
   public:
    int l;
    Box(int l) { this->l = l; }
    void set(int i) { this->l = i; }
};

class circle  //圆类
{
   public:
    int r;
    circle(int r) { this->r = r; }
    void set(int i) { this->r = i; }
};

class NewStyle  //组合类
{
    double s, l;

   public:
    NewStyle(circle c, Box b) {
        s = c.r * c.r * PI - b.l * b.l;
        l = 2 * c.r * PI + 4 * b.l;
    }
    double S() { return s; }
    double L() { return l; }
    void set(circle c, Box b) {
        s = c.r * c.r * PI - b.l * b.l;
        l = 2 * c.r * PI + 4 * b.l;
    }
};

int main() {
    circle A(4);  //圆的半径为4
    Box B(1);     //正方形的边长为1
    NewStyle C(A, B);
    cout << "自定义图形的面积" << C.S() << endl;
    cout << "自定义图形的周长" << C.L() << endl;
    A.set(6);  //圆的半径变为6
    B.set(2);  //正方形的边长变为2
    C.set(A, B);
    cout << "自定义图形的面积" << C.S() << endl;
    cout << "自定义图形的周长" << C.L() << endl;
    return 0;
}