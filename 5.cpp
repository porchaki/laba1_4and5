#include <iostream>
using namespace std;
	int main(){
	double a,b,S,R,P,C;
	cin >> a;
	cin >> b;
S = abs(a)+abs(b);
if (a<b||a==b){R = abs(b)-abs(a);} else{
	R = abs(a)-abs(b);}
P = abs(a)*abs(b);
if (a < b||a==b) {C = abs(b)/abs(a);} else{
	C = abs(a)/abs(b);}
cout << S<<endl<<R<<endl<<P<<endl<<C<<endl;
system("pause");
return(0);
	}

