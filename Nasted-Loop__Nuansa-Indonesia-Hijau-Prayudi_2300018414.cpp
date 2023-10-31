#include <iostream>
using namespace std;
int main(){
	int M, N;
	cout<<"Masukan Kolom : ";
	cin>>M;
	cout<<"Masukan baris : ";
	cin>>N;
	system("CLS");
	cout<<" _  _  _"<<endl;
	for(int L = 1; L <= M; L++){
		for(int M = 1; M <= N; M++){
		cout<<"|_|";
	}
	cout<<""<<endl;
	
	}
	
return 0;
}
