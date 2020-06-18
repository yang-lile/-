#include <math.h>

#include <iostream>
using namespace std;

//三角形类的定义
class Tri {
    int a, b, c;
    int badTri = false;
    float getArea() {
        float t, s;
        t = 1.0 * (a + b + c) / 2;
        s = sqrtf(t * (t - a) * (t - b) * (t - c));
        return s;
    }

   public:
    Tri(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
        if (a + b <= c || b + c <= a || c + a <= b) {
            badTri = true;
        }
    }
    void getMessage() {
        if (badTri)
            cout << "不构成三角形!" << endl;
        else {
            cout << "三角形的边长:" << a << ' ' << b << ' ' << c << endl;
            cout << "三角形的周长:" << a + b + c << endl;
            cout << "三角形的面积:" << getArea() << endl;
        }
    }
};  //三角形类的定义结束，定义了三角形的各种属性和可实施的操作

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    Tri tri(a, b, c);
    tri.getMessage();
    return 0;
}