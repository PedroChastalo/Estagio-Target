#include <stdio.h>

int main() {
  long int a,b,c;
  int n ,cont,p;
  double r;


  printf("Qual o tamanho da sequancia que quer pesquisar:\n");
  scanf("%d", &n);

  printf("Qual numero voce deseja achar: \n");
  scanf("%d", &p);

  if (p <= 1 ||n <= 1) {
    printf("Seu numero esta na sequancia de Fibonacci");
  }
  else {

    a = 1;
    b = 1;
    cont = 2;

    for(;cont < n && c != p; cont++) {
      c = a + b;
      r = c;
      r = r/b;
      if(c == p){
          printf("Seu numero esta na sequancia de Fibonacci pesquisada");
      }
      a = b;
      b = c;
    }
  }
  if(c != p && c > 1 && n > 1 ){
      printf("Seu numero nao esta na sequancia de Fibonacci pesquisada");
  }
  return(0);
}
