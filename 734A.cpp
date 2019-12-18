#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int anton = count(s.begin(), s.end(), 'A');
	int danik = count(s.begin(), s.end(), 'D');
	if(anton>danik){
		cout<<"Anton"<<endl;
	}
	else if(danik>anton){
		cout<<"Danik"<<endl;
	}
	else{
		cout<<"Friendship"<<endl;
	}
	return 0;
}