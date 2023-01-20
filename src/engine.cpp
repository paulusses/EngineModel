#include "process.h"

int main() {
  setlocale(LC_ALL, "Russian");
  data enginie;
  double a = 0;
  double temp = 0;
  init(enginie, temp, a);
  int time = EngineModel(enginie, temp, a);
  print_time(time);
  return 0;
}
