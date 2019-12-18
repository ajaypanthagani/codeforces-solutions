#include <bits/stdc++.h>

using namespace std;

int main(){
	int row, col;
	int inp;
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cin>>inp;
			if(inp==1){
				row=i;
				col=j;
			}
		}
	}

	cout<<abs(3-row)+abs(3-col)<<endl;
	return 0;
}