#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, flag=0;
	cin>>n;
	string arr[n];
	string row;

	for(int i=0; i<n; i++){
		cin>>row;
		if(row[0]=='O'&&row[1]=='O' && flag==0){
			flag=1;
			row[0]='+';
			row[1]='+';
		}
		if(row[3]=='O'&&row[4]=='O' && flag==0){
			flag=1;
			row[3]='+';
			row[4]='+';
		}
		arr[i]=row;
	}

	if(flag){
		cout<<"YES"<<endl;
		for(string a: arr){
			cout<<a<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}

	return 0;
}