#include <iostream>

using namespace std;

class circle {
    int num[20];  //存放输入的20个随机数
    int Maxp;  // 20个数中连续4个数之和中最大的那4个连续的数首位坐标
    int Minp;  // 20个中连续4个数之和中最小的那4个连续的数首位坐标
    int sum_max, sum_min;
    int getNext(int i) {
        if (i + 1 > 19) {
            return (i + 1) % 20;
        } else {
            return i + 1;
        }
    }

   public:
    circle() {
        int i;
        for (i = 0; i < 20; i++) {
            cin >> this->num[i];
        }
    }
    circle(int *p) {
        int i;
        for (i = 0; i < 20; i++) {
            this->num[i] = p[i];
        }
    }
    void getSum() {
        int i;
        int sum = 0;
        for (i = 0; i < 4; i++) {
            sum += num[i];
        }
        sum_max = sum_min = sum;
        Maxp = Minp = 0;
        for (i = 0; i < 20; i++) {
            int t = getNext(i + 3);
            sum -= num[i];
            sum += num[t];
            if (sum > sum_max) {
                sum_max = sum;
                Maxp = getNext(i);
            }
            if (sum < sum_min) {
                sum_min = sum;
                Minp = getNext(i);
            }
            // cout << sum << ' ' << sum_min << ' ' << sum_max << endl;
        }
    }
    void print() {
        int i;
        for (i = 0; i < 20; i++) {
            cout << num[i] << ' ';
        }
        cout << endl << "Max=" << sum_max << endl;
        for (i = 0; i < 4; i++) {
            cout << num[getNext(i + Maxp - 1)] << ' ';
        }
        cout << endl << "Min=" << sum_min << endl;
        for (i = 0; i < 4; i++) {
            cout << num[getNext(i + Minp - 1)] << ' ';
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[]) {
    circle a;  //圆盘类的对象a
    int i, test[20];
    //输入数据test
    for (i = 0; i < 20; i++) {
        cin >> test[i];
    }

    circle b(test);  //圆盘类的对象b
                     //测试圆盘a,b
    cout << "圆盘a:" << endl;
    a.getSum();
    a.print();
    cout << "圆盘b:" << endl;
    b.getSum();
    b.print();
    return 0;
}
