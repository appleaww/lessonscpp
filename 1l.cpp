#include <iostream>
using namespace std;

struct Complex {
    double real, imag;
    Complex operator-(const Complex& b) {
        Complex result;
        result.real = this->real - b.real;
        result.imag = this->imag - b.imag;
        return result;
    }
    Complex operator*(const Complex& b) {
        Complex result;
        result.real = this->real * b.real;
        result.imag = this->imag * b.imag;
        return result;
    }
    Complex operator+(const Complex& b) {
        Complex result;
        result.real = this->real + b.real;
        result.imag = this->imag + b.imag;
        return result;
    }
    
  
};

ostream& operator<<(ostream& os, const Complex& c){ 
    os << c.real;
    if (c.imag >= 0) {
        os << " + " << c.imag << "i" << endl;
    } else {
        os << " - " << -c.imag << "i" << endl;
    }
    return os;
    }
int main() {
    Complex a = {4.5, 3.2};
    Complex b = {2.2, 1.7};
    Complex result = a - b;
    Complex result1 = a * b;
    Complex result2 = a + b;

    cout << a << b;
    cout << "a - b: " << result << endl;
    cout << "a * b: " << result1 << endl;
    cout << "a + b: " << result2 << endl;


    return 0;
}