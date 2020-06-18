#include <iostream>
#include <string>

using namespace std;

// Score类
class Score {
   private:
    int math, eng;

   public:
    Score(int m, int e) {
        math = m;
        eng = e;
    }
    void show() {
        cout << "数学成绩：" << math << endl << "英语成绩：" << eng << endl;
    }
};
// Student类
class Student {
   private:
    int stuid;
    Score mark;

   public:
    Student(int id, int m, int e) : mark(m, e) { stuid = id; }
    void stushow() {
        cout << "学号：" << stuid << endl;
        mark.show();
    }
};
int main() {
    cout << "学号：";
    cout << "数学成绩："
         << "英语成绩：" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    Student s(a, b, c);
    s.stushow();
    return 0;
}