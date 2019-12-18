#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, k; 
	double sum=0;
	cin>>n;
	int dup = n;
	while(dup--){
		cin>>k;
		sum+=k;
	}

	cout<<(double)sum/n<<endl;
}