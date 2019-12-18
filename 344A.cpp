#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, cur, prev=9, grp=0;
	cin>>n;
	while(n--){
		cin>>cur;
		if(cur!=prev){
			grp++;
		}
		prev=cur;
	}

	cout<<grp<<endl;
	return 0;
}