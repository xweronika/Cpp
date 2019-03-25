/*Napisz program sortuj¹cy metod¹ b¹belkow¹
losowo wygenerowan¹ tablicê 20 elementow¹*/
//zle
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
 main(){
	
	srand( time( NULL ) );
	int tab [4];
	int x=1;
	int l2;
	int l1;
	int z = sizeof(tab)/sizeof(*tab);
	cout << sizeof(tab)/sizeof(*tab) <<endl;
	for(int i=0;i<z;i++){  //i<rozmiar tableli
		tab[i] = rand();
	}
	for(int a=0;a<z;a++)
		cout << tab[a] <<" || ";
		cout << endl;
	do{
	
	for(int y=0;y<z;y++){
	if (tab[y]>tab[y+1]){
		x = 0;
		l1=tab[y];
		l2=tab[y+1];
		tab[y]=l2;
		tab[y+1]=l1;
		x++;
		}

}
	}while(x!=0);
	
	for(int b=0;b<z;b++)
		cout << tab[b] <<" || ";
	

}
