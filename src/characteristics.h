#include <iostream>
#include <vector>
struct data {
  double I = 0.1;
  double maxT = 110;
  double Hm = 0.01;
  double Hv = 0.00001;
  double C = 0.1;
  std::vector<int> M1 = {20, 75, 100, 105, 75, 0};
  std::vector<int> V1 = {0, 75, 150, 200, 250, 300};
  double M = 0;
  double V = 0;
  double Vc(double TempEng, double TempAir); // скорость охлаждения двигателя
  double Vh();                               // скорость нагрева двигателя
};

void init(data &enginie, double &temp, double &a);
void Temp(double &temp);