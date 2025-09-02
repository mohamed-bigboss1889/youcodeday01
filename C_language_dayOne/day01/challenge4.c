#include <stdio.h>
int main(){
    float km_s,m_s;
    printf("taper le vitess en km par Heure: ");
    scanf("%f",&km_s);
    m_s=km_s*0.27778;
    printf("la vitess en metre par second est : %f  M/s");
    return 0;

}