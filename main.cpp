#include <iostream>
using namespace std;
	bool songto(int x)
	{
		if(x<2)
			return false;
		for (int i=2; i<x; i++)
		{
			if (x%i==0)
				return false;
		}
		return true;
	}
int main()
{
	int x;
	cin>>x;
	if(songto(x))
		cout<<"la so nguyen to"<<endl;
	else
		cout<<"khong la so nguyen to"<<endl;
}