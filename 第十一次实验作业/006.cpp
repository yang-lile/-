//根据点的定义，写出线段和三角形的定义，并通过主程序进行验证
// mypoint.h
class myPoint {
   public:
    myPoint();
    myPoint(double x, double y);
    double getX();
    double getY();

   private:
    double mX, mY;
};

myPoint::myPoint() {}
myPoint::myPoint(double x, double y) {
    mX = x;
    mY = y;
}
double myPoint::getX() { return mX; }
double myPoint::getY() { return mY; }
#include <cmath>
#include <iostream>
using namespace std;
class Line {
   private:
    myPoint a, b;

   public:
    Line(myPoint a, myPoint b) {
        this->a = a;
        this->b = b;
    }
    double GetDistance() {
        return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
    }
};
class Triangle {
   private:
    myPoint a, b, c;

   public:
    Triangle(myPoint a, myPoint b, myPoint c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    double getGirth() {
        Line n(a, b), m(b, c), l(c, a);
        return n.GetDistance() + m.GetDistance() + l.GetDistance();
    }
    double getArea() {
        Line n(a, b), m(b, c), l(c, a);
        double N = n.GetDistance(), M = m.GetDistance(), L = l.GetDistance();
        double p = 1.0 * (N + M + L) / 2;
        return sqrt(p * (p - N) * (p - M) * (p - L));
    }
};

int main() {
    double x1, x2, x3, y1, y2, y3;
    cout << "请输入点1的x的值：";
    cin >> x1;
    cout << "请输入点1的y的值：";
    cin >> y1;
    cout << "请输入点2的x的值：";
    cin >> x2;
    cout << "请输入点2的y的值：";
    cin >> y2;
    cout << "请输入点3的x的值：";
    cin >> x3;
    cout << "请输入点3的y的值：";
    cin >> y3;
    cout << "点1的坐标为：(" << x1 << "," << y1 << ")" << endl;
    cout << "点2的坐标为：(" << x2 << "," << y2 << ")" << endl;
    cout << "点3的坐标为：(" << x3 << "," << y3 << ")" << endl;
    myPoint p1(x1, y1), p2(x2, y2), p3(x3, y3);
    Line line1(p1, p2);
    cout << "线长度:" << line1.GetDistance() << endl;
    Triangle t(p1, p2, p3);
    cout << "该三角形的周长为：" << t.getGirth() << endl;
    cout << "该三角形的面积为：" << t.getArea() << endl;
    return 0;
}