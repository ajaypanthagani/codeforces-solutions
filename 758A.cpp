#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int citizen[n];
	for(int i=0; i<n; i++){

		cin>>citizen[i];
	}

	auto it = max_element(citizen, citizen+n);
	int high  = *it;
	int min_cost = 0;
	for(int a: citizen){
		min_cost+=high-a;
	}

	cout<<min_cost<<endl;
	return 0;
}