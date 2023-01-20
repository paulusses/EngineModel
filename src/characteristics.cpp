#include "characteristics.h"

double data::Vc(double TempEng, double TempAir) {
  return C * (TempAir - TempEng);
}

double data::Vh() { return M * Hm + V * V * Hv; }

void init(data &enginie, double &temp, double &a) {
  enginie.V = enginie.V1[0];
  enginie.M = enginie.M1[0];
  a = enginie.M * enginie.I;
  Temp(temp);
}

void Temp(double &temp) {
  std::cout << "Введите температуру окружающей среды в градусах C: ";
  std::cin >> temp;
}