#include<iostream>
#include<cmath>
using namespace std;
double derv(double x, double h);
double dervcentral(double x, double h);
double dervcentralrich(double x, double h);
double error(double x, double h);
double error2(double x, double h);
double error3(double x, double h);
int main()
{
  double x=M_PI, h=0.0000001;
  cout.precision(18);
  cout.setf(ios::scientific);
  // cout<< "con este programa usted puede ver \n la diferencia al cambial los ordenes de magnitude la h en la derivada de una funcion, de 0.1 a 0.00001. \n";
  cout<< derv(x, h)<< "\tderivada normal\t" <<h<<endl;
  cout<<"error" << error(x,h)<< "\t\t" <<h<<endl;
  cout<< derv(x, h)<< "\tderivada central\t" <<h<<endl;
  cout<< "error " << error2(x,h)<< "\t\t" <<h<<endl;
  cout<< dervcentralrich(x, h)<< "\tderivada RICHARDSON\t" <<h<<endl;
  cout<< "error "<<  error3(x,h)<< "\t\t" <<h<<endl;
  /*for (h=0.1; h>=0.001; (h/10.0)){
    cout<< derv(x, h)<< "\t\t" <<h<<endl;
    }*/
    
  
}
double derv(double x, double h)
{
  return (sin(x+h)-sin(x))/h;
}
double error(double x, double h)
{
  return abs( cos(x)-derv(x,h));
}
double error2(double x, double h)
{
  return abs( cos(x)-dervcentral(x,h));
}
double error3(double x, double h)
{
  return abs( cos(x)-dervcentralrich(x,h));
}

double dervcentral(double x, double h)
{
  return ((sin(x+h/2)-sin(x-h/2))/h);
}
  double dervcentralrich(double x, double h)
{
  double h2=h/2;
  double R2= dervcentral(x,h2);
  double R1= dervcentral(x,h);
  return (4*R2-R1)/3;
}
