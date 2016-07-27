#include <iostream>
using namespace std;

int main() {
	int a,a1,a2,max=0;
	cin>>a>>a1>>a2;
	max=a;
	if(max<a1)
	max=a1;
	if(max<a2)
	max=a2;
	cout<<max;
	
	
	return 0;
}
