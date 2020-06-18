#include <iomanip>
#include <iostream>

using namespace std;

class Tr {
   private:
    int arr[2][3];

   public:
    Tr(int a) {
        int i;
        for (i = 0; i < 6; i++) {
            arr[i / 3][i % 3] = a;
        }
    }
    Tr operator+(Tr a) {
        int i;
        Tr r(0);
        for (i = 0; i < 6; i++) {
            r.arr[i / 3][i % 3] = this->arr[i / 3][i % 3] + a.arr[i / 3][i % 3];
        }
        return r;
    }
    Tr operator-(Tr a) {
        int i;
        Tr r(0);
        for (i = 0; i < 6; i++) {
            r.arr[i / 3][i % 3] = this->arr[i / 3][i % 3] - a.arr[i / 3][i % 3];
        }
        return r;
    }
    ostream &operator<<(ostream &o) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                o << setw(7) << this->arr[i][j];
            }
            o << endl;
        }
        return o;
    }
    istream &operator>>(istream &in) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                in >> this->arr[i][j];
            }
        }
        return in;
    }
};

int main(int argc, char const *argv[]) {
    cout << "请输入2行3列矩阵内容:" << endl;
    Tr a(0);
    a >> cin;
    cout << "请输入2行3列矩阵内容:" << endl;
    Tr b(0);
    b >> cin;
    cout << "m1+m2=" << endl;
    Tr c = a + b;
    c << cout;
    cout << "m1-m2=" << endl;
    c = a - b;
    c << cout;
    return 0;
}
