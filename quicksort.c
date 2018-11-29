#include<stdio.h>
void quicksort(int *nombre,int premier,int dernier){
   int i, j, pivot, temp;

   if(first<last){
      pivot=premier;
      i=premier;
      j=dernier;

      while(i<j){
         while(nombre[i]<=nombre[pivot]&&i<dernier)
            i++;
         while(nombre[j]>nombre[pivot])
            j--;
         if(i<j){
            temp=nombre[i];
            nombre[i]=nombre[j];
            nombre[j]=temp;
         }
      }

      temp=nombre[pivot];
      nombre[pivot]=nombre[j];
      nombre[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main(){
   int i, compteur;

   printf("Combien d'élements allez vous rentrer?: ");
   scanf("%d",&compteur);
   
   int nombre[compteur];
  
   printf("Entrez l'élement numéro %d : ", compteur);
   for(i=0;i<compteur;i++)
      scanf("%d",&nombre[i]);

   quicksort(nombre,0,compteur-1);

   printf("Les éléments dans l'ordre: ");
   for(i=0;i<compteur;i++)
      printf(" %d",nombre[i]);

   return 0;
}
