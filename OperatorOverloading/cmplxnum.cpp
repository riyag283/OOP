//Program to Overload '+' operator
//And add two complex numbers
#include<iostream>
using namespace std;
class complex{
	float x;
	float y;
public:
	complex();
	complex(float real,float img){
		x=real;
		y=img;
	}
	complex operator+(complex);
	void display(void);
};
complex complex :: operator+(complex c){
	complex temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	return temp;
}
void complex :: display(void){
	cout<<x<<" + "<<y<<"i\n";
}
int main(){
	complex C1,C2,C3;
	C1=complex(2.3f,2.4f);
	C2=complex(1.3f+1.4f);
	C3=C1+C2;
	C1.display();
	C2.display();
	C3.display();
	return 0;
}
