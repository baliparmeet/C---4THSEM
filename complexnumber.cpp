#include<iostream>
using namespace std;

class complex {
private:
    float real;
    float imag;
public:
    // Default constructor
    complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    complex(float r, float i) {
        real = r;
        imag = i;
    }

    void getdata() {
        cout << "Enter real and imaginary part: ";
        cin >> real >> imag;
    }

    void display() {
        cout << "Complex number: " << real << "+" << imag << "i" << endl;
    }

    complex add(complex n1, complex n2) {
        complex N;          
        N.real = n1.real + n2.real;
        N.imag = n1.imag + n2.imag;
        return N;
    }
};

int main() {
    complex n1, n2, n3;   
    n1.getdata();
    n2.getdata();
    n3 = n3.add(n1, n2);
    n3.display();
    return 0;
}
