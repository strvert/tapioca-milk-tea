#include <iostream>

#include "cup.h"
#include "contents/tapioca.h"

int main() {
    Cup cup;
    Tapioca tapi(0.5);

    std::cout << tapi.Name() << std::endl;
    std::cout << tapi.Radius() << std::endl;
    std::cout << tapi.Weight() << std::endl;
    std::cout << tapi.Volume() << std::endl;
    std::cout << tapi.Density() << std::endl;
}
