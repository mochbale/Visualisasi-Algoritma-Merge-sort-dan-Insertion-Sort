#include <iostream>
using namespace std;

int main(){

	int y;
	cout<<"Program ini Implementasi Insertion Sort\n";
	cout<<"Masukan banyaknya array yang akan diurutkan:";
	cin>>y;
	int x[y];
	for(int i=0; i<y; i++){
		cout<<"Masukan angka ke "<<i<<" :";
		cin>>x[i];
		cout<<endl;
	}
	for(int i=1; i<y; i++){
		int key = x[i];
		int j = i-1;
		while(j>=0 && x[j] > key){
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = key;
		cout<<"Proses Sorting"<<endl;
		for(int z=0;z<y;z++){
		cout<<x[z]<<" ";
	    }
	    cout<<endl;
	}
	cout<<"hasil sorting secara Ascending"<<endl;
	for(int z=0; z<y; z++){
		cout<<x[z]<<" ";
	}

}

