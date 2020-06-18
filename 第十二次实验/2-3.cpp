#include <iostream>
using namespace std;
// Bank的定义
class Bank {
    long ID;
    double Balance;
    static double Rational;  //存款利率
   public:
    Bank() {
        ID = 10000;
        Balance = 0;
    }
    Bank(long ID, double Balance) {
        this->ID = ID;
        this->Balance = Balance;
    }
    void setID(long ID) { this->ID = ID; }
    void setBalance(double Balance) { this->Balance = Balance; }
    double getBalance() { return Balance; }
    void setRational(double Rational) { this->Rational = Rational; }
    double getRational() { return Rational; }
    void display() {
        cout << "账号:" << ID << "   存款:" << Balance
             << "   本息:" << Balance * Rational << endl;
    }
};
double Bank::Rational = 0.025;

int main() {
    Bank c;  //系统缺省账户
    cout << "请输入利率:";
    double r;
    cin >> r;
    c.setRational(r * 0.01);
    Bank *b = new Bank[3];
    long id;
    double balance;
    cout << "请输入3个账号及对应的存款金额:" << endl;

    c.display();
    double s = 0;
    for (int i = 0; i < 3; i++) {
        cin >> id >> balance;
        b[i].setID(id);
        b[i].setBalance(balance);
        b[i].display();
        s += b[i].getBalance() * (b[i].getRational()+1);
    }
    cout << "3个账户的本息:" << s << endl;
    delete[] b;
    return 0;
}