//Calculadora Simples

#include <stdio.h>
#include <stdlib.h>


//FUNÇÃO PRINCIPAL
int main (){
  int n, qtdeNum = 0;
  int operacao; // ad, sub, mult, div, pot, rad.
  char escolha; //s = sim ou n = não.

  printf("\nBem-vindo(a) a SimpleCalc: sua calculadora básica!\n");
  
  do{
    printf("\nDeseja realizar alguma operação (s = sim ou n = não)? ");
    scanf("%s", &escolha);
    if(escolha == 's'){
      printf("\nQual operação deseja realizar (1 - adicao, 2 - subtração, 3 - multiplicação, 4 - divisão, 5 - potenciação, 6 - radiciação)? ");
      scanf("%d", &operacao);

      if(operacao == 1){
        float CalcAdicao(float soma);
        float adicao = CalcAdicao(adicao);
        printf("\n\n");

      } else if(operacao == 2){
        float CalcSubtracao(float diferenca);
        float subtracao = CalcSubtracao(subtracao);
        printf("\n\n");

      } else if(operacao == 3){
        float CalcMultiplicacao(float produto);
        float multiplicacao = CalcMultiplicacao(multiplicacao);
        printf("\n\n");

      } else if(operacao == 4){
        float CalcDivisao(float quociente);
        float divisao = CalcDivisao(divisao);
        printf("\n\n");
      
      } else if (operacao == 5){
        float CalcPotencia(float potenciacao);
        float potencia = CalcPotencia(potencia);
        printf("\n\n");

      } else if (operacao == 6){
        float CalcRadiciacao (float radiciacao);
        float raiz = CalcRadiciacao(raiz);
        printf("\n\n");

      } else {
        printf("\n\t\tOperação inválida!\n");
      }

    }else if(escolha == 'n'){
      printf("\n\t\tObrigado por utilizar!\n\n");
    }
  }while(escolha == 's');

  return 0;
}



//Função 'Adição'
float CalcAdicao(float soma){
  int qtdeNum = 0, n = 0; //n = variável de controle;
  float adicao = 0;

  printf("\n---------------------------------------------------\n");

  printf("\n\nVocê selecionou a operação de 'Adição'.\n");

  printf("\nQuantos números serão utilizados? ");
  scanf("%d", &qtdeNum);

  float vetAdicao[qtdeNum];

  printf("\n\n");

  if (qtdeNum <= 0){
    printf("\n\tQuantidade de números inválida! Tente novamente!\n");

  } else if (qtdeNum > 0){
    do{
      printf("\n\tDigite o %dº número da soma: ", (n+1));
      scanf("%f", &vetAdicao[n]);
      adicao = adicao + vetAdicao[n];
      n = n + 1;
    }while(n < qtdeNum);

    printf("\n\n\tA soma dos números digitados é %.2f.\n", adicao);
  
  }

  printf("\n---------------------------------------------------\n");

  return 0;
}

//Função 'Subtração'
#include <math.h>

float CalcSubtracao(float diferenca){
  float dif1, dif2;
  float subtracao = 0;

  printf("\n---------------------------------------------------\n");

  printf("\n\nVocê selecionou a operação de 'Subtração'.\n");

  printf("\n\n\tDigite o 1º número da diferença: ");
  scanf("%f", &dif1);
  printf("\n\n\tDigite o 2º número da diferença: ");
  scanf("%f", &dif2);

  subtracao = dif1 - dif2;

  //Imprimindo o valor da diferença...
  printf("\n\n\tA diferença dos números digitados equivale a %.2f.\n", subtracao);

  printf("\n---------------------------------------------------\n");

  return 0;
}


//Função 'Multiplicação'
float CalcMultiplicacao(float produto){
  int qtdeNum = 0, n = 0; //n = variável de controle;
  float multiplicacao = 1;

  printf("\n---------------------------------------------------\n");

  printf("\n\nVocê selecionou a operação de 'Multiplicação'.\n");

  printf("\nQuantos números serão utilizados? ");
  scanf("%d", &qtdeNum);

  float vetMultiplicacao[qtdeNum];

  printf("\n\n");

  if (qtdeNum <= 0){
    printf("\n\tQuantidade de números inválida! Tente novamente!\n");

  } else if (qtdeNum > 0){
  
    do{
      printf("\n\tDigite o %dº número do produto: ", (n+1));
      scanf("%f", &vetMultiplicacao[n]);
      multiplicacao = multiplicacao * vetMultiplicacao[n];
      n = n + 1;
    }while(n < qtdeNum);

    printf("\n\n\tO produto dos números digitados equivale a %.2f.\n", multiplicacao);
  }

  printf("\n---------------------------------------------------\n");

  return 0;
}

//Função 'Divisão'
float CalcDivisao(float quociente){
  float dividendo, divisor; //n = variável de controle;
  float divisao = 1;

  printf("\n---------------------------------------------------\n");

  printf("\n\nVocê selecionou a operação de 'Divisão'.\n");

  printf("\n\tDigite o valor do dividendo: ");
  scanf("%f", &dividendo);
  printf("\n\tDigite o valor do divisor: ");
  scanf("%f", &divisor);
  
  divisao = dividendo / divisor;

  printf("\n\n\tA divisão de %.1f por %.1f equivale a %.2f.\n\n", dividendo, divisor, divisao);

  printf("\n---------------------------------------------------\n");

  return 0;
}

//Função 'Potenciação'
#include <math.h>

float CalcPotencia(float potenciacao){
  float base, expoente;
  float potencia;

  printf("\n---------------------------------------------------\n");

  printf("\nVocê selecionou a operação de 'Potenciação'.\n");

  printf("\n\tDigite o valor da base: ");
  scanf("%f", &base);

  printf("\n\tDigite o valor do expoente: ");
  scanf("%f", &expoente);

  potencia = pow(base, expoente);

  printf("\n\n\tA potenciação de %.1f elevado a %.1f equivale a %.2f.\n", base, expoente, potencia);

  printf("\n---------------------------------------------------\n");

  return 0;
}


//Função 'Radiciação'
#include <math.h>

float CalcRadiciacao (float radiciacao){
  float numero;
  float raiz;

  printf("\n---------------------------------------------------\n");

  printf("\nVocê selecionou a operação de 'Radiciação'.\n");

  printf("\n\n\tDigite o número a se extrair a raiz: ");
  scanf("%f", &numero);

  raiz = sqrt(numero);

  printf("\n\n\tO valor da raiz de %.1f equivale a %.2f.\n", numero, raiz);

  printf("\n---------------------------------------------------\n");

  return 0;
}