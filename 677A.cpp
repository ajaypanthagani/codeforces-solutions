#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, h, min=0, a;
	cin>>n>>h;
	while(n--){
		cin>>a;
		if(a>h){
			min+=2;
		}
		else{
			min+=1;
		}
	}
	cout<<min<<endl;
}