#ifndef __TAPIOCA_MILK_TEA_CONTENT_BASE_H
#define __TAPIOCA_MILK_TEA_CONTENT_BASE_H
#include <string>

class ContentBase {
protected:
    std::string name;
    float radius;
    float weight;

public:
    ContentBase(std::string name);
    virtual ~ContentBase() {}

    virtual float GetWeight();
    virtual float GetRadius();
};

#endif  //__TAPIOCA_MILK_TEA_CONTENT_BASE_H
