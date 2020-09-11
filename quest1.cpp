#include <iostream>

using namespace std;


int main()
{
	int A=5;
	int B=10;
	int C;
	cout<<"voici les valeur de A et B avant"<<endl;
	cout<< "A= "<< A << endl <<"B= "<< B<< endl;
	C=A;
	A=B;
	B=C;
	cout<<"voici les valeur de A et B après"<<endl;
	cout<< "A= "<< A << endl <<"B= "<< B<< endl;
	return 0;
}
	
