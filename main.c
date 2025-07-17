#include <stdio.h>

int temperaturas[10];
int superior, inferior, medicoes = 0; 

void SolicitarSuperiorInferior(){
    printf("Digite o número superior da faixa de produção: ");
    scanf("%d", &superior);
    printf("Digite o número inferior da faixa de produção: ");
    scanf("%d", &inferior);
    while(inferior >= superior ){
      printf("[AVISO: O número inferior deve ser menor que o superior!]\nDigite novamente: ");
      scanf("%d", &inferior);
    }
}

void Temperaturas(){  
  for (int i=0;i<10; i++){
    printf("Digite a temperatura a %dª temperatura: ",i+1);
    scanf("%d", &temperaturas[i]);
  } 
}

void Saida(){
  printf("\nTemperaturas dentro da faixa de medição:");
  for(int i=0; i<10; i++){
    if(temperaturas[i] >= inferior && temperaturas[i] <= superior){
      printf("Temp %d: %dºC \n",i+1,temperaturas[i]);
      medicoes++;
    }
  }
  if(medicoes == 0){
      printf("\n[AVISO: Não há temperaturas dentro da faixa de medição!]");
  }  
  printf("\nQuantidade de medições que ficaram dentro da faixa ideal: %d",medicoes);
}

int main(void) {  

    SolicitarSuperiorInferior();
    printf("\n");
    Temperaturas();
    Saida();
    
    return 0;
}