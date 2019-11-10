#ifndef __TAPIOCA_MILK_TEA_GOM_TIRE_BASE_H
#define __TAPIOCA_MILK_TEA_GOM_TIRE_BASE_H
#include <string>

#include "contents/content_base.h"

class GomTire : public ContentBase {
    using super = ContentBase;

public:
    static const inline std::string content_name = "gom_tire";
    static const inline float default_density = 0.93;

    GomTire(float radius);
    GomTire(float radius, float density);
    virtual ~GomTire(){};
};

#endif  //__TAPIOCA_MILK_TEA_GOM_TIRE_H
