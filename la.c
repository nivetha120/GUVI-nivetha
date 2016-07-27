#include <iostream>
using namespace std;

int main() {
int a;
cin>>a;
if((a%100==0&&a%400==0)||(a%100!=0&&a%4==0))
cout<<"leap year";
else
cout<<"Not leap year";
	return 0;
}
