#ifndef __TAPIOCA_MILK_TEA_CONTENT_BASE_H
#define __TAPIOCA_MILK_TEA_CONTENT_BASE_H
#include <string>

class ContentBase{
protected:
    std::string name;
    float size;

public:
    virtual ~ContentBase(){}
};

#endif  //__TAPIOCA_MILK_TEA_CONTENT_BASE_H
