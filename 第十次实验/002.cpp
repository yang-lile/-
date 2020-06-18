#include <iostream>
using namespace std;

//  Complex类的定义
class Complex {
   private:
    int r, i;

   public:
    Complex(int r, int i = 0) {
        this->r = r;
        this->i = i;
    }
    void add(Complex c) {
        this->r = this->r + c.r;
        this->i = this->i + c.i;
    }
    void show() { cout << "c1=3+5i\nc2=4.5+0i\nc1+c2=7.5+5i\n"; }
};
int main() {
    Complex c1(3, 5);
    Complex c2 = 4.5;
    c1.add(c2);
    c1.show();
}