#include "Luz.h"
Luz::Luz(int pino_luz, int canal)
{
    pino_da_luz = pino_luz;
    canal_para_o_pino = canal;
}

Luz::~Luz()
{
}

void Luz::criar()
{
    pinMode(pino_da_luz, OUTPUT);
    ledcAttachPin(pino_da_luz, canal_para_o_pino);
    ledcSetup(canal_para_o_pino, frequencia_hz, resolucao_em_bits);
    ledcWrite(canal_para_o_pino, valor_minimo_brilho);
}

void Luz::definirBilho(int porcentagem_brilho)
{
    int bites_de_saida = valor_maximo_bits_pwm * porcentagem_brilho / valor_maximo_brilho;

    if (ultimo_valor_bites_de_saida != bites_de_saida)
    {
        ledcWrite(canal_para_o_pino, bites_de_saida);
        ultimo_valor_bites_de_saida = bites_de_saida;
    }
    return;
}