#include <cctype>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    string s;
    getline(cin, s);
    const char *_s = s.c_str();

    char *p = (char *)_s;
    int len = s.length();
    for (int i = 0; i < len; i++, p++) {
        if (isupper(*p)) {
            continue;
        }
        cout.put(*p);
    }

    return 0;
}
