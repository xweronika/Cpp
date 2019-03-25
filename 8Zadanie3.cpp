/*Napisz program obliczaj¹cy pole powierzchni
prostopad³oœcianu.*/

#include<iostream>
using namespace std;


class pole{
	public:
	int a, b, c;

	int obliczpole(){
			cout<< "Podaj a";
	cin>>a;
			cout<< "Podaj b";
	cin>>b;
			cout<< "Podaj c";
	cin>>c;
		return a*b*c;
	}
};

main(){
	
	pole k;
	cout<<"Pole wynosi:"<< k.obliczpole();
}

/*
class prostopadloscian{
	public:
		int podst_a, podst_b,wys_c;
		
	int pole();
	
};

main(){
	
	prostopadloscian figura;
	cout <<"Pole wynosi: "<< figura.pole();
}

int prostopadloscian::pole(){
	cout << "Podaj krawedz podstawy: ";
	cin >> podst_a;
	cout << endl<<"Podaj druga krawedz podstawy: ";
	cin >> podst_b;
	cout <<endl<<"Podaj wysokosc: ";
	cin >> wys_c;
	
	
	return podst_a*podst_b*wys_c;
}
