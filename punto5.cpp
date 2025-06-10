#include<iostream>
#include<Windows.h>
using namespace std;
int main(){
	float sum, prom;
	float a[5]={1.50, 1.85, 1.75, 1.66, 1.78};
	float b[5];
	float c[5];
	
	for(int i=0; i<5; i++){
		sum=sum+a[i];
		prom=sum/5;
	}
	
	cout<<"El Promedio es de: "<<prom<<endl;
	
	system("pause");
	system("cls");
	
	for(int j=0;j<5; j++){
		if(a[j]>prom){
		cin>>b[5];
		cout<<"La estatura mayor a la promedio es de: "<<b[5]<<endl;
		}
		if(a[j]<prom){
		cin>>c[5];
		cout<<"La estatura menor a la promedio es de: "<<c[5]<<endl;
		}
	}
}
