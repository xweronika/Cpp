/*Królestwo Naturlandii, gdzie jednostk¹ monetarn¹ jest twarp, stosuje nastêpuj¹c¹ skalê podatkow¹:
pierwszy 5000 twarpów: 0% podatku
nastêpne 10 000 twarpów: 10% podatku
nastêpne 20 000 twarpów: 15% podatku
dochód powy¿ej 35 000 twarpów: 20 % podatku
Napisz program, który wyliczy nale¿noœæ podatkow¹, program powinien przerwaæ dzia³anie je¿eli liczba bêdzie ujemna.*/

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
