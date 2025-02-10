#include <iostream>
using namespace std;
class Figure {
   public:
    virtual float getSquare() = 0;
};
class Circle : public Figure {
   private:
    float Ax;
    float Ay;
    float r;

   public:
    Circle(float Ax, float Ay, float r) {
        this->Ax = Ax;
        this->Ay = Ay;
        this->r = r;
    }
    float getSquare() override {
        return 3.14 * r * r;
    }
};
class BestCircle : public Circle {
   public:
    BestCircle() : Circle(0, 0, 1){

    }
    float getSquare() override{
        return 3.14;
    }
};
class KVADR : public Figure {
   private:
    float x, y;

   public:
    KVADR(float x, float y) {
        this->x = x;
        this->y = y;
    }
    float getSquare() override {
        return x * y;
    }
};
void printSquare(Figure &f) {
    cout << f.getSquare() << endl;
}

int main() {
    
    
    Circle aa(1, 1, 1);
    printSquare(aa);
    KVADR r(1, 1);
    
    return 0;
}