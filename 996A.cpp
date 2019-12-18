#include <bits/stdc++.h>

using namespace std;

bool f(int x, int y){

	return x>y;
}

int main(){

	long long n;
	cin>>n;

	vector<int> bills= {1, 5, 10, 20, 100};

	sort(bills.begin(), bills.end(), f);
	int billcount = 0;
	while(n){
		for(int bill: bills){
			if(bill<=n){
				n=n-(long)bill;
				billcount++;
				break;
			}
		}
	}

	cout<<billcount<<endl;
	return 0;
}