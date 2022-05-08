#pragma once
#include "Arduino.h"

class Luz
{

private:
    int pino_da_luz = 0;
    int canal_para_o_pino = 0;
    int frequencia_hz = 1000;
    int resolucao_em_bits = 10;
    int ultimo_valor_bites_de_saida = -1;
    int valor_maximo_bits_pwm = 1023;
    int valor_minimo_brilho = 0;
    int valor_maximo_brilho = 100;
    int valor_atual_brilho;

public:
    Luz(int pino_luz, int canal);
    ~Luz();
    void criar();
    void definirBilho(int porcentagem_brilho);
};