#include <bits/stdc++.h>

using namespace std;

int main(){

	char table[2];
	string hand[5];

	cin>>table;
	for(int i=0; i<5; i++)
		cin>>hand[i];

	for(string a: hand){

		if(a.find(table[0])!=string::npos || a.find(table[1])!=string::npos){
			cout<<"YES"<<endl;
			return 0;
		}
	}

	cout<<"NO"<<endl;
	return 0;
}