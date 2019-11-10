#ifndef __TAPIOCA_MILK_TEA_TAPIOCA_H
#define __TAPIOCA_MILK_TEA_TAPIOCA_H
#include <string>

#include "contents/content_base.h"

class Tapioca : public ContentBase {
    using super = ContentBase;

public:
    static const inline std::string content_name = "tapioca";
    static const inline float default_density = 0.5;

    Tapioca(float radius);
    Tapioca(float radius, float density);
    virtual ~Tapioca(){};
};

#endif  //__TAPIOCA_MILK_TEA_TAPIOCA_H
