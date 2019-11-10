#include <iostream>
#include <vector>

#include "cup.h"
#include "contents/tapioca.h"
#include "contents/gom_tire.h"
#include "contents/content_base.h"

int main() {
    Cup cup;
    Tapioca tapi(0.5);
    GomTire gom(0.5);
    ContentBase content("content", 0.5, 0.5);

    std::vector<ContentBase> contents;
    contents.push_back(tapi);
    contents.push_back(gom);
    contents.push_back(gom);

    for (auto& c: contents) {
        std::cout << c.Name() << std::endl;
        std::cout << c.Radius() << std::endl;
        std::cout << c.Weight() << std::endl;
        std::cout << c.Volume() << std::endl;
        std::cout << c.Density() << std::endl;
    }
}
