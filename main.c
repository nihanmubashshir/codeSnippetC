#include <stdio.h>
#include <math.h>

void main(){
    
    float total,attended;
    printf("total class: ");
    scanf("%f",&total);
    printf("total class you attended: ");
    scanf("%f",&attended);

    float percentage = (attended/total)*100;

    int lostMarks = ceil((90-percentage)/5);

    printf("Your marks should be: %d",30 - lostMarks*3);

}
