/*programa: suma.cpp
autor: jasmany guagua
fecha: 24-11-2023
descripcion: suma dos numeros
*/
#include<iostream>
using namespace std;
float x,y,z;

int ingreso()
{
	cout<<"ingrese x:";cin>>x;
	cout<<"ingrese y:";cin>>y;
	return (0);

}

int salida()

{
	cout<<"la suma de "<<x<<"+"<<y<<"="<<z<< endl;
return (0);
}

int main()
{
	ingreso();
	z=x+y;
	salida();
	return (0);
}

