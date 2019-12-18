#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string t, solution;

	cin>>n;

	cin>>t;

	auto starting = t.begin();

	int add = 1;

	while(starting<t.end()){

		solution.append(starting, starting+1);
		starting = starting+add++;
	}

	cout<<solution<<endl;
	return 0;
}