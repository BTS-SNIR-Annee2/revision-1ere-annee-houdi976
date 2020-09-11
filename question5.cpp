#include <iostream>

using namespace std;


int main()
{
	float HT;
	int nbarticle;
	float TVA;
	float TTC;
	
	cout<<"entrez le prix ht"<<endl;
	cin>> HT ;
	cout<<"entrez le nb d'article"<<endl;
	cin>> nbarticle;
	cout<<"entrez le taux de TVA"<<endl;
	cin>> TVA ;
	TTC=HT+HT*(TVA/100);
	cout<< "le prix TTC pour un article de "<< TTC << "et le prix total TTC correspondant est de "<< TTC*nbarticle<< endl;
	
	return 0;
}

