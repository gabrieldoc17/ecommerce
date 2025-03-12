#include <stdio.h>
#include <stdlib.h>

void pizzabanana();
void pizza4queijos();
void pizzachocolate();
void pizzacalabreza();
void pizzaportuguesa();
void encerrarprograma();
void menu();

int main (){
  menu();
  return 0;
  
}
void menu(){
  char x;
  printf("Menu:\n");
  printf("1- banana\n"); 
  printf("2- quatroqueijos\n");
  printf("3- chocolate\n");
  printf("4- calabresa\n");
  printf("5- portuguesa\n");
  printf("x - encerrarprograma\n");
  scanf("%c", &x);

  switch (x)
    {
      case '1': pizzabanana();
      break;
    
      case '2': pizza4queijos();
      break;

      case '3': pizzachocolate();
      break;

      case '4': pizzacalabreza();
      break;

      case '5': pizzaportuguesa();
      break;

      case 'x': encerrarprograma();
      break;

      default: 
      break;

    }
}   
void pizzabanana(){
 
  printf("ingredientes: banana, queijo, azeite, orégano, sal\n");
  printf("45,00\n");
}

void pizza4queijos(){

printf("Muzzarela, parmezão, peperonni");
printf("45,00\n");
}

void pizzachocolate(){

    printf("chocolate");
    printf("45,00\n");
}

void pizzacalabrezza(){
    printf("calabrezza");
    printf("45,00\n");
}

void pizzaportuguesa(){
    printf("azeitona, queijo");
    printf("45,00\n");
}
      
  
