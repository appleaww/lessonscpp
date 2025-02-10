#include <iostream>
using namespace std;
class CUBE {
   private:
    float Ax, Ay, Bx, By;

   public:
    CUBE(float Ax, float Ay, float Bx, float By) {
        this->Ax = Ax;
        this->Ay = Ay;
        this->Bx = Bx;
        this->By = By;
    }
    CUBE(){
        Ax =0;
        Ay = 0;
        Bx =0;
        By =0;
    }
    ~CUBE() {
        cout << "Deletd CUBE with coords" << endl;
    }
};
int main() {
    CUBE myCUBE;
}
