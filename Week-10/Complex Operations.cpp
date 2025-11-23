//.h fle
#include <iostream>
using namespace std;

class Complex{
	private:
		double real;
		double imaginary;
	public:
		//constructor
		Complex(double re = 0.0, double im = 0.0)
			:real(re), imaginary(im) {}
		//getter for real part
		double getReal() const{
			return real;
		}
		//getter for imaginary part
		double getImaginary() const{
			return imaginary;
		}
		//ab = a * b
		//overload the - operator to subtract two complex numbers
		//(a1 + b1*i) - (a2 + b2*i) = (a1 - a2) + (b1 - b2)*i
		Complex operator-(const Complex& other) const{
			double newReal = this->real - other.real;
			double newImag = this->imaginary - other.imaginary;
			return Complex(newReal, newImag);
		}
};

//main.cpp
int main(){
	Complex z1(12.0, 3.1); //12 + 3.1i
	Complex z2(7.77, 36.2); //7.77 + 36.2i
	
	//calls z1.operator-(z2)
	Complex diff = z1 - z2;
	cout<<"z1 = "<<z1.getReal()<<" + "<<z1.getImaginary()<<"i"<<endl; //output: z1 = 12 + 3.1i
	cout<<"z2 = "<<z2.getReal()<<" + "<<z2.getImaginary()<<"i"<<endl; //output: z2 = 7.77 + 36.2i
	cout<<"z1 - z2 = "<<diff.getReal()<<" + "<<diff.getImaginary()<<"i"<<endl;
	return 0;
}
