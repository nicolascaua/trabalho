#include <stdio.h>

int validar_nota(float nota, float min, float max)
{
    return (nota >= min && nota <= max);
}

float calcular_nota_final(float N1, float N2, float PPD, float N3, int fez_N3)
{
    if (fez_N3)
    {

        if (N1 < N2)
        {
            N1 = N3;
        }
        else
        {
            N2 = N3;
        }
    }
    return N1 + N2 + PPD;
}

int main()
{
    float N1, N2, PPD, EU = 0, N3 = 0, nota_final;
    int fez_EU, fez_N3;

    printf("Digite a nota N1 (0 a 4.5): ");
    scanf("%f", &N1);
    if (!validar_nota(N1, 0.0, 4.5))
    {
        printf("Erro 3: Nota N1 fora do intervalo permitido.\n");
        return 3;
    }

    printf("Digite a nota N2 (0 a 4.5): ");
    scanf("%f", &N2);
    if (!validar_nota(N2, 0.0, 4.5))
    {
        printf("Erro 3: Nota N2 fora do intervalo permitido.\n");
        return 3;
    }

    printf("Digite a nota da PPD (0 a 1): ");
    scanf("%f", &PPD);
    if (!validar_nota(PPD, 0.0, 1.0))
    {
        printf("Erro 3: Nota PPD fora do intervalo permitido.\n");
        return 3;
    }

    printf("O aluno fez o Exame Unificado? (0 - Nao, 1 - Sim): ");
    scanf("%d", &fez_EU);
    if (fez_EU == 1)
    {
        printf("Digite a nota do Exame Unificado (0 a 1): ");
        scanf("%f", &EU);
        if (!validar_nota(EU, 0.0, 1.0))
        {
            printf("Erro 3: Nota do Exame Unificado fora do intervalo permitido.\n");
            return 3;
        }
    }
    else if (fez_EU != 0)
    {
        printf("Erro 3: Valor inválido para a flag do Exame Unificado.\n");
        return 3;
    }

    printf("O aluno fez a N3? (0 - Nao, 1 - Sim): ");
    scanf("%d", &fez_N3);
    if (fez_N3 == 1)
    {
        printf("Digite a nota N3 (0 a 4.5): ");
        scanf("%f", &N3);
        if (!validar_nota(N3, 0.0, 4.5))
        {
            printf("Erro 3: Nota N3 fora do intervalo permitido.\n");
            return 3;
        }
    }
    else if (fez_N3 != 0)
    {
        printf("Erro 3: Valor inválido para a flag da N3.\n");
        return 3;
    }

    nota_final = calcular_nota_final(N1, N2, PPD, N3, fez_N3);

    if (fez_EU == 1)
    {
        nota_final += EU;
    }

    if (nota_final > 10.0)
    {
        nota_final = 10.0;
    }

    printf("Nota final: %.2f\n", nota_final);

    if (nota_final >= 7.0)
    {
        printf("Aluno Aprovado.\n");
    }
    else
    {
        printf("Aluno Reprovado.\n");
    }

    return 0;
}
