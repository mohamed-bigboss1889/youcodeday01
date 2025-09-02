#include <stdio.h>
int main(){
    float temperature_c;
    printf("taper temperatuer en c°: ");
    scanf("%f",&temperature_c);
    if(temperature_c<0){
        printf("l'eau est en etat de  solide");
    }else if(temperature_c<100){
        printf("l'eau est en etat l'iquide");
    }
    else{
        printf("l'eau est en etat de gaz");
    }
    return 0;
}