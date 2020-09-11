#include <iostream>

using namespace std;


int main()
{
	int A=5;
	int B=10;
	int C=15;
	int D;
	cout<<"voici les valeur de A, B et C avant"<<endl;
	cout<< "A= "<< A << endl <<"B= "<< B<< endl <<"C= "<< C<< endl;
	D=A;
	A=C;
	C=B;
	B=D;
	cout<<"voici les valeur de A, B et C apres"<<endl;
	cout<< "A= "<< A << endl <<"B= "<< B<< endl <<"C= "<< C<< endl;
	return 0;
}
	
