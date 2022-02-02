//TRABAJO REALIZADO POR MARIO GÓMEZ PEÑA (alu.124956@usj.es)
#include <stdio.h>
#include <stdlib.h>

static int fila = 1;

void lineaHorizontalSuperiorAjedrez (int numCuadro, int aristaCuadro, int esquinaSuperiorIzquierda, int guionHorizontal, int esquinaSuperiorDerecha, int tNormal)
{
    int i = 0;
    int j = 0;

    printf("%c",esquinaSuperiorIzquierda);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < aristaCuadro; j++)
        {
            printf("%c", guionHorizontal);
        }
        if (i == (8 - 1))
        {
            printf("%c", esquinaSuperiorDerecha);
        }
        else
        {
            printf("%c", tNormal);
        }
    }
    printf("\n");
}

void lineaHorizontalVaciaAjedrez (int numCuadro, int aristaCuadro, int guionVertical)
{
    int i = 0;
    int j = 0;

    printf("%c",guionVertical);
    if (fila%2 == 1)
    {
       for (i = 1; i < 9; i++)
        {
            if (i%2 == 1)
            {
                for (j = 0; j < aristaCuadro; j++)
                {
                    printf("%c",219);
                }
            }
            else
            {
                for (j = 0; j < aristaCuadro; j++)
                {
                printf(" ");
                }
            }
            printf("%c", guionVertical);
        }
    }
    else
    {
      for (i = 1; i < 9; i++)
        {
            if (i%2 == 1)
            {
                for (j = 0; j < aristaCuadro; j++)
                {
                printf(" ");
                }
            }
            else
            {
                for (j = 0; j < aristaCuadro; j++)
                {
                printf("%c",219);
                }
            }
            printf("%c", guionVertical);

        }
    }
    printf("\n");
}

void lineaCentralAjedrez (int numCuadro, int aristaCuadro, int tParedIzquierda, int guionHorizontal, int tParedDerecha, int mas)
{
    int i = 0;
    int j = 0;

    printf("%c",tParedIzquierda);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < aristaCuadro; j++)
        {
            printf("%c", guionHorizontal);
        }
        if (i == (8 - 1))
        {
            printf("%c", tParedDerecha);
        }
        else
        {
            printf("%c", mas);
        }
    }
    printf("\n");
}

void lineaHorizontalInferiorAjedrez (int numCuadro, int aristaCuadro, int esquinaInferiorIzquierda, int guionHorizontal, int esquinaInferiorDerecha, int tInversa)
{
    int i = 0;
    int j = 0;

    printf("%c",esquinaInferiorIzquierda);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < aristaCuadro; j++)
        {
            printf("%c", guionHorizontal);
        }
        if (i == (8 - 1))
        {
            printf("%c", esquinaInferiorDerecha);
        }
        else
        {
            printf("%c", tInversa);
        }
    }
    printf("\n");
}

void lineaHorizontalSuperior3 (int numCuadro, int aristaCuadro, int esquinaSuperiorIzquierda, int guionHorizontal, int esquinaSuperiorDerecha, int tNormal)
{
    int i = 0;
    int j = 0;

    printf("%c",esquinaSuperiorIzquierda);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < aristaCuadro; j++)
        {
            printf("%c", guionHorizontal);
        }
        if (i == (3 - 1))
        {
            printf("%c", esquinaSuperiorDerecha);
        }
        else
        {
            printf("%c", tNormal);
        }
    }
    printf("\n");
}

void lineaHorizontalVacia3 (int numCuadro, int aristaCuadro, int guionVertical)
{
    int i = 0;
    int j = 0;

    printf("%c",guionVertical);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < aristaCuadro; j++)
        {
            printf(" ");
        }
        printf("%c", guionVertical);

    }
    printf("\n");
}

void lineaCentral3 (int numCuadro, int aristaCuadro, int tParedIzquierda, int guionHorizontal, int tParedDerecha, int mas)
{
    int i = 0;
    int j = 0;

    printf("%c",tParedIzquierda);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < aristaCuadro; j++)
        {
            printf("%c", guionHorizontal);
        }
        if (i == (3 - 1))
        {
            printf("%c", tParedDerecha);
        }
        else
        {
            printf("%c", mas);
        }
    }
    printf("\n");
}

void lineaHorizontalInferior3 (int numCuadro, int aristaCuadro, int esquinaInferiorIzquierda, int guionHorizontal, int esquinaInferiorDerecha, int tInversa)
{
    int i = 0;
    int j = 0;

    printf("%c",esquinaInferiorIzquierda);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < aristaCuadro; j++)
        {
            printf("%c", guionHorizontal);
        }
        if (i == (3 - 1))
        {
            printf("%c", esquinaInferiorDerecha);
        }
        else
        {
            printf("%c", tInversa);
        }
    }
    printf("\n");
}

int main()
{

    printf("Bienvenido al programa realizado por Mario Gómez Peña\n");

    int eleccion;
    int alturaCuadro;
    int aristaCuadro;
    int cuadrado;
    int j;
    int formatoLinea;
    int esquinaSuperiorIzquierda;
    int esquinaSuperiorDerecha;
    int esquinaInferiorIzquierda;
    int esquinaInferiorDerecha;
    int tNormal;
    int tInversa;
    int tParedIzquierda;
    int tParedDerecha;
    int guionHorizontal;
    int guionVertical;
    int mas;
    int conformidad = 0;

    printf("\nIntroduce el valor de la altura: ");
    scanf("%d", &alturaCuadro);
    printf("\nIntroduce el valor de la anchura: ");
    scanf("%d", &aristaCuadro);

    printf("\nCómo quiere ver el tablero, ¿con línea simple o con línea doble?");
    printf("\n\t1. Línea simple");
    printf("\n\t2. Línea doble");
    printf("\nSu opción elegida es: ");
    scanf("%d", &formatoLinea);
    while (formatoLinea != 1 && formatoLinea != 2)
    {
        printf("\nEl valor introducido por teclado, no es válido. Inténtelo de nuevo.");
        printf("\nSu nueva opción elegida es: ");
        scanf("%d",&formatoLinea);
    }

    if (formatoLinea == 1)
    {
        esquinaSuperiorIzquierda = 218;
        esquinaSuperiorDerecha = 191;
        tNormal = 194;
        tInversa = 193;
        tParedIzquierda = 195;
        tParedDerecha = 180;
        esquinaInferiorIzquierda = 192;
        esquinaInferiorDerecha = 217;
        guionHorizontal = 196;
        guionVertical = 179;
        mas = 197;

    }
    else
    {
        esquinaSuperiorIzquierda = 201;
        esquinaSuperiorDerecha = 187;
        tNormal = 203;
        tInversa = 202;
        tParedIzquierda = 204;
        tParedDerecha = 185;
        esquinaInferiorIzquierda = 200;
        esquinaInferiorDerecha = 188;
        guionHorizontal = 205;
        guionVertical = 186;
        mas = 206;
    }


    printf("\n¿Qué es lo que quiere ver?");
    printf("\n\t1. Ajedrez");
    printf("\n\t2. Tres en raya\n");
    printf("Su opción elegida es: ");
    scanf("%d", &eleccion);
    printf("\n");

    while (eleccion != 1 && eleccion != 2)
    {
        printf("\nEl valor introducido por teclado, no es válido. Inténtelo de nuevo.");
        printf("\nSu nueva opción elegida es: ");
        scanf("%d",&eleccion);
    }


    if (eleccion == 1)
    {
        lineaHorizontalSuperiorAjedrez (alturaCuadro, aristaCuadro, esquinaSuperiorIzquierda, guionHorizontal, esquinaSuperiorDerecha, tNormal);
        while (cuadrado < 8)
        {
            for (j = 0; j < alturaCuadro; j++)
            {
                lineaHorizontalVaciaAjedrez (alturaCuadro, aristaCuadro, guionVertical);
            }
                if (cuadrado < 7)
                {
                    lineaCentralAjedrez (alturaCuadro, aristaCuadro, tParedIzquierda, guionHorizontal, tParedDerecha, mas);
                }
            cuadrado++;
            fila ++;
        }
        lineaHorizontalInferiorAjedrez (alturaCuadro, aristaCuadro, esquinaInferiorIzquierda, guionHorizontal, esquinaInferiorDerecha, tInversa);
    }
    else
    {
        lineaHorizontalSuperior3 (alturaCuadro, aristaCuadro, esquinaSuperiorIzquierda, guionHorizontal, esquinaSuperiorDerecha, tNormal);
        while (cuadrado < 3)
        {
            for (j = 0; j < alturaCuadro; j++)
            {
                lineaHorizontalVacia3 (alturaCuadro, aristaCuadro, guionVertical);
            }
                if (cuadrado < 2)
                {
                    lineaCentral3 (alturaCuadro, aristaCuadro, tParedIzquierda, guionHorizontal, tParedDerecha, mas);
                }
            cuadrado++;
        }
        lineaHorizontalInferior3 (alturaCuadro, aristaCuadro, esquinaInferiorIzquierda, guionHorizontal, esquinaInferiorDerecha, tInversa);
    }

    printf("\n¿Está conforme con el tablero impreso?");
    printf("\n\t1. Si");
    printf("\n\t2. No\n");
    printf("Su opción elegida es: ");
    scanf("%d", &conformidad);
    while (conformidad != 1 && conformidad != 2)
    {
        printf("\nEl valor introducido por teclado, no es válido. Inténtelo de nuevo.");
        printf("\nSu nueva opción elegida es: ");
        scanf("%d",&eleccion);
    }
    if (conformidad == 2)
    {
        main();
    }

    return 0;
}
