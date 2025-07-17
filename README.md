# Orientaçoes-SA

Este código foi criado para resolver o seguinte desafio proposto em sala de aula.

Uma empresa de automação industrial contratou sua equipe para desenvolver um sistema simples de monitoramento de temperatura. O sistema deve permitir que o operador insira um conjunto de medições diárias (em graus Celsius) e, com base nesses dados, o sistema deve verificar quais medições estão dentro de uma faixa ideal de operação, previamente definida.
Esse tipo de aplicação é comum em ambientes industriais, onde sensores capturam dados constantemente, e a análise correta dessas informações garante o funcionamento eficiente e seguro de equipamentos.

Desafio

Você deverá desenvolver, em linguagem C, um programa que:
1. Solicite ao usuário a entrada de 10 valores inteiros representando medições de temperatura.
2. Solicite os limites inferior e superior da faixa ideal de operação.
3. Verifique quais valores estão dentro da faixa, ou seja, maiores ou iguais ao limite inferior e menores ou iguais ao limite superior.
4. Exiba na tela apenas os valores que atendem a esse critério.
5. Ao final, informe quantas medições ficaram dentro da faixa ideal.

Captura de tela da execução do programa com diferentes valores de entrada.

Com temperaturas dentro da faixa de medição:
<img width="830" height="458" alt="image" src="https://github.com/user-attachments/assets/e06fac08-86ac-4fa4-9e92-1dc1ffc3dc9f" />

Sem temperaturas dentro da faixa de medição:
<img width="832" height="284" alt="image" src="https://github.com/user-attachments/assets/f4b17c2a-ecf0-446d-a0d7-e597e2c0437a" />

Explicando a lógica usada

Inicialmente, o código foi montado com uma lógica simples, atendendo o básico pedido pelo enunciado. Após testar se o programa funcionava, fui adicionando funções, para um código mais profissional e limpo. 
O código possui três funções

- SolicitarSuperiorInferior - Função criada para solicitar os limites inferior e superior da faixa ideal de operação.
  
- Temperaturas - Função criada para solicitar 10 valores inteiros representando medições de temperatura.
  
- Saida - Função para testar e imprimir na tela as temperaturas dentro da faixa de medição.




 
