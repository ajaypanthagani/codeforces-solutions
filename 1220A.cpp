#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	string i, o="";
	cin>>n;
	cin>>i;
	int one = count(i.begin(), i.end(), 'n');
	int zero = count(i.begin(), i.end(), 'z');
	while(one--){
		o.append("1");
		o.append(" ");
	}
	while(zero--){
		o.append("0");
		o.append(" ");
	}

	cout<<o<<endl;
	return 0;
}