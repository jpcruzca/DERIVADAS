#include<iostream>
#include<cmath>
#include<cstdio>
double fdev(double x, double h);
double fdevforward(double x, double h);
double fdevcentral(double x, double h);
double fdevricardcentral(double x, double h);

int main(void)
{
  double x=M_PI/3;
  double h=0.1;
  std::cout<< std::cos(x)<<std::endl;
  std::printf("%25.16e\n", fdevcentral(x,h));
  std::printf("%25.16e\n", fdevricardcentral(x,h));
  std::printf("%25.16e\n", fdev(x,h));
  return 0;
}
double fdevcentral(double x, double h)
{
  return (std::sin(x+h/2)-std::sin(x-h/2))/h;
}
double fdev(double x, double h)
{
  return (std::sin(x+h)-std::sin(x))/h;
}
double fdevricardcentral(double x, double h)
{
  double h2=h/2;
  double R2= fdevcentral(x,h2);
  double R1= fdevcentral(x,h);
  return (4*R2-R1)/3;
  
}
