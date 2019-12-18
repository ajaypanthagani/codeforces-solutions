#include <iostream>

using namespace std;

int main(){
	int n, o;
	cin>>n;

	string verdict = "EASY";

	while(n--){

		cin>>o;
		if(o==1){
			verdict="HARD";
		}
	}

	cout<<verdict<<endl;

	return 0;
}