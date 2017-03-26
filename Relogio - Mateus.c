#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{
int h = 0, m = 0, s = 5;

int horas = 0, minutos = 0, segundos = -1, dias = 0, tempo = 5;

    printf("\t\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\n");
    printf("\t\333\t\t     RELOGIO\t\t\t\333\n\t\333\t\t\t\t\t\t\333\n");
    printf("\t\333 Escolha o alarme: (HH MM SS)\t\t\t\333\n"); //Aqui a pessoa é solicitada para digitar tres numeros separados
    printf("\t  ");
    scanf("%d %d %d",&h, &m, &s); //O compilador lê 3 numeros separados e coloca em tres variaveis

    printf("\t\333 Escolha o tempo do alarme: (segundos)\t\t\333\n");
    printf("\t  ");
    scanf("%d", &tempo);

    inicio:;
    system("cls");
    printf("\t\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\n");
    printf("\t\333\t\t     RELOGIO\t\t\t\333\n\t\333\t\t\t\t\t\t\333\n");

    while(1){
        segundos++;
        if (segundos >= 60) {
            segundos=0;
            minutos++;
        }
        if (minutos >= 60){
            minutos=0;
            horas++;
        }
        if(horas >= 24){
            horas=0;
            dias++;
        }

        printf("\r\t\333\t      %5dd:%2dh:%2dm:%2ds\t\t\333", dias, horas, minutos, segundos);

        if(h == horas && m == minutos && s == segundos){
            printf("\n\t\333\t\t\t\t\t\t\333\n\t\333           _____ ____  _____  _____\t\t\333\n\t\333     /\\   / ____/ __ \\|  __ \\|  __ \\   /\\\t\333\n\t\333    /  \\ | |   | |  | | |__) | |  | | /  \\\t\333\n\t\333   / /\\ \\| |   | |  | |  _  /| |  | |/ /\\ \\\t\333\n\t\333  / ____ \\ |___| |__| | | \\ \\| |__| / ____ \\\t\333\n\t\333 /_/    \\_\\_____\\____/|_|  \\_\\_____/_/    \\_\\\t\333\n");
            printf("\t\333\t\t\t\t\t\t\333\n\t\333");
            printf("\r\t\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\n");
            Sleep(tempo*1000);
            segundos = segundos + tempo - 1;
            if(tempo+s >= 60){
                segundos = segundos % 60;
                minutos = minutos +(tempo+s)/60;
            }
            goto inicio;

        }

        Sleep(1000);

    }
    return 0;
}
