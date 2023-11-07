#include <stdio.h>
#include <stdlib.h>

void twoDecimalRounding(double num);
int main(){
    twoDecimalRounding(123.456789);
    twoDecimalRounding(123.500001);
    twoDecimalRounding(123.499999);
    return 0;
}

void twoDecimalRounding(double num){

    double round = num * 100 + 0.5;

    int convert= (int)round ;

    round = (double)convert / 100.0 ;

    printf("%lf\n", round);
}
