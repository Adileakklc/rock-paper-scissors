#include <stdio.h>
#include <stdlib.h>

int karsilastir(char oyuncu, char bilgisayar){
    printf("Bilgisayarin secimi: %c\n",bilgisayar);
    if(oyuncu==bilgisayar)
        return 2;
    if(oyuncu=='k' && bilgisayar=='t')
        return 1;
    if(oyuncu=='t' && bilgisayar=='m')
        return 1;
    if(oyuncu=='m' && bilgisayar=='k')
        return 1;
    if(oyuncu=='t' && bilgisayar =='k')
        return 0;
    if(oyuncu=='m' && bilgisayar=='t')
        return 0;
    if(oyuncu=='k' && bilgisayar=='m')
        return 0;

   }

int main()
{
    char dizi[3]={'t','k','m'};
    int p_oyuncu=0;
    int p_bot=0;
    char secim;
    int tahmin;
    while(1){
        printf("Bir secim yapiniz(Tas:t,Kagit:k,Makas:m):\n");
        scanf(" %c",&secim);
        srand(time(NULL));
        tahmin=rand()%3;
        int sonuc=karsilastir(secim,dizi[tahmin]);
        if(sonuc==0){
            p_bot++;}
        if(sonuc==1){
            p_oyuncu++;}
        if(sonuc==2){
            printf("Berabere!\n");}
        printf("%d-%d\n",p_oyuncu,p_bot);
        if(p_oyuncu==5 || p_bot==5)
            break;
    }
    if(p_oyuncu>p_bot){
        printf("%d-%d Skorla Sen Kazandin",p_oyuncu,p_bot);
    }
    else
        printf("%d-%d Skorla Bilgisayar kazandi",p_oyuncu,p_bot);

}
