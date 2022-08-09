#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tab[13],tab2[15];
    float min,max;
    int i;
//classe 1
    printf("saisir les note des etudiant :\n");
    for(i=0;i<13;i++){
     printf("entrer la note min%d\n",i+1);
     scanf("%f",&tab[i]);
    }
    min=tab[0];
    for(i=1;i<13;i++){
        if(min>tab[i]){
            min=tab[i];
        }
    }
    printf ("la petite note est :%f\n",min);
    max=tab[0];
     for(i=1;i<13;i++){
        if(max<tab[i]){
            max=tab[i];
        }
    }
    printf("la grande note est:%f\n",max);
    for(i=1;i<13;i++){
            if(tab[i]>=10){
                     printf("le nombre des note superieur ou egale a 10 est:%f\n",tab[i]);


    }

}
//classe 2
 printf("saisir les note des etudiant :\n");
    for(i=0;i<15;i++){
     printf("entrer la note min%d\n",i+1);
     scanf("%f",&tab2[i]);
    }
    min=tab2[0];
    for(i=1;i<13;i++){
        if(min>tab2[i]){
            min=tab2[i];
        }
    }
    printf ("la petite note est :%f\n",min);
    max=tab2[0];
     for(i=1;i<13;i++){
        if(max<tab2[i]){
            max=tab2[i];
        }
    }
    printf("la grande note est:%f\n",max);
    for(i=1;i<13;i++){
            if(tab2[i]>=10){
                     printf("le nombre des note superieur ou egale a 10 est:%f\n",tab2[i]);


    }

}

    return 0;
}
