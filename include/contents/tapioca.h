#ifndef __TAPIOCA_MILK_TEA_TAPIOCA_H
#define __TAPIOCA_MILK_TEA_TAPIOCA_H
#include <string>

#include "contents/content_base.h"

class Tapioca : public ContentBase {
public:
    Tapioca(std::string name);
    virtual ~Tapioca(){};
};

#endif  //__TAPIOCA_MILK_TEA_TAPIOCA_H
