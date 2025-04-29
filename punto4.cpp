#include<iostream>
using namespace std;

int main(){
	int a[10];
	int max;
	int min;
	
	cout<<"Ingrese el numero: "<<endl;
	cin>>a[0];	
	cout<<"Ingrese otro numero: "<<endl;
	cin>>a[1];
	cout<<"Ingrese otro numero: "<<endl;
	cin>>a[2];
	cout<<"Ingrese otro numero: "<<endl;
	cin>>a[3];
	cout<<"Ingrese otro numero: "<<endl;
	cin>>a[4];
	cout<<"Ingrese otro numero: "<<endl;
	cin>>a[5];
	cout<<"Ingrese otro numero: "<<endl;
	cin>>a[6];
	cout<<"Ingrese otro numero: "<<endl;
	cin>>a[7];
	cout<<"Ingrese otro numero: "<<endl;
	cin>>a[8];
	cout<<"Ingrese otro numero: "<<endl;
	cin>>a[9];

	for(int i=0;i<10;i++){
		if(a[i]>max){
			max=a[i];	
		}
	    if(a[i]<min){
	    	
	    	min=a[i];
	    }	
		
	}
	cout<<"El numero mas grande es: "<<max<<endl;
	cout<<"El numero mas chico es: "<<min<<endl;		
}

