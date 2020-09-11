#include <iostream>

using namespace std;


int main()
{
	int nb1;
	int nb2;
	
	cout<<"entrez un premier nombre"<<endl;
	cin >> nb1 ;
	cout<<"entrez un deuxieme nombre"<<endl;
	cin >> nb2 ;


	if(( nb1<0 && nb2>0)||( nb1>0 && nb2<0))
	{
		cout<<"c'est un produit négatif"<<endl;
	}
	else if(( nb1<0 && nb2<0)||( nb1>0 && nb2>0))
	{
		cout<<"c'est un produit positif"<<endl;
	}
	
	return 0;
}

