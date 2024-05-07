/****************************************************
 * Programmer: Maramkhah, Shayon
 * 
 * Description: Find the sum of multiples 3 or 5 under 1000
 * 
 * 
 * 
*/
#include <stdio.h>

int main(void){
    unsigned int limit = 1000;
    const unsigned int M = 3;
    const unsigned int commonDifference= M;
    unsigned int n = (limit-1)/M;
    unsigned int an = commonDifference+(n-1)*commonDifference;
    unsigned int Sn= n*(M+an)/2;

    unsigned int nn= (limit -1)/5;
    const unsigned int W = 5;
    unsigned int commondiff= W;
    unsigned int ann = commondiff+(nn-1)*commondiff;
    unsigned int Sm= nn*(W+ann)/2;

    const unsigned int Z =15;
    unsigned int nnn= (limit-1)/Z;
    unsigned int comdif=Z;
    unsigned int annn= comdif+(nnn-1)*comdif;
    unsigned int Sz= nnn*(Z+annn)/2;

    unsigned int sum = Sn+Sm-Sz;
    printf("%u",sum);
}