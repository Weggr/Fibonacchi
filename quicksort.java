import java.util.Scanner;

public class quicksort{
  public static void quicksort(int nombre[],int premier,int dernier){
    int i, j, pivot, temp;

    if(first<last){
        pivot=premier;
        i=premier;
        j=dernier;
        
        while(i<j){
          while(nombre[i]<=nombre[pivot]&&i<dernier)
          {
             i++;
          }
          while(nombre[j]>nombre[pivot])
          {
             j--;
          }
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

  public static void main(String[] args){
     int i;
     Scanner keyb = new Scanner (System.in);

     System.out.println("Combien d'élements allez vous rentrer?: ");
     int compteur = keyb.nextInt();
   
     int nombre[compteur];
  
     System.out.println("Entrez l'élement numéro " + compteur + " : ");
     for(i=0;i<compteur;i++)
     {
        nombre[i] = keyb.nextInt();
     }

     quicksort(nombre,0,compteur-1);

     System.out.println("Les éléments dans l'ordre: ");
     for(i=0;i<compteur;i++)
     {
       System.out.println(nombre[i]);
     }
  }
}  
