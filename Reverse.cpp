#include<iostream>
using namespace std;
class  ReverseNumber{
	public:
		void reverse(int num)
		{
			int rem,total=0;
			while(num>0)
			{
				rem=num%10;
				total=total*10+rem;
				num=num/10;
			}
			cout<<"Reverse of given number is:"<<total;
		}
};
int main()
{
	 ReverseNumber R;
	 R.reverse(1251);
}