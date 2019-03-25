/*William Wingate jest analitykiem pizzy. Dla ka¿dej 
pizzy zapisuje nastêpuj¹ce informacje: 
-Nazwê firmy produkuj¹c¹ pizzê (mo¿liwe > ni¿ 1 s³owo) 
-Œrednicê pizzy 
-Wagê pizzy Napisz program prosz¹cy u¿ytkownika o podanie 
tych danych, a nastêpnie wyœwietlaj¹cy je. */

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
	
