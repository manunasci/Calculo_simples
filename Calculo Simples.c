#include <stdio.h>

int main(){

int cp1, np1,cp2,np2;
double vp1, vp2, vp;

scanf("%i%i%lf", &cp1, &np1, &vp1);
scanf("%i%i%lf", &cp2, &np2, &vp2);

vp = (np1*vp1)+(np2*vp2);

printf("VALOR A PAGAR: R$ %.2lf\n", vp);

return 0;

}
