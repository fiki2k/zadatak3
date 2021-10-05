// Zadatak je pronaci koji je broj veci od dana 3 broja.

#include<stdio.h>
int main()
{
   int br1,br2,br3;
   
   //Korisnik unosi neka 3 random broja
   printf("Unesi neka 3 broja:");
   //Brojevi se spremaju u varijable za usporedbu
   scanf("%d %d %d",&br1,&br2,&br3);

   if((br1>br2)&&(br1>br3))
      printf("\nBroj1 je najveci");
   else if((br2>br3)&&(br2>br1))
      printf("\nBroj2 je najveci");
   else
      printf("\nBroj3 je najveci");
   return 0;
}
