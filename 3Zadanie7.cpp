/*Wy�wietl �adnie tabliczk� mno�enia (10x10) na
ekran. �adnie, to znaczy tak, aby
poszczeg�lne elementy by�y wyr�wnane do
prawej i zajmowa�y tyle samo.*/

#include<iostream>
using namespace std;

main(){
	
	int tab[10]={0};
	
	for(int w=1; w<10; w++){
		for(int k=1; k<10; k++){
		tab[w]=(w*k);
		cout<<tab[w];
		
		if (tab[w]<10)
		cout << "   " ;
		else
		cout <<"  ";
		
		}
	cout<<endl;
	}	
}
