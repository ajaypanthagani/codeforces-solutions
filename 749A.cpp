#include <bits/stdc++.h>

using namespace std;

bool isPrime(int k){
	int i=2;
	int count = 0;
	while(i*i<=k){
		if(i%k==0){
			count++;
		}
		i++;
	}
	if(count>1){
		return false;
	}
	return true;
}

int main(){

	int n, temp;
	cin>>n;
	std::vector<int> solution;

	while(n-2!=1 && n>0){

		n=n-2;
		solution.push_back(2);
	}

	if(n){
		solution.push_back(n);
	}

	cout<<solution.size()<<endl;

	for(int a: solution){
		cout<<a<<" ";
	}

	cout<<endl;
	return 0;
}