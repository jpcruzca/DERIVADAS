#include<iostream>
#include<cmath>
using namespace std;
double derv(double x, float h);
int main()
{
  double x;
  cout.precision(18);
  cout.setf(ios::scientific);
  float h=1;
  cout << 0.1 << "\t"<< derv(x,0.1)<< endl;
  cout << 0.01 << "\t"<< derv(x,0.01)<< endl;
  cout << 0.001 << "\t"<< derv(x,0.001)<< endl;
  cout << 0.0001 << "\t"<< derv(x,0.0001)<< endl;
  cout << 0.00001 << "\t"<< derv(x,0.00001)<< endl;
  cout << 0.000001 << "\t"<< derv(x,0.000001)<< endl;
  
  
}

double derv(double x, float h)
{
  return (sin(x+h)-sin(x))/h;
}
