#include "contents/content_base.h"

ContentBase::ContentBase(std::string name) : name(name) {}

float ContentBase::GetWeight() {
    return weight;
}
float ContentBase::GetRadius() {
    return radius;
}
