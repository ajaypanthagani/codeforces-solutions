#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	int b, p, f;
	int h, c;

	cin>>t;

	while(t--){

		int total_profit=0;
		cin>>b>>p>>f;

		cin>>h>>c;

		int pairs = b/2;

		int small=p, large=f;
		int small_profit = h, large_profit=c;

		if(h>c){
			swap(small, large);
			swap(small_profit, large_profit);
		}

		/*naive solution starts*/
		// while(pairs && large){

		// 	pairs--;
		// 	large--;
		// 	total_profit+=large_profit;
		// }

		// while(pairs && small){

		// 	pairs--;
		// 	small--;
		// 	total_profit+=small_profit;
		// }
		/*naive solution ends*/

		total_profit+=min(pairs, large)*large_profit;
		pairs-=min(pairs, large);

		total_profit+=min(pairs, small)*small_profit;



		cout<<total_profit<<endl;

	}
}