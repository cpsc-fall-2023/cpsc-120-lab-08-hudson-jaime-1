// Jaime Torres
// torresjaimejr9@csu.fullerton.edu
// @Nutella310
// Partners: @TuffyTitan

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  bool isFirst{true};
  float sum = 0;
  for (std::string& argument : arguments) {
    if (isFirst) {
      isFirst = false;
      continue;
    }

    float cont = std::stof(argument);
    sum = sum + cont;
  }

  float ammount = arguments.size() - 1;
  std::cout << "average = " << sum / ammount << '\n';
  return 0;
}
