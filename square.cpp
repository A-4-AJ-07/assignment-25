#include<iostream>
using namespace std;
class square{
	int n,total;
	static int b;
	public:
		void input();
		void calculate();
};
int square::b=0;

void square::input()
{
	cout<<"Enter the number for the calculation:";
	cin>>n;
	b++;
}
void square::calculate()
{
	total=n*n;
	cout<<"Square of number is "<<total<<"\n";
	b++;
	cout<<"Total times function call:"<<b;
}
int main()
{
	square s;
	s.input();
	s.calculate();

}