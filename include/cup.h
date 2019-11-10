#ifndef __TAPIOCA_MILK_TEA_CUP_H
#define __TAPIOCA_MILK_TEA_CUP_H
#include <string>
#include <vector>

#include "contents/content_base.h"
#include "straw.h"

class Cup {
private:
    float height;
    float bottom;
    float top;
    std::vector<ContentBase> contents;

public:
    float Height();
    float Bottom();
    float Top();
    float Volume();

};

#endif  //__TAPIOCA_MILK_TEA_CUP_H
