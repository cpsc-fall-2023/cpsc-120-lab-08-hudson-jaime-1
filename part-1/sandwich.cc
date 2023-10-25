// Jaime Torres
// torresjaimejr9@csu.fullerton.edu
// @Nutella310
// Partners: @TuffyTitan

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }

  std::string protein(arguments.at(1));
  std::string bread(arguments.at(2));
  std::string condiment(arguments.at(3));

  std::cout << "Protein: " << protein << "\n";
  std::cout << "Bread: " << bread << "\n";
  std::cout << "Condiment: " << condiment << "\n";
  std::cout << "Your order: A ";
  std::cout << protein;
  std::cout << " sandwich on ";
  std::cout << bread;
  std::cout << " with ";
  std::cout << condiment;
  std::cout << "\n";

  return 0;
}
