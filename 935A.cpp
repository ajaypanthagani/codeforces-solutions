#include <bits/stdc++.h>

using namespace std;

int main(){
	int team, ways=0;
	cin>>team;
	for(int i=1; i<team; i++){
		if((team-i)%i==0){
			ways++;
		}
	}

	cout<<ways<<endl;
	return 0;
}