#include<iostream>
using namespace std;
class Greatest{
	public:
		void largest(int x,int y,int z)
		{
			if(x>y&&x>z)
			{
				cout<<"Largest in all is "<<x;
			}
			else if(y>x&&y>z)
			{
				cout<<"Largest in all is "<<y;
			}
			else
			{
				cout<<"Largest in all is "<<z;
			}
		}
};
int main()
{
	Greatest L;
	L.largest(10,200,350);
}