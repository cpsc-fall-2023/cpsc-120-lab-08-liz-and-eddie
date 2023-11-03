// Lizbeth Aguilar
// laguilar720@csu.fullerton.edu
// @lizz-720
// Partners: @Eddie1010100

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments./n";
    return 1;
  }

  std::string protein = {arguments.at(1)};
  std::string bread = {arguments.at(2)};
  std::string condiment = {arguments.at(3)};

  std::cout << "Your order: ";
  std::cout << " A " << protein << " sandwich on " << bread << " with "
            << condiment << ".";
  return 0;
}