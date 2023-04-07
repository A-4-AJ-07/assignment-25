#include<iostream>
using namespace std;
class rectangle{
	
	public:
		float area1;
		void area(float l,float b)
		{
			area1=l*b;
			cout<<"Area of rect:"<<area1;
		}
};
int main()
{
	rectangle r;
	r.area(10.3,4);
	return 0;
}