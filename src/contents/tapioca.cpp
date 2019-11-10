#include "contents/tapioca.h"
#include <iostream>

Tapioca::Tapioca(float radius) : Tapioca(radius, Tapioca::default_density) {}

Tapioca::Tapioca(float radius, float density) : ContentBase(this->content_name, radius, density) {
}
