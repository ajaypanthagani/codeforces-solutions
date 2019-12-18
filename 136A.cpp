#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n], result[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int j=0;
	for(int i=1; i<=n; i++){

		auto itr = find(arr, arr+n, i);
		result[j++] = distance(arr, itr)+1;
	}

	for(int i=0; i<n; i++){
		cout<<result[i]<<" ";
	}

	return 0;
}