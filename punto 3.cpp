#include<iostream>
#include<Windows.h>
using namespace std;
int main(){
	int A[5]={5,7,9,10,3};
	int multi, posicion;
	
	for(int i=0; i<5; i++){
		multi=A[i];
		multi=A[i]*2;
		cout<<multi<<endl;
	}
	system("pause");
	system("cls");
	
	cout<<"Elija la posicion q desee cambiar tiene 5 celdas: ";
	cin>>posicion;
	cout<<"Ingrese el valor por el que quiere cambiar: ";
	cin>>A[posicion-1];
	
	for(int j=0; j<5; j++){
		cout<<A[j]<<endl;
	}
	system("pause");
	system("cls");
	
	for(int k=0; k<5; k++){
		if(A[k]!=0){
			cout<<"En esta celda no se encuentra un 0"<<endl;
		}
	}
	return 0;
	
}
