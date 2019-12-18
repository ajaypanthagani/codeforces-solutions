#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, mishka=0, chris=0, mishka_dice, chris_dice;

	cin>>n;
	while(n--){
		cin>>mishka_dice>>chris_dice;
		if(mishka_dice>chris_dice){
			mishka++;
		}
		else if(mishka_dice<chris_dice){
			chris++;
		}
	}
	if(mishka>chris){
		cout<<"Mishka"<<endl;
	}
	else if(mishka<chris){
		cout<<"Chris"<<endl;
	}
	else{
		cout<<"Friendship is magic!^^"<<endl;
	}
	return 0;
}