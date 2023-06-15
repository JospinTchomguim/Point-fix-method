#include <stdio>
#include <math.h>

double g(double x){
    return
}

int main(){
    double x0, x, tol;
    int max_iter, iter;
    x0 =/¤ valeur initiale ¤/
    tol=/¤ tolerence ¤/
    x=x0;
    for (iter =0; iter< max_iter; iter++){
        x=g(x);
        if(fabs(x - g(x))< tol){
            printf("la solution est :", x0)
            return 0
        }

    }

    printf("la methode n'a pas convergé.\n");
    return 1;
}