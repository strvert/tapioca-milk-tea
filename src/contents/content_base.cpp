#include "contents/content_base.h"

#include <cmath>

ContentBase::ContentBase(std::string name, float radius, float density)
    : name(name), radius(radius), density(density) {}

std::string ContentBase::Name() {
    return name;
}

float ContentBase::Weight() {
    return Volume() * Density();
}
float ContentBase::Volume() {
    return (4 / 3) * M_PI * radius * radius * radius;
}
float ContentBase::Density() {
    return density;
}
float ContentBase::Radius() {
    return radius;
}
