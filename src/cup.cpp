#include "cup.h"
#include <cmath>

float Cup::Height() {
    return height;
}

float Cup::Bottom() {
    return bottom;
}

float Cup::Top() {
    return top;
}

float Cup::Volume() {
    return (1/3)*M_PI*height*(top*top+top*bottom+bottom*bottom);
}
