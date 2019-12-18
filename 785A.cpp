#include <iostream>
#include <string>

using namespace std;

int main(){

	int n, total=0;

	string poly;
	cin>>n;
	while(n--){

		cin>>poly;

		if(poly.compare("Tetrahedron")==0){
			total+=4;
		}
		else if(poly.compare("Cube")==0){
			total+=6;
		}
		else if(poly.compare("Octahedron")==0){
			total+=8;
		}

		else if(poly.compare("Dodecahedron")==0){
			total+=12;
		}

		else if(poly.compare("Icosahedron")==0){
			total+=20;
		}
	}

	cout<<total<<endl;
	return 0;
}