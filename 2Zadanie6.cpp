/*Kr�lestwo Naturlandii, gdzie jednostk� monetarn� jest twarp, stosuje nast�puj�c� skal� podatkow�:
pierwszy 5000 twarp�w: 0% podatku
nast�pne 10 000 twarp�w: 10% podatku
nast�pne 20 000 twarp�w: 15% podatku
doch�d powy�ej 35 000 twarp�w: 20 % podatku
Napisz program, kt�ry wyliczy nale�no�� podatkow�, program powinien przerwa� dzia�anie je�eli liczba b�dzie ujemna.*/

#include<iostream>
using namespace std;

main(){
	int d;
	do{
	
	cout<<"Podaj dochod:"<<endl;
	cin>>d;
		
	if(0<d && d<10000)
		cout<<"Naleznosc podatkowa: "<<0<<endl;
	
		
	if(10000<=d && d<20000)
		cout<<"Naleznosc podatkowa: "<<(d*0.1)<<endl;
	
		
	if(20000<=d && d<35000)
		cout<<"Naleznosc podatkowa: "<<d*0.15<<endl;
		
		
	if(d>=35000)
		cout<<"Naleznosc podatkowa: "<<d*0.2<<endl;	
	
	
}while(d>0);
	
}
