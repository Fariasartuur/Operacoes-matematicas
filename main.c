#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void limparConsole()
{
    system("cls");
}

void aguardarEnter() {
    limparBuffer();
    printf("\n|| Pressione Enter para continuar...\n");
    while(getchar() != '\n');
    limparConsole();
}

float soma(int qntSoma)
{

    int i;
    float num;
    float resultado = 0;

    for (i = 0; i < qntSoma; i++)
    {
        scanf("%f", &num);
        resultado += num;
    }

    return resultado;
}

float subtracao(int qntSub)
{

    int i;
    float num;
    float resultado;

    scanf("%f", &resultado);

    for (i = 1; i < qntSub; i++)
    {
        scanf("%f", &num);
        resultado -= num;
    }

    return resultado;
}

float multiplicacao(int qntMult)
{

    int i;
    float num;
    float resultado = 1;

    for (i = 0; i < qntMult; i++)
    {
        scanf("%f", &num);
        resultado *= num;
    }

    return resultado;
}

float divisao(int qntDiv)
{

    int i;
    float num;
    float resultado = 1;

    for (i = 0; i < qntDiv; i++)
    {
        scanf("%f", &num);
        resultado /= num;
    }

    return resultado;
}

void pares(int par1, int par2)
{

    int i;

    for (i = par1; i <= par2; i++)
    {
        if (i % 2 == 0)
            printf("%d eh par\n", i);
        else
            printf("%d eh impar\n", i);
    }
}

void maiorMenor(int qnt)
{
    int maior, menor, n, i;

    printf("Insira os numeros:\n");
    scanf("%d", &n);

    maior = menor = n;

    for (i = 1; i < qnt; i++)
    {
        scanf("%d", &n);
        if (maior < n)
        {
            maior = n;
        }
        if (menor > n)
        {
            menor = n;
        }
    }
    printf("O Maior numero eh: %d\n", maior);
    printf("O Menor numero eh: %d\n", menor);
}

void pnn(int numero)
{
    if (numero > 0)
    {
        printf("O Numero inserido eh positivo.\n");
    }
    else if (numero < 0)
    {
        printf("O Numero inserido eh negativo.\n");
    }
    else
    {
        printf("O Numero inserido eh neutro.\n");
    }
}

float distancia(float X1, float X2, float Y1, float Y2)
{

    float X12, Y12, quadX, quadY, somaQXY;
    float resultado;

    X12 = X2 - X1;
    Y12 = Y2 - Y1;
    quadX = X12 * X12;
    quadY = Y12 * Y12;
    somaQXY = quadX + quadY;
    resultado = sqrt(somaQXY);

    return resultado;
}

int fatorial(int fat)
{

    int i;
    int resultado = 1;

    for (i = fat; i > 0; i--)
    {
        resultado *= i;
    }
    return resultado;
}

float mediaAritmetica(int qntMediasA)
{

    int i;

    float med;
    float soma = 0;

    for (i = 0; i < qntMediasA; i++)
    {
        scanf("%f", &med);
        soma += med;
    }
    return soma = soma / qntMediasA;
}

float mediaPonderada(int qntMediasP)
{

    int i;

    float med, peso;
    float somaPesos = 0;
    float somaProdutos = 0;

    for (i = 0; i < qntMediasP; i++)
    {
        printf("Insira a nota %d:\n", i + 1);
        scanf("%f", &med);
        printf("Insira o peso da nota %.1f:\n", med);
        scanf("%f", &peso);

        somaProdutos += med * peso;
        somaPesos += peso;
    }

    if (somaPesos == 0)
    {
        printf("ERRO : Nao eh possivel dividir por zero.\n");
        return 0;
    }
    return somaPesos != 0 ? somaProdutos / somaPesos : 0;
}

int somaMatriz(int l, int c, int l2, int c2)
{

    int soma1 = 0;
    int soma2 = 0;
    int i, j;

    int m1[l][c];
    int m2[l2][c2];

    printf("Insira os numeros da primeira matriz:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    limparConsole();

    printf("Insira os numeros da segunda matriz:\n");
    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    limparConsole();

    printf("Primeira Matriz\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    printf("Segunda Matriz\n");
    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            soma1 += m1[i][j];
        }
    }

    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            soma2 += m2[i][j];
        }
    }

    return soma1 + soma2;
}

int verificarPerfeito(int nP)
{

    int i;
    int ver = 0;

    for (i = 1; i <= nP / 2; i++)
    {
        if (nP % i == 0)
        {
            ver += i;
        }
    }
    if (ver == nP)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int verificarPrimo(int n)
{

    int i;
    int ver = 0;

    if (n <= 2)
    {
        return 0;
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            ver++;
        }
    }
    if (ver == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int vefString(char s1[], char s2[])
{
    int i = 0;
    int cont = 0;
    int cont2 = 0;

    while (s1[i] != '\0')
    {
        cont2++;
        i++;
    }

    i = 0;

    while (s1[i] != '\0')
    {
        if (s1[i] == s2[i])
        {
            cont++;
        }
        i++;
    }

    if (cont == cont2)
        return 1;
    else
        return 2;
}

void e2g(double a, double b, double c)
{

    double delta, x1, x2, xv, yv;

    delta = ((b * b) - (4 * a * c));

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        xv = (-b / (2 * a));
        yv = (-delta / (4 * a));
        printf("DELTA = %1.lf\n", delta);
        printf("X1 = %.1lf\n", x1);
        printf("X2 = %.1lf\n", x2);
        printf("XV = %.1lf\n", xv);
        printf("YV = %.1lf\n", yv);
        printf("Y = %.1lf\n", c);
    }
    else if (delta == 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = x1;
        xv = (-b / (2 * a));
        yv = (-delta / (4 * a));
        printf("DELTA = %2.lf\n", delta);
        printf("X1 = %.1lf\n", x1);
        printf("X2 = %.1lf\n", x2);
        printf("XV = %.1lf\n", xv);
        printf("YV = %.1lf\n", yv);
        printf("Y = %.1lf\n", c);
    }
    else if (delta < 0)
    {
        xv = (-b / (2 * a));
        yv = (-delta / (4 * a));
        printf("DELTA = %1.lf\n", delta);
        printf("XV = %.1lf\n", xv);
        printf("YV = %.1lf\n", yv);
        printf("Y = %.1lf\n", c);
    }
}

void tabuada(int num)
{

    int i;
    int mult = 0;

    for (i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, mult, num * mult);
        mult++;
    }
}

int main()
{

    bool saida = true;
    bool saida1 = true;
    bool saida2 = true;
    bool saida3 = true;
    bool saida4 = true;
    int op1, op2, op3, op4;

    printf("Bem-vindo ao programa de operacoes matematicas em C!\n\n");
    printf("Este codigo oferece diversas opcoes, desde operacoes basicas ate calculos mais complexos,\npermitindo explorar e praticar diferentes conceitos matematicos.\n\n");
    printf("Escolha uma opcao digitando o numero correspondente e siga as instrucoes na tela.\n\n");

    printf("\n|| Pressione Enter para continuar...");

    while (saida)
    {
        limparBuffer();
        limparConsole();

        printf("Escolha uma opcao:\n");
        printf("1 - Operadores Basicas.\n");
        printf("2 - Operadores Avancadas.\n");
        printf("3 - Facilitadores.\n");
        printf("4 - Operadores de Matriz\n");
        printf("5 - Equacao de Segundo Grau\n");
        printf("0 - SAIR\n");
        scanf("%d", &op1);

        limparBuffer();
        limparConsole();

        switch (op1)
        {
        case 1:
        {

            while (saida1)
            {
                printf("----------OPERADOES BASICOS----------\n\n");
                char operacao;

                printf("Insira o tipo de operacao desejada:\n");
                printf(" '+' - Soma\n '-' - Subtracao\n 'X' - Multiplicacao\n '/' - Divisao\n 'S' - SAIR\n\n");
                scanf(" %c", &operacao);

                limparConsole();

                switch (operacao)
                {
                case '+':
                {
                    printf("Voce escolheu 'SOMA'.\n");
                    int qntSoma;
                    printf("Insira a quantidade de numeros a serem somados:\n");
                    scanf("%d", &qntSoma);
                    printf("Insira os numeros a serem somados.\n");
                    printf("A soma dos numeros eh: %.1f\n", soma(qntSoma));

                    aguardarEnter();
                    break;
                }
                case '-':
                {
                    printf("Voce escolheu 'SUBTRACAO'.\n");
                    int qntSub;
                    printf("Insira a quantidade de numeros a serem subtraidos:\n");
                    scanf("%d", &qntSub);
                    printf("Insira os numeros a serem subtraidos.\n");
                    printf("A subtracAo dos numeros eh: %.1f\n", subtracao(qntSub));

                    aguardarEnter();
                    break;
                }
                case 'X':
                case 'x':
                {
                    printf("Voce escolheu 'MULTIPLICACAO'.\n");
                    int qntMult;
                    printf("Insira a quantidade de numeros a serem multiplicados:\n");
                    scanf("%d", &qntMult);
                    printf("Insira os numeros a serem multiplicados.\n");
                    printf("A multiplicacao dos numeros eh: %.1f\n", multiplicacao(qntMult));

                    aguardarEnter();
                    break;
                }
                case '/':
                {
                    printf("Voce escolheu 'DIVISAO'.\n");
                    int qntDiv;
                    printf("Insira a quantidade de numeros a serem divididos:\n");
                    scanf("%d", &qntDiv);
                    printf("Insira os numeros a serem divididos.\n");
                    printf("A divisao dos numeros eh: %.2f\n", divisao(qntDiv));

                    aguardarEnter();
                    break;
                }
                case 's':
                case 'S':
                {
                    saida1 = false;
                    break;
                }
                default:
                    printf("ERRO: Operacao invalida. Tente novamente.\n\n");
                }
            }
            break;
        }
        case 2:
        {
            while (saida2)
            {
                printf("----------OPERADORES AVANCADOS----------\n\n");
                printf("Insira o tipo de operacao desejada:\n");
                printf(" 1 - Distancia entre dois pontos\n");
                printf(" 2 - Base e Expoente\n");
                printf(" 3 - Fatorial\n");
                printf(" 4 - Medias.\n");
                printf(" 0 - SAIR\n");
                scanf("%d", &op2);

                limparConsole();

                switch (op2)
                {
                case 1:
                {
                    printf("Voce escolheu 'DISTANCIA ENTRE DOIS PONTOS'.\n");
                    float X1, X2, Y1, Y2;
                    printf("Insira o X1:\n");
                    scanf("%f", &X1);
                    printf("Insira o X2:\n");
                    scanf("%f", &X2);
                    printf("Insira o Y1:\n");
                    scanf("%f", &Y1);
                    printf("Insira o Y2:\n");
                    scanf("%f", &Y2);
                    printf("A Distancia entre os dois pontos eh: %.2f", distancia(X1, X2, Y1, Y2));

                    aguardarEnter();
                    break;
                }
                case 2:
                {
                    printf("Voce escolheu 'BASE E EXPOENTE'.\n");
                    double base, expoente;
                    printf("Insira a base:\n");
                    scanf("%lf", &base);
                    printf("Insira o expoente\n");
                    scanf("%lf", &expoente);
                    printf("O Resultado eh: %.2lf\n", pow(base, expoente));

                    aguardarEnter();
                    break;
                }
                case 3:
                {
                    int fat;
                    printf("Voce escolheu 'FATORIAL'.\n");
                    printf("Insira um numero inteiro.\n");
                    scanf("%d", &fat);
                    printf("O Fatorial de %d eh: %d\n", fat, fatorial(fat));

                    aguardarEnter();
                    break;
                }
                case 4:
                {
                    bool ms = true;
                    while (ms)
                    {
                        char mop;
                        printf("Voce escolheu 'MEDIA',\n");
                        printf("Escolha um tipo de media:\n");
                        printf("A - Media Aritmehtica\n");
                        printf("P - Media Ponderada\n");
                        printf("H - Media Harmonica\n");
                        printf("S - SAIR\n");

                        scanf(" %c", &mop);

                        limparConsole();

                        switch (mop)
                        {
                        case 'a':
                        case 'A':
                        {
                            int qntMediasA;
                            printf("Voce escolheu 'Media - Media Aritmetica',\n");
                            printf("Insira a quantidade de Media:\n");
                            scanf("%d", &qntMediasA);
                            printf("Insira as Media:\n");
                            printf("A Media Aritmetica eh: %.2f", mediaAritmetica(qntMediasA));

                            aguardarEnter();
                            break;
                        }
                        case 'p':
                        case 'P':
                        {
                            int qntMediasP;
                            printf("Voce escolheu 'Media - Media Ponderada',\n");
                            printf("Insira a quantidade de Media:\n");
                            scanf("%d", &qntMediasP);
                            printf("A Media Ponderada eh: %.2f", mediaPonderada(qntMediasP));

                            aguardarEnter();
                            break;
                        }
                        case 'h':
                        case 'H':
                        {
                            printf("Voce escolheu 'Media - Media Harmonica',\n");
                            printf("Nao tem Ainda :D\n");

                            aguardarEnter();
                            break;
                        }
                        case 's':
                        case 'S':
                        {
                            ms = false;
                            break;
                        }
                        default:
                            printf("ERRO: Operacao invalida. Tente novamente.\n\n");
                        }
                    }
                    break;
                }
                case 0:
                {
                    saida2 = false;
                    break;
                }
                default:
                    printf("ERRO: Operacao invalida. Tente novamente.\n\n");
                }
            }
            break;
        }
        case 3:
        {
            while (saida3)
            {
                printf("----------FACILITADORES----------\n\n");
                printf("Insira o tipo de facilitador desejado:\n");
                printf(" 1 - Numeros Pares\n");
                printf(" 2 - Maior e Menor numero\n");
                printf(" 3 - Positivo, Negativo e Neutro\n");
                printf(" 4 - Valor Absoluto\n");
                printf(" 5 - Numero Perfeito\n");
                printf(" 6 - Numero Primo\n");
                printf(" 7 - Tabuada\n");
                printf(" 0 - SAIR\n");

                scanf("%d", &op3);

                limparConsole();

                switch (op3)
                {
                case 1:
                    printf("Voce escolheu 'NUMEROS PARES'.\n");
                    int num1, num2;
                    printf("Insira o primeiro numero:\n");
                    scanf("%d", &num1);
                    printf("Insira o segundo numero:\n");
                    scanf("%d", &num2);
                    pares(num1, num2);

                    aguardarEnter();
                    break;
                case 2:
                    printf("Voce escolheu 'MAIOR E MENOR NuMERO'.\n");
                    int qnt;
                    printf("Insira a quantidade de numeros:\n");
                    scanf("%d", &qnt);
                    maiorMenor(qnt);

                    aguardarEnter();
                    break;
                case 3:
                    printf("Voce escolheu 'POSITIVO, NEGATIVO E NEUTRO'.\n");
                    int numero;
                    printf("Insira um numero:\n");
                    scanf("%d", &numero);
                    pnn(numero);

                    aguardarEnter();
                    break;
                case 4:
                    printf("Voce escolheu 'VALOR ABSOLUTO'.\n");
                    double abis;
                    printf("Insira um numero inteiro.\n");
                    scanf("%lf", &abis);
                    printf("%.1lf\n", fabs(abis));

                    aguardarEnter();
                    break;
                case 5:
                    printf("Voce escolheu 'NUMERO PERFEITO'.\n");
                    int nP;
                    printf("Insira um numero:\n");
                    scanf("%d", &nP);
                    if (verificarPerfeito(nP) == 1)
                    {
                        printf("%d eh perfeito.\n", nP);
                    }
                    else
                    {
                        printf("%d nao eh perfeito\n", nP);
                    }

                    aguardarEnter();
                    break;
                case 6:
                    printf("Voce escolheu 'NUMERO PRIMO'.\n");
                    int numP;
                    printf("Insira um numero:\n");
                    scanf("%d", &numP);
                    if (verificarPrimo(numP) == 1)
                    {
                        printf("%d eh primo.\n", numP);
                    }
                    else if (verificarPrimo(numP) == 0)
                    {
                        printf("%d nao eh primo\n", numP);
                    }

                    aguardarEnter();
                    break;
                case 7:
                    printf("Voce escolheu 'TABUADA'.\n");
                    int numTabu;
                    printf("Insira um numero inteiro:\n");
                    scanf("%d", &numTabu);
                    tabuada(numTabu);

                    aguardarEnter();
                    break;
                case 0:
                {
                    saida3 = false;
                    break;
                }
                default:
                    printf("ERRO: Operacao invalida. Tente novamente.\n\n");
                }
            }
            break;
        }
        case 4:
        {
            while (saida4)
            {
                printf("----------MATRIZES----------\n\n");
                printf("Escolha uma opcao\n");
                printf("1 - Soma de Matriz\n");
                printf("2 - Comparar Matrizes\n");
                printf("0 - SAIR\n");

                scanf("%d", &op4);

                limparConsole();

                switch (op4)
                {
                case 1:
                {
                    printf("Voce Escolheu 'SOMA DE MATRIZES'\n");
                    int l, c;
                    int l2, c2;
                    // Matriz 1
                    printf("Insira o tamanho da primeira matriz:\n");
                    printf("Linhas:\n");
                    scanf("%d", &l);
                    printf("Colunas:\n");
                    scanf("%d", &c);
                    limparConsole();
                    // Matriz 2
                    printf("Insira o tamanho da segunda matriz:\n");
                    printf("Linhas:\n");
                    scanf("%d", &l2);
                    printf("Colunas:\n");
                    scanf("%d", &c2);
                    limparConsole();
                    printf("A Soma das duas matrizes eh: %d\n\n", somaMatriz(l, c, l2, c2));

                    aguardarEnter();
                    break;
                }
                case 2:
                {
                    printf("Voce Escolheu 'COMPARAR MATRIZES'\n");
                    char s1[100];
                    char s2[100];
                    printf("Insira a primeira string:\n");
                    scanf("%s", s1);
                    printf("Insira a segunda string:\n");
                    scanf("%s", s2);

                    if (vefString(s1, s2) == 1)
                    {
                        printf("Tamanho Igual\n\n");
                    }
                    else
                    {
                        printf("Tamanho Diferente\n\n");
                    }

                    aguardarEnter();
                    break;
                }
                case 0:
                {
                    saida4 = false;
                    break;
                }
                default:
                    printf("ERRO: Operacao invalida. Tente novamente.\n\n");
                    break;
                }
            }
            break;
        }
        case 5:
        {
            double a, b, c;
            printf("---------- Equacao de Segundo Grau ----------\n\n");
            printf("Insira A:\n");
            scanf("%lf", &a);
            printf("Insira B:\n");
            scanf("%lf", &b);
            printf("Insira C:\n");
            scanf("%lf", &c);
            e2g(a, b, c);

            aguardarEnter();
            break;
        }
        case 0:
        {
            saida = false;
            break;
        }
        }
    }
}