#include <iostream>

class Cat {
   private:
    int itsAge;
    void Call() {
        std::cout << "There are " << HowManyCats << " cats alive!" << std::endl;
    }

   public:
    static int HowManyCats;
    static int GetHowMany() { return HowManyCats; }
    Cat(int age) {
        itsAge = age;
        HowManyCats++;
        std::cout << "Cat"<<age<<"age=" << age << std::endl;
        Call();
    }
    ~Cat() {
        HowManyCats--;
        Call();
    }
};

int Cat::HowManyCats = 0;
int main(int argc, char const *argv[]) {
    Cat cat1(1);
    Cat cat2(2);
    Cat cat3(3);
    Cat cat4(4);
    Cat cat5(5);

    return 0;
}
