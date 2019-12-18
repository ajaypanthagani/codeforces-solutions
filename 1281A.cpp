#include <bits/stdc++.h>

using namespace std;

// string last(string sentence){

// 	string::iterator = sentence.find_last_of('_');
// 	string last_word = string(sentence.begin()+1, sentence.end()-1);
// 	return last_word;
// }

int main(){
	int t;
	cin>>t;
	while(t--){
		string fillipino="po", japanese_one="desu", japanese_two="masu", korean="mnida";
		string last_word;

		cin>>last_word;

		if(last_word.compare(last_word.size()-fillipino.size(), fillipino.size(), fillipino)==0){
			cout<<"FILIPINO"<<endl;
		}
		else if(last_word.compare(last_word.size()-japanese_one.size(), japanese_one.size(), japanese_one)==0||last_word.compare(last_word.size()-japanese_two.size(), japanese_two.size(), japanese_two)==0){
			cout<<"JAPANESE"<<endl;
		}
		else if(last_word.compare(last_word.size()-korean.size(), korean.size(), korean)==0){
			cout<<"KOREAN"<<endl;
		}
	}
}