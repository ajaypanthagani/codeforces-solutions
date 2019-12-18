#include <bits/stdc++.h>

using namespace std;

int main(){

	long long q, a, b, k;
	int even, odd;

	cin>>q;

	while(q--){

		cin>>a>>b>>k;
		if(k%2==0){
			even = k/2;
			odd = k/2;
		}
		else{

			odd = k/2 + 1;
			even = k-odd;
		}

		cout<<(a*odd)-(b*even)<<endl;
	}
	return 0;
}