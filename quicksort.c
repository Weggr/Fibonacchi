#include<stdio.h>
void quicksort(int *nombre,int premier,int dernier){
   int i, j, pivot, temp;

   if(premier<dernier){
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
      quicksort(nombre,premier,j-1);
      quicksort(nombre,j+1,dernier);

   }
}

int main(){
   int i, compteur;

   printf("Combien d'élements allez vous rentrer?: ");
   scanf("%d",&compteur);
   
   int nombre[compteur];
  
   
   for(i=0;i<compteur;i++)
   {
      printf("Entrez l'élement numéro %d : ", i+1);
      scanf("%d",&nombre[i]);
   }

   quicksort(nombre,0,compteur-1);

   printf("Les éléments dans l'ordre: ");
   for(i=0;i<compteur;i++)
      printf(" %d",nombre[i]);

   return 0;
}
