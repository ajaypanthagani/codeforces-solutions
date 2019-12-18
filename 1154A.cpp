#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b, c, d;

	cin>>a>>b>>c>>d;
	vector <int> vals;
	vals.push_back(a);
	vals.push_back(b);
	vals.push_back(c);
	vals.push_back(d);
	vector<int>::iterator it = max_element(vals.begin(), vals.end());

	int abc = *it;

	vals.erase(it);

	int ab = vals[0];

	int ac = vals[1];

	int bc = vals[2];

	a = ab + ac - abc;

	c = ac-a;

	b = bc-c;

	cout<<a<<' '<<b<<' '<<c<<endl;

	return 0;
}