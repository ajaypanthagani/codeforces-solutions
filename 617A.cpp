#include <bits/stdc++.h>

using namespace std;


int main(){
	int k, total=0;
	cin>>k;
	int positions[] = {5, 4, 3, 2, 1};
	while(k){
		for(int step: positions){
			if(step<=k){
				k-=step;
				break;
			}
		}
		total++;
	}

	cout<<total<<endl;
	return 0;
}