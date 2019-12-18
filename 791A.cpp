#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a, b, years=0;
	cin>>a>>b;

	while(a<=b){

		a=a*3;
		b=b*2;
		years++;
	}

	cout<<years<<endl;
}