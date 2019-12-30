#include <bits/stdc++.h>

using namespace std;


int main(){

	int n, flag = 0;
	char c;

	std::vector<int> v;

	cin>>n;
	for(int i=1; i<=n; i++){

		cin>>c;
		if(c=='B'){
			if(flag==0){
				flag=1;
			}
			else if(flag>0){
				flag++;
			}
			if(i==n){
				v.push_back(flag);
			}
		}
		else if((c=='W' && flag>0)){
			v.push_back(flag);
			flag=0;
		}

	}

	// if(c=='B'){
	// 	v.push_back(flag);
	// }

	cout<<v.size()<<endl;

	for(int a: v){
		cout<<a<<" ";
	}

	cout<<endl;
}