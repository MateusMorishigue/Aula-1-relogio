#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int running = 1;
    int h=0, m=0, s=-1, ha=0, ma=0, sa=0, i;
    char in;
    printf("\n\tALARME\n\n");
    printf("\n\tDigite a hora que quer acordar: (HH MM SS) \n\n\t");
    scanf("%d %d %d",&ha,&ma,&sa);

    while(running == 1){
        s++;
        if(s>=60){
            s=0;
            m++;
        }
        if(m>=60){
            m=0;
            h++;
        }
        if(h>=60){
            h=0;
        }
        printf("\r\tRelogio: %2dh:%2dm:%2ds",h,m,s);
        if(s==sa && m==ma && h==ha){
            for(i=0;i<40;i++){
                printf("\n\tACORDA!!!");
                Sleep(1000);
            }
            return 0;
        }
        Sleep(1000);
    }
    return 0;
}
