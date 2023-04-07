#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	public :
		void setComplex(int x,int y)
		{
			real=x;
			img=y;
			}
		void getComplex()
		{
			cout<<"complex number is:"<<real<<"+"<<img<<"i";
		 } 
	
};
int main()
{
	complex b;
	b.setComplex(20,22);
	b.getComplex(); 
}