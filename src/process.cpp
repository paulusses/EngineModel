#include "process.h"

int EngineModel(data &engine, double temp, double a) {
  double dif = engine.maxT - temp;
  int t_sec = 0;
  int ind = 0;
  double engine_temp = temp;
  while (dif > 10e-6 && t_sec < 3600) {
    t_sec++;
    engine.V += a;
    if ((unsigned int)ind < engine.M1.size() - 2) {
      ind += engine.V < engine.M1[ind + 1] ? 0 : 1;
    }
    double up = engine.V - engine.V1[ind];
    double down = engine.V1[ind + 1] - engine.V1[ind];
    double factor = engine.M1[ind + 1] - engine.M1[ind];
    engine.M = up / down * factor + engine.M1[ind];
    engine_temp += engine.Vc(temp, engine_temp) + engine.Vh();
    a = engine.M * engine.I;
    dif = engine.maxT - engine_temp;
  }
  return t_sec;
}

void print_time(int time) {
  if (time > 3600) {
    std::cout << std::endl << "Превышено время работы двигателя" << std::endl;
  } else {
    std::cout << std::endl
              << "Время работы двигателя до перегрева " << time << " секунд"
              << std::endl;
  }
}