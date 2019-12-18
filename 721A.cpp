#include <bits/stdc++.h>

using namespace std;


int main(){

	int n, size=0, flag = 0;
	char c;

	std::vector<int> v;

	cin>>n;
	while(n--){

		cin>>c;
		if(c=='B' && flag==0){
			size=1;
			flag=1;
		}
		else if(c=='B' && flag==1){
			size++;
		}
		if(c=='W' && flag==1){
			v.push_back(size);
			size=0;
			flag=0;
		}

	}

	cout<<v.size()<<endl;

	for(int a: v){
		cout<<a<<" ";
	}

	cout<<endl;
}