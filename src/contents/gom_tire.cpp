#include "contents/gom_tire.h"

#include <iostream>

GomTire::GomTire(float radius) : GomTire(radius, GomTire::default_density) {}

GomTire::GomTire(float radius, float density) : ContentBase(content_name, radius, density) {}
