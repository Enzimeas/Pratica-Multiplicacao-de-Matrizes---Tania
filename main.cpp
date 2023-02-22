#include <iostream>

//funcao para printar as matrizes
template <std::size_t N,std::size_t M>
void printarMatriz(uint32_t (&matriz)[N][M])
{
    for(std::size_t i(0); i < N; ++i)
    {
      for(std::size_t j(0); j < M; ++j)
      {
        std::cout << matriz[i][j] << " ";
      }
      std::cout<<"\n";
    }
}


//funcao main
int main()
{
  //matriz 1 (botoes x camisa)
  uint32_t matriz1[2][3] ={{3,1,3},
                          {6,5,5}};
  //matriz 2 (camisa x mes)
  uint32_t matriz2[3][2] ={{100,50},
                          {50,100},
                          {50,50}};
  //matriz resultado
  uint32_t matriz_multiplicacao[2][2] = {{0,0},
                                        {0,0}};

  //quantidade de linhas e colunas das matrizes 1 e 2 necessarias para a operacao
  uint8_t linhas_m1 = 2;
  uint8_t colunas_m1 = 3;
  uint8_t colunas_m2 = 2;

  //produto das duas matrizes
  for(int i = 0;i<linhas_m1;i++)
  {
    for(int j = 0;j<colunas_m2;j++)
    {
      for(int k = 0;k<colunas_m1;k++)
      {
        matriz_multiplicacao[i][j] += matriz1[i][k] * matriz2[k][j];
      }  
    }
  }

  //printar as matrizes e o resultado
  std::cout<<"Matriz 1:\n";
  printarMatriz(matriz1);
  std::cout<<"\nMatriz 2:\n";
  printarMatriz(matriz2);
  std::cout<<"\nProduto Matriz 1 X Matriz 2\n"; 
  printarMatriz(matriz_multiplicacao);
}
