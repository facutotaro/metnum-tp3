#pragma once

#include "types.h"

class CML {
public:
    CML();
    Matrix solve(Matrix A, Matrix y);
};
