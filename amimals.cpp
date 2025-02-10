#include <iostream>
using namespace std;
class Animals {
   public:
    virtual char getvoise() = 0;
};
class Cat : public Animals {
   private:
    string voise1;

   public:
    Cat(string voise1) {
        this->voise1 = voise1;
    }
    char getvoise() override {
        cout << voise1 << endl;
    }
};
int main() {
    Cat myCat("МЯУ");
    cout << myCat.getvoise() << endl;
    return 0;
}