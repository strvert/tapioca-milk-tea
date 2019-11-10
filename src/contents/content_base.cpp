#include "contents/content_base.h"

#include <cmath>

ContentBase::ContentBase(std::string name) : name(name) {}

float ContentBase::GetWeight() {
    return GetVolume() * GetDensity();
}
float ContentBase::GetVolume() {
    return (4 / 3)*M_PI*radius*radius*radius;
}
float ContentBase::GetDensity() {
    return density;
}
float ContentBase::GetRadius() {
    return radius;
}
