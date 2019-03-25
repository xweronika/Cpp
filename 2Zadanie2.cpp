/* Napisz program, który poprosi 
u¿ytkownika o trzykrotne wprowadzenie 
wyniku sprintu na 100m, a potem wypisze 
podane czasy wraz z obliczon¹ œredni¹. */

#include <iostream>
using namespace std;

int main(){
	
	int czas[3]={0};
	
	cout<<"Podaj wyniki sprintu:"<<endl;
	for (int i=0; i<3; i++){
		cin>>czas[i];
		cout<<czas[i]<<' ';
		}
	cout<<endl;
	
	double czasy=0.0;
	for(int k=0; k<3;k++){
		czasy=czasy+czas[k];
	}
	
	cout<<czasy/3;
}
	

	
