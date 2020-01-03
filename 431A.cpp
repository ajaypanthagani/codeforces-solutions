#include <bits/stdc++.h>

using namespace std;

//codeforces 431A
int main(){
	int a[4], calories=0;

	string strips;

	cin>>a[0]>>a[1]>>a[2]>>a[3];

	cin>>strips;

	for(auto itr = strips.begin(); itr<strips.end(); itr++){

		if(*itr=='1'){
			calories+=a[0];
		}

		else if(*itr=='2'){
			calories+=a[1];
		}


		else if(*itr=='3'){
			calories+=a[2];
		}


		else if(*itr=='4'){
			calories+=a[3];
		}
	}

	cout<<calories<<endl;

	return 0;
}