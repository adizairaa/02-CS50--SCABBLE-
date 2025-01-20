#include <ctype.h>    // Biblioteca para funções de manipulação de caracteres (ex.: islower, isupper)
#include <cs50.h>     // Biblioteca do CS50 para funções como get_string
#include <stdio.h>    // Biblioteca padrão para entrada e saída
#include <string.h>   // Biblioteca para manipulação de strings (ex.: strlen)

// Pontuação associada a cada letra do alfabeto (baseado no jogo Scrabble)
// Exemplo: A=1, B=3, C=3, ..., Z=10
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Declaração da função compute_score, que calcula a pontuação de uma palavra
int compute_score(string word);

int main(void)
{
    // Cada jogador digita uma palavra
    string word1 = get_string("Jogador 1, digite a sua palavra: ");
    string word2 = get_string("Jogador 2, digite a sua palavra: ");

    // Calcula a pontuação de cada palavra usando a função compute_score
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Compara as pontuações para determinar o vencedor
    if (score1 == score2)
    {
        printf("Empatou!\n"); // Caso as pontuações sejam iguais
    }
    else if (score1 > score2)
    {
        printf("Jogador 1 você venceu!\n"); // Caso o jogador 1 tenha a maior pontuação
    }
    else
    {
        printf("Jogador 2 você venceu!\n"); // Caso o jogador 2 tenha a maior pontuação
    }
}

// Função para calcular a pontuação de uma palavra
int compute_score(string word)
{
    int score = 0; // Variável que armazena a pontuação total

    // Loop para iterar por cada caractere da palavra
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        // Verifica se o caractere é uma letra minúscula
        if (islower(word[i]))
        {
            // Calcula a pontuação com base no índice da letra ('a' tem índice 0)
            score += POINTS[word[i] - 'a'];
        }
        // Verifica se o caractere é uma letra maiúscula
        else if (isupper(word[i]))
        {
            // Calcula a pontuação com base no índice da letra ('A' tem índice 0)
            score += POINTS[word[i] - 'A'];
        }
    }

    // Retorna a pontuação final da palavra
    return score;
}
