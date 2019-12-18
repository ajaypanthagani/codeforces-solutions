#include <bits/stdc++.h>

using namespace std;

int main(){

	string A;
	cin>>A;
	int a = count(A.begin(), A.end(), 'a');
	int final = A.size(), total = A.size();
	if(a<=total/2){
		int remaining = total - a;
		int toberemoved = (remaining-a)+1;
		final = total - toberemoved;
	}

	cout<<final<<endl;
}