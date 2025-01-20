# 🎲 *Scrabble: Determine o Vencedor*

Este repositório contém a solução para o exercício *Scrabble* do módulo 2 do curso *CS50 de Harvard*, cujo objetivo é determinar qual das duas palavras digitadas pelos jogadores vale mais pontos de acordo com as regras do jogo Scrabble.

---

## 📄 *Descrição do Problema*

No jogo *Scrabble*, cada letra tem um valor de pontos associado. Para calcular o valor de uma palavra, somamos os pontos de cada letra. Por exemplo:

- *C* vale 3 pontos  
- *O* vale 1 ponto  
- *D* vale 2 pontos  
- *E* vale 1 ponto  

A palavra "Code" vale: *3 + 1 + 2 + 1 = 7 pontos*.

Este programa:
1. Solicita que dois jogadores insiram suas palavras.
2. Calcula a pontuação de cada palavra com base na matriz de pontos fornecida.
3. Determina o vencedor:
   - *“Player 1 wins!”* se o Jogador 1 vencer.
   - *“Player 2 wins!”* se o Jogador 2 vencer.
   - *“Tie!”* em caso de empate.

---

## 🚀 *Como Rodar o Programa*

### *Pré-requisitos*
- Ter um compilador C instalado, como o gcc.
- Ter a biblioteca CS50 configurada no ambiente. [CS50 Library for C](https://cs50.readthedocs.io/).

### *Execução*

1. Clone o repositório:
   bash
   git clone https://github.com/seuusuario/scrabble.git
   cd scrabble
   

2. Compile o código:
   bash
   gcc -o scrabble scrabble.c -lcs50
   

3. Execute o programa:
   bash
   ./scrabble
   

4. Insira as palavras solicitadas para cada jogador.

---

## 📚 *Detalhes da Implementação*

### *Matriz de Pontos*
A pontuação de cada letra do alfabeto é armazenada em um array chamado POINTS:
c
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

- POINTS[0] representa o valor de 'A' ou 'a' (1 ponto).
- POINTS[1] representa o valor de 'B' ou 'b' (3 pontos).
- Assim por diante, seguindo a ordem alfabética.

### *Função compute_score*
A função compute_score é responsável por calcular a pontuação de uma palavra. O cálculo considera:
- Letras maiúsculas e minúsculas como equivalentes.
- Caracteres que não são letras (como ?, !, etc.) valem 0 pontos.

### *Fluxo do Programa*
1. Solicita palavras para os dois jogadores.
2. Calcula as pontuações usando compute_score.
3. Compara as pontuações e imprime o resultado:
   - *Player 1 wins!*
   - *Player 2 wins!*
   - *Tie!*

---

## 📊 *Casos de Teste*

Aqui estão alguns exemplos de execução:

plaintext
$ ./scrabble
Player 1: Question?
Player 2: Question!
Tie!

$ ./scrabble
Player 1: Oh,
Player 2: hai!
Player 2 wins!

$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!

$ ./scrabble
Player 1: Scrabble
Player 2: wiNNeR
Player 1 wins!


---

## 🛠️ *Ferramentas de Avaliação*

- *check50*: Avalia a exatidão do código.
   bash
   check50 cs50/problems/2024/x/scrabble
   

- *style50*: Avalia o estilo do código.
   bash
   style50 scrabble.c
   

---

## 🌟 *Conceitos Praticados*

- *Manipulação de Strings*: Uso de arrays de caracteres para armazenar palavras.
- *Uso de Arrays*: Pontuações são armazenadas em um array para fácil acesso.
- *Funções Auxiliares*: Separação de lógica em funções como compute_score.
- *ASCII e Condições*: Uso de operações baseadas em valores ASCII para determinar o índice no array.

---

## 📜 *Licença*

Este projeto está licenciado sob a [MIT License](LICENSE).