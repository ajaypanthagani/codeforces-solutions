#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, temp;
	cin>>n;
	int a[100]={0};
	while(n--){
		cin>>temp;
		++a[temp-1];
	}

	int size = sizeof(a)/sizeof(a[0]);

	cout<<*max_element(a, a+size);
}