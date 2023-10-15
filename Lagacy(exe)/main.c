#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int a=0;
int b=0;
int i=0;
int e=0;
int c=3;
char eingabe [548];
FILE* dateiread;
FILE* dateiwrite;

int main(){

    while(a<3){
        if(a==0){
            dateiread = fopen("rawmac.txt","rt");
            dateiwrite = fopen("mac.txt","w+");
            b=17;
        }

        if(a==1){
            dateiread = fopen("rawblob.txt","rt");
            dateiwrite = fopen("blob.txt","w+");
            b=511;
            c=2;
        }

        if(a==2){
            dateiread = fopen("rawkey.txt","rt");
            dateiwrite = fopen("key.txt","w+");
            b=31;
            c=2;
        }

        if (dateiread==NULL){
            printf("Die Datei konnte nicht geoffnet werden\n");
            system("PAUSE");
            return 1;
        }

        fgets (eingabe,sizeof(eingabe),dateiread);
        //printf("%s\n",eingabe);
        while (i <= b){
            if(i<b-c){
                printf("0x%c%c,",eingabe[i],eingabe[i+1]);
                fprintf(dateiwrite,"0x%c%c,",eingabe[i],eingabe[i+1]);
            }

            else{
                printf("0x%c%c",eingabe[i],eingabe[i+1]);
                fprintf(dateiwrite,"0x%c%c",eingabe[i],eingabe[i+1]);
            }

            i=i+c;
        }

        i=0;
        a++;
        fclose(dateiread);
        fclose(dateiwrite);
        printf("\n");
    }
    return 1;
}


