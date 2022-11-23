#include <stdio.h>
#include <math.h>

float dist(){
    float latA = 10,longA = 20;
    float latB = 15,LongB = 18;
    float distAB;
    distAB = sqrt(pow(latA - latB,2) + pow(longA - LongB,2));
    printf("%.2f",distAB);
}
    
int main(){
    dist();




    return 0;
}