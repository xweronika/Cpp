/*Napisz program wyznaczaj�cy sum� n
pocz�tkowych liczb podzielnych przez 7.
Liczb� n nale�y pobra� od u�ytkownika.*/

#include<iostream>
using namespace std;

main(){
	int s=0, n, k=1;
	cout<<"Podaj liczbe: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		if(k%7==0 && k>6)
		s=s+i;
		k++;

	}
	cout<<endl<<s;
	
}
