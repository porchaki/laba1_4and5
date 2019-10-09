#include <iostream>

using namespace std;
int main()
{
	
	double S,R,P,Ch,a,b;

	cin>>a>>b;
	S = a*a+b*b;
	R = a*a-b*b;
	P = a*a*b*b;
	Ch = (a*a)/(b*b);
	cout<<"S="<<S<<endl<<"R="<<R<<endl<<"Ch="<<Ch<<endl;
	system("pause");
	return 0;
}