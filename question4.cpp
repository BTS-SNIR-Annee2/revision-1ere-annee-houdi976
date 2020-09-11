#include <iostream>

using namespace std;


int main()
{
	char nom[20];
	
	cout<<"quel est votre nom ? "<<endl;
	cin.getline(nom,20);

	cout<< "Bonjour, "<< nom << endl;
	return 0;
}

