#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>

#define LARGURA 500
#define ALTURA 500

int main(void) {

     srand(time(NULL));

    unsigned char imagem[ALTURA][LARGURA];

    // Inicializa toda a imagem com branco
    for (int y = 0; y < ALTURA; y++) {
        for (int x = 0; x < LARGURA; x++) {
            imagem[y][x] = rand() % 256;
        }
    }

    // Desenha um quadrado preto no centro
    // for (int y = 150; y < 350; y++) {
    //     for (int x = 150; x < 350; x++) {
    //         imagem[y][x] = 0;
    //     }
    // }

    FILE *arquivo = fopen("imagem.bmp", "wb");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    // Cada pixel ocupa 3 bytes: B, G e R
    int bytesPorLinha = LARGURA * 3;

    // BMP exige que cada linha tenha tamanho múltiplo de 4 bytes
    int padding = (4 - (bytesPorLinha % 4)) % 4;

    int tamanhoImagem = (bytesPorLinha + padding) * ALTURA;
    int tamanhoArquivo = 54 + tamanhoImagem;

    unsigned char cabecalho[54] = {0};

    // Assinatura BMP
    cabecalho[0] = 'B';
    cabecalho[1] = 'M';

    // Tamanho total do arquivo
    cabecalho[2] = tamanhoArquivo;
    cabecalho[3] = tamanhoArquivo >> 8;
    cabecalho[4] = tamanhoArquivo >> 16;
    cabecalho[5] = tamanhoArquivo >> 24;

    // Offset onde começam os pixels
    cabecalho[10] = 54;

    // Tamanho do DIB header
    cabecalho[14] = 40;

    // Largura
    cabecalho[18] = LARGURA;
    cabecalho[19] = LARGURA >> 8;
    cabecalho[20] = LARGURA >> 16;
    cabecalho[21] = LARGURA >> 24;

    // Altura
    cabecalho[22] = ALTURA;
    cabecalho[23] = ALTURA >> 8;
    cabecalho[24] = ALTURA >> 16;
    cabecalho[25] = ALTURA >> 24;

    // Número de planos
    cabecalho[26] = 1;

    // 24 bits por pixel
    cabecalho[28] = 24;

    // Grava o cabeçalho
    fwrite(cabecalho, 1, 54, arquivo);

    unsigned char paddingBytes[3] = {0, 0, 0};

    // BMP armazena as linhas de baixo para cima
    for (int y = ALTURA - 1; y >= 0; y--) {

        for (int x = 0; x < LARGURA; x++) {

            unsigned char cor;

            if (imagem[y][x] == 0)
                cor = 0;       // preto
            else
                cor = 255;     // branco

            // BMP 24 bits usa a ordem BGR
            fputc(cor, arquivo);
            fputc(cor, arquivo);
            fputc(cor, arquivo);
        }

        fwrite(paddingBytes, 1, padding, arquivo);
    }

    fclose(arquivo);

    printf("Imagem criada com sucesso: imagem.bmp\n");

    return 0;
}