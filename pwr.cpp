#include <iostream>
using namespace std;

int main() {
	int exp,base,res=1;
	cin>>exp>>base;
	while(exp!=0)
	{
		res=res*base;
		--exp;
	}
	cout<<res;
	return 0;
}
