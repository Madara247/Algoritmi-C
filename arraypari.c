/*

  TESTO
  =====
  Acquisire un vettore di interi 'vett' e verificare che contenga un
  numero di epelemti pari. Creare un nuovo array i cui elementi sono
  la ripetizione degli elementi di posizione dispari di 'vett' per un
  numero di volte pari agli elementi di posizione pari di 'vett'.
 
  ESEMPIO INPUT/OUTPUT
  ====================
  Dimensione del vettore da acquisire: 7
  Dimensione del vettore da acquisire: 6
  Inserisci un valore intero: 4
  Inserisci un valore intero: 2
  Inserisci un valore intero: 3
  Inserisci un valore intero: 0
  Inserisci un valore intero: 5
  Inserisci un valore intero: 1
  vet_in:  4, 2, 3, 0, 5, 1, 
  vet_out: 2, 2, 2, 2, 0, 0, 0, 1, 1, 1, 1, 1, 

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
 * La funzione Acquisisci acquisisce un vettore di 'dim' interi e lo
 * restituisce.
 */
int* Acquisisci(int dim)
{
  int *vettore;
    
  vettore =(int*)malloc(dim * sizeof(int));
  if (vettore != NULL)
    {
      for (int i = 0; i < dim; i++)
	{
	  printf("Inserisci un valore intero: ");
	  scanf("%d", &vettore[i]);
	}
    }
  return vettore;
}

/*
 * La funzione RunLengthDecoding preso in ingresso un array 'vin' di
 * 'n' interi restituisce un array i cui elementi sono la ripetizione
 * degli elementi di posizione dispari di 'vin' per un numero di volte
 * pari agli elementi di posizione pari di 'vin'
 */
int *RunLengthDecoding(int* vin, int n, int* nout)
{
  // Lo sviluppo di questa funzione � a cura dello studente
  int* vett;
  int i;
  int dim=0;
  int c=0;
  for(int i=0;i<n;i++){
    if(i%2==0){
      dim=dim+1*(vin[i]);
      
    }
  }
  dim=*nout;
  vett=(int*)malloc(dim*sizeof(dim));
  for(int i=0;i<dim;i++){
    if(i%2!=0){
      vett[c]=vin[i];
      c++;
    }
  }
}


/*
 * La funzione VisualizzaVettore visualizza il contenuto dei primi 'n'
 * elementi del vettore 'v'
*/
void VisualizzaVettore(int* v, int n)
{
  // Lo sviluppo di questa funzione � a cura dello studente
  for(int i=0;i<n;i++){
    printf("\nil vettore è:%d",v[i]);
  }
}

int main(void)
{
  int* vett_in;    // vettore di input
  int* vett_out;   // vettore di output
  int  nin, nout;  // dimensione del vettore di input e di output
  

  // Leggere la dimensione del vettore 'nin', verificando che sia un
  // valore pari
  
 
    printf("\n inserisci una dimensione pari:");
    scanf("%d",&nin);
    if(nin%2!=0){
      nin=nin-1;
    }
   
  
  


  // Acquisire il vettore 'vett_in' utilizzando la funzione Acquisisci
  
 vett_in=Acquisisci(nin);

  // Verificare che l'acquisizione sia andata a buon fine, nel caso
  // contrario uscire dal programma
  
  if (vett_in == NULL){
  printf("\n errore ");
  return 1;
  }
  // Visualizzare il vettore 'vett_in' utilizzando la funzione VisualizzaVettore
  VisualizzaVettore(vett_in,nin);

  // Invocare opportunamente la funzione RunLengthDecoding 
    vett_out=RunLengthDecoding(vett_in,nin,&nout);
  // Visualizzare il vettore 'vett_out' utilizzando la funzione
  // VisualizzaVettore
  VisualizzaVettore(vett_out,nout);
  

  // Disallocare i due vettori vett_in e vett_out
   free(vett_in);
   free(vett_out);
  
  return 0;
}
