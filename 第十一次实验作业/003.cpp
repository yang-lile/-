//编译预处理命令
#include <cstring>
#include <iostream>

using namespace std;

class STR {  //字符串类的定义
   private:
    char *s1, *s2;  //私有成员数据，s1为原串，s2为删除重复字符的新串
   public:
    STR();  //构造函数  ,  用形参str所指向的字符串初始化s1
    STR(char *str);  //构造函数  ,  用形参str所指向的字符串初始化s1
    void set(char *str);  //用形参str所指向的字符串设置原串s1
    void delsame();  //从s1中复制没有重复的字符到s2所指向的空间
    void show();  //输出s1,  s2所指向的字符数组空间的字符串的内容
    ~STR();       //析构函数,  释放s1,  s2动态开辟的空间
};
//字符串类的实现
STR::STR() { s1 = s2 = NULL; }
STR::STR(char *str) {
    s1 = new char[strlen(str) + 1];
    strcpy(s1, str);
    s2 = NULL;
}
void STR::set(char *str) {
    s1 = new char[strlen(str) + 1];
    strcpy(s1, str);
}
void STR::delsame() {
    int len = strlen(s1) + 1;
    char *s = new char[len];
    s[0] = '\0';

    int i, j = 0;

    for (i = 0; i < len; i++) {
        if (strchr(s, s1[i]) == NULL) {
            s[j++] = s1[i];
            s[j] = '\0';
        }
    }

    s2 = new char[sizeof(s)];
    strcpy(s2, s);
    delete[] s;
}
void STR::show() {
    cout << "原串：s1=" << s1 << endl;
    cout << "新串：s2=" << s2 << endl;
}
STR::~STR() {
    if (s1 != NULL) {
        delete[] s1;
    }
    if (s2 != NULL) {
        delete[] s2;
    }

};  //析构函数,  释放s1,  s2动态开辟的空间

//主函数测试
int main(int argc, char const *argv[]) {
    cout << "输入字符串：";
    char s[50];
    cin >> s;
    STR str(s);
    str.delsame();
    str.show();
    return 0;
}
