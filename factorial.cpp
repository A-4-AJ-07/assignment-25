#include<iostream>
using namespace std;
class factorial{
	public:
		void fact(int num)
		{
			int total=1;
			while(num>0)
			{
				total=total*num;
				num--;
			}
			cout<<"Factorial of given number is:"<<total;
		}
};
int main()
{
	factorial f;
	f.fact(3);
}