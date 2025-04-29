#include<iostream>
using namespace std;
int main(){
	int a[5]={2,5,4,8,6};
	int sum;
	float prom;
	for(int i=0; i<5;i++){
		sum=sum+a[i];		
	}
	prom=sum/5;
	cout<<"La suma es de: "<<sum<<endl;
	cout<<"El promedio es de: "<<prom;
}
