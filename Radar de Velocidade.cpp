#include <stdio.h>
int main () {
	
	printf ("---------- Radar de Velocidade ------------\n");
	
	  float limite = 100;
	  float limite2 = 100 * 1.20;
	  float velocidade;
	  
	  printf ("\nRegistro de Velocidade: ");
	  scanf ("%f", &velocidade);
	  if (velocidade > limite &&  velocidade <= limite2){
	  	printf ("Voce ultrapassou a velocidade em ate 20 % ");
	  }
	  return 0;
}
