#include<iostream>
using namespace std;
class Area{
	
	public:
		
		void areaR(float l,float b)
		{
		    float area1;
			area1=l*b;
			cout<<"\nArea of rect:"<<area1;
		}
			void areaC(float r)
		{
			float area1;
			area1=3.14*r*r;
			cout<<"\nArea of circle:"<<area1;
		}
			void areaS(float s)
		{
			float area1;
			area1=s*s;
			cout<<"\nArea of sqaure:"<<area1;
		}
};
int main()
{
	Area a;
	a.areaC(10);
	a.areaR(15,10);
	a.areaS(2);
	return 0;
}