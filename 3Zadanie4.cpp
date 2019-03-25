/*Gra w Za du¿o, za ma³o czyli w odgadywanie
liczby wylosowanej przez komputer*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

main(){
	srand( time ( NULL  ) );
	int y;
	int x =  rand()%20; 
	
	do{
		cout<<"Podaj liczbe: ";
		cin>>y;
		
		if(y<x)  
		cout<<"Za malo"<<endl;
				
		if(y>x)  
		cout<<"Za duzo"<<endl;		
				
	}while (y!=x);
	
	cout<<"Udalo ci sie!";
}
