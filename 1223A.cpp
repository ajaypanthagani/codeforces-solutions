#include <bits/stdc++.h>

using namespace std;

int main(){

	int t, n;
	cin>>t;
	while(t--){
		int buy=0;
		cin>>n;
		while(n==2 || n%2!=0){
			n++;
			buy++;
		}

		cout<<buy<<endl;
	}

	return 0;
}