/*William Wingate jest analitykiem pizzy. Dla ka�dej 
pizzy zapisuje nast�puj�ce informacje: 
-Nazw� firmy produkuj�c� pizz� (mo�liwe > ni� 1 s�owo) 
-�rednic� pizzy 
-Wag� pizzy Napisz program prosz�cy u�ytkownika o podanie 
tych danych, a nast�pnie wy�wietlaj�cy je. */

#include <iostream>
using namespace std; 
struct pizza
{
	string nazwa;
	double srednica;
	double waga;
};

int main(){
	pizza a;
	
	cout<<"Podaj nazwe:";
	getline(cin,a.nazwa);
	
	cout<<"Podaj srednice:";
	cin>>a.srednica;
	
	cout<<"Podaj wage:";
	cin>>a.waga;
	
	cout<<a.nazwa<<" "<<a.srednica<<" "<<a.waga;
}
	
