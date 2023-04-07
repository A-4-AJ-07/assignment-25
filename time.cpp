#include<iostream>
using namespace std;
class time{
	
	int hr,min,sec;
	public:
		void setTime(int x,int y,int z)
		{
			hr=x;
			min=y;
			sec=z;
		}
		void Print()
		{
			cout<<"Time="<<hr<<":"<<min<<":"<<sec;
		}
};
int main()
{
	int hh,mm,ss;
	cout<<"Enter the time in hh:mm:ss format\n";
	cout<<"Enter hour:";
	cin>>hh;
	cout<<"Enter min:";
	cin>>mm;
	cout<<"Enter sce:";
	cin>>ss;
	time T;
	T.setTime(hh,mm,ss);
	T.Print();
	
}