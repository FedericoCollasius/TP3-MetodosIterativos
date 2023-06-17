#include <Eigen/Dense>
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <cmath>

using namespace std;
using namespace Eigen;

// Funciones Auxiliares: 
MatrixXd strictlyLowerTriangularView(MatrixXd& M);
MatrixXd strictlyUpperTriangularView(MatrixXd& M);
float sumatoriaDeJ(MatrixXd& M, int i, VectorXd& xk);
float sumatoriaDeGS1(MatrixXd& M, int i, VectorXd& xk);
float sumatoriaDeGS2(MatrixXd& M, int i, VectorXd& xk1);


// Metodos Iterativos:
VectorXd jMat(MatrixXd& A, VectorXd& b, VectorXd& x0, int nIter);
VectorXd jSum(MatrixXd& A, VectorXd& b, VectorXd& x0, int nIter);
VectorXd gsMat(MatrixXd& A, VectorXd& b, VectorXd& x0, int nIter);
VectorXd gsSum(MatrixXd& A, VectorXd& b, VectorXd& x0, int nIter);




