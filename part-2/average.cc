// Jaime Torres
// torresjaimejr9@csu.fullerton.edu
// @Nutella310
// Partners: @TuffyTitan

#include <iostream>
#include <string>
#include <vector>


int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if(arguments.size() < 2){
    std::cout << "error: you must supply at least one number\n";  
    return 1;
  }


  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  
  bool isFirst{true};
  float sum = 0;
  for(std::string& argument : arguments){
    if(isFirst){
      isFirst = false;
      continue;
    }

    float cont = std::stof(argument);
    sum = sum + cont;
  }

  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  float ammount = arguments.size() - 1;
  std::cout << "average = " << sum / ammount << '\n';
  return 0;
}
