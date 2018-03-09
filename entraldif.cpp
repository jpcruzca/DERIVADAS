#include<iostream>
#include<cmath>
#include<cstdio>
double fdev(double x, double h);
double fdevcentral(double x, double h);
int main(void)
{
  double x=M_PI/3;
  double h=0.1;
  std::cout<< std::cos(x)<<std::endl;
  std::printf("%25.16e\n", fdevcentral(x,h));
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
