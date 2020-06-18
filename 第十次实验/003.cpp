// CPU类的声明与使用
#include <iostream>
using namespace std;

// CPU等级：枚举型声明
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };

// CPU类的声明
class CPU {
    CPU_Rank rank;
    void run() {
        cout << "CPU开始运行!" << endl;
        cout << "等级为:" << rank << endl;
    }
    void stop() { cout << "CPU停止运行!" << endl; }

   public:
    CPU(CPU_Rank r) {
        rank = r;
        cout << "构造了一个CPU!" << endl;
    }
    void test() {
        run();
        stop();
    }
    ~CPU() { cout << "析构了一个CPU!" << endl; }
};

//测试
int main() {
    int a, b;
    cin >> a >> b;
    CPU n((CPU_Rank)a), m((CPU_Rank)b);
    n.test();
    m.test();
    return 0;
}