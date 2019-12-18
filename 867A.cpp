#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, FS=0, SF=0;
	char cur, prev='X';
	cin>>n;
	while(n--){
		cin>>cur;
		if(cur=='F' && prev=='S'){
			SF++;
		}
		else if(cur=='S' && prev=='F'){
			FS++;
		}

		prev=cur;
	}

	if(SF>FS){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}