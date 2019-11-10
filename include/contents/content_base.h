#ifndef __TAPIOCA_MILK_TEA_CONTENT_BASE_H
#define __TAPIOCA_MILK_TEA_CONTENT_BASE_H
#include <string>

class ContentBase {
protected:
    std::string name;
    float radius; /* cm */
    float density; /* g/cm^3 */
    bool edible;

public:
    ContentBase(std::string name, float radius, float density);
    virtual ~ContentBase() {}

    virtual std::string Name();
    virtual float Weight();
    virtual float Volume();
    virtual float Density();
    virtual float Radius();
};

#endif  //__TAPIOCA_MILK_TEA_CONTENT_BASE_H
