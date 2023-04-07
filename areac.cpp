#include<iostream>
using namespace std;
class circle{
	
	public:
		float area1;
		void area(float r)
		{
			area1=3.14*r*r;
			cout<<"Area of rect:"<<area1;
		}
};
int main()
{
	circle r;
	r.area(10.3);
	return 0;
}