#include <iostream>

using namespace std;


int main()
{
	int nb;
	
	
	cout<<"entrez un nombre"<<endl;
	cin >> nb ;
	if( nb<0)
	{
		cout<<"c'est un nombre négatif"<<endl;
	}
	else
	{
		cout<<"c'est un nombre positif"<<endl;
	}
	
	return 0;
}

