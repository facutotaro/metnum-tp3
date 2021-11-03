#include "cml.h"

using namespace std;

CML::CML() {}

Matrix CML::solve(Matrix A, Matrix y) {
  return (A.transpose()*A).ldlt().solve(A.transpose()*y);
}
