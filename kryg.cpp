#include <iostream>
using namespace std;

struct A {
    double coo[10];
    int radius;

    for (const auto& elem : coo) {
    }
    bool operator==(const A& b) {
        bool cooEq = true;
        for (int i = 0; i < 10; i++) {
            if (this->coo[i] != b.coo[i]) {
                cooEq = false;
            }
        }

        return b.radius == this->radius&&
    }
    bool inZero() {
        bool flag = true;
        for (int i = 0; i < 10; i++) {
            if (coo[i] != 0) {
                flag = false;
            }
        }
        return flag;
    }
};

int main() {
    a = {4.5, 3.2};
    cout << a << b;
    cout << "a =b: " << result << endl;

    return 0;
}