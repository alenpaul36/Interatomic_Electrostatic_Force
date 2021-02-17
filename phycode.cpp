#include <iostream>//Header file for I/O 
#include <math.h>// Header File for pow() to work
#include<iomanip>//Header File for setw()

using namespace std;

long double qtoc(double q)// A function to convert atomic charge to coulumb
{
	q = q * 1.9 * pow(10,-19);
  cout<<q<<"\n";
  return q;
}

double picotom(double r)// A function to convert Picometre to meter
{
  r=r*pow(10,-12);
  cout<<r<<"\n";
  return r;
}

void table();//Function Prototype for table()

int main()
{
  int charge1,charge2;
  double atomr1,atomr2;

	
  table();

  cout<<"Enter the Charge of 1st atom: ";
  cin>>charge1;
  charge1=abs(qtoc(charge1));//abs() used to get absolute value
  cout<<"Enter the Atomic Radius(enter in pm): ";cin>>atomr1;
  atomr1=picotom(atomr1);//Calling the function we declared at the top
  cout<<"Enter the Charge of the 2nd atom: ";cin>>charge2;
  charge2=abs(qtoc(charge2));//abs() used to get absolute value
  cout<<"Enter the Atomic Radius(enter in pm): ";cin>>atomr2;
  atomr2=picotom(atomr2);

  double bond_length=atomr1+atomr2;

  double coulumb_const=8.99*pow(10,9);//pow() is a function to perform exponent functions;

	 long double force=coulumb_const*((charge1*charge2)/pow(bond_length,2));
  
	cout<<"The force: "<<setprecision(20)<<force<<" N/C";
  
	return 0;
}

void table() 
{
	    
  cout<<"Calculating Interatomic Electrostatic force\v\nReference for Calculation\v\n";
  cout<<"Metallic Atoms\v\n";
  cout << setw(5) << "Atomic Names" << setw(15) << "Atomic Charge" << setw(15) << "Atomic Radius" << "\n" << "\n";
    cout << setw(5) << "Calcium" << setw(15) << "2C" << setw(13) << "231pm" << "\n";
    cout << setw(5) << "Aluminium" << setw(13) << "3C" << setw(13) << "143pm" << "\n";
    cout << setw(5) << "Magnesium" << setw(13) << "2C" << setw(13) << "173pm" << "\n";
    cout << setw(5) << "Lithium"<< setw(15) << "1C" << setw(13) << "182pm" << "\v\n";

    cout<<"Non Metallic Atoms\v\n";
  cout << setw(5) << "Atomic Names" << setw(15) << "Atomic Charge" << setw(15) << "Atomic Radius" << "\n" << "\n";
    cout << setw(5) << "Oxygen" << setw(15) << "-2C" << setw(12) << "53pm" << "\n";
    cout << setw(5) << "Carbon" << setw(15) << "-4C" << setw(15) << "91.4 pm" << "\n";
    cout << setw(5) << "Bromine" << setw(14) << "-1C" << setw(14) << "185 pm" << "\n";
    cout << setw(5) << "Fluorine"<< setw(13) << "-1C" << setw(14) << "147 pm" << "\v\n";
    
}

