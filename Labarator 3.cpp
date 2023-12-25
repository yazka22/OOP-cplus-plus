#include <iostream>
#include <math.h>

using namespace std;

class Complex
{
	int Re;
	int Im;
public:
	void citireComplex();
	void afisareComplex();
	void sumaComplex(Complex, Complex);
	void diferentaComplex(Complex, Complex);
	void produsComplex(Complex, Complex);
	void impartireComplex(Complex, Complex);
	void initializare(int, int);
	void setRe(int);
	int getRe();
	void setIm(int);
	int getIm();

	Complex(int a, int b);//constructor implicit
	Complex(){};//constructor vid
	Complex(const Complex & z);//constructor copiere
};

void Complex::setRe(int x)
{
	Re=x;
}

int Complex::getRe()
{
	return Re;
}

void Complex::setIm(int x)
{
	Im=x;
}

int Complex::getIm()
{
	return Im;
}

void Complex::citireComplex()
{
	cout<<"Introduceti partea reala: ";
	cin>>Re;
	cout<<"Introduceti partea imaginara: ";
	cin>>Im;
}

void Complex::afisareComplex()
{
	cout<<Re<<"+"<<Im<<"i"<<endl;
}

void Complex::sumaComplex(Complex z1, Complex z2)
{
	Re=z1.Re+z2.Re;
	Im=z1.Im+z2.Im;
}

void Complex::diferentaComplex(Complex z1, Complex z2)
{
	Re=z1.Re-z2.Re;
	Im=z1.Im-z2.Im;
}

void Complex::produsComplex(Complex z1, Complex z2)
{
	Re=z1.Re*z2.Re-z1.Im*z2.Im;
	Im=z1.Re*z2.Im+z1.Im*z2.Re;
}

void Complex::impartireComplex(Complex z1, Complex z2)
{
	int a1, a2, b1, b2;
	a1=z1.Re;
	a2=z2.Re;
	b1=z1.Im;
	b2=z2.Im;
	Re=(a1*a2+b1*b2)/(a2*a2+b2*b2);
	Im=(a2*b1-a1*b2)/(a2*a2+b2*b2);
}

Complex::Complex (int a, int b=0)
{
	Re=a;
	Im=b;
}//constructor cu parametri impliciti


Complex::Complex(const Complex & z)
{
	Re=z.Re;
	Im=z.Im;
}//constructor copiere

int main()
{
	//Complex z, z1, z2, sum, dif, prod, imp, mod;
	/*z1.citireComplex();
	z2.citireComplex();
	cout<<"Numerele complexe sunt: ";
	z1.afisareComplex();
	cout<<" si ";
	z2.afisareComplex();
	cout<<endl;
	cout<<"\nSuma celor 2 nr complexe este: ";
	sum.sumaComplex(z1, z2);
	sum.afisareComplex();
	cout<<"\nDiferenta celor 2 nr complexe este: ";
	dif.diferentaComplex(z1, z2);
	dif.afisareComplex();
	cout<<"\nProdusul celor 2 nr complexe este: ";
	prod.produsComplex(z1, z2);
	prod.afisareComplex();
	cout<<"\nRezultatul impartii celor 2 nr complexe este: ";
	imp.impartireComplex(z1, z2);
	imp.afisareComplex();
	*/


    //Complex z1();
	Complex z(3);

	z.afisareComplex();
	Complex z1(4,5);
	z1.afisareComplex();
	Complex z3(z);
	z3.afisareComplex();
			return 0;

}
