#include <stdio.h>
int main() {

    float tab[]={2 ,5 ,6 ,9,4 ,3 ,5 ,10 ,6.5 ,-12 };
    float temp=0;
    int taille = sizeof(tab)/sizeof(tab[0]);
    int i=0,j=taille-1;
    printf("Tableau avant l'inversement \n");
    for(int k=0;k<taille;k++){
        printf("%.1f \t",tab[k]);
    }

    while(i<j){
        temp=tab[i];
        tab[i]=tab[j];
        tab[j]=temp;
        i++;j--;
    }

     printf("\nTableau apres l'inversement \n");
    for(int k=0;k<taille;k++){
        printf("%.1f \t",tab[k]);
    }


return 0;
}
