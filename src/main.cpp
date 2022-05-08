#include "Arduino.h"
#include "Luz.h"

const int PINO_DA_LUZ = 25;
const int CANAL_DO_PWM = 0;

Luz minhaLuz(PINO_DA_LUZ, CANAL_DO_PWM);

void setup()
{
    minhaLuz.criar();
    minhaLuz.definirBilho(10);
    delay(2000);
    for (int intensidade = 0; intensidade < 100; intensidade += 10)
    {
        minhaLuz.definirBilho(intensidade);
        delay(500);
    }
    delay(2000);
    minhaLuz.definirBilho(0);
}

void loop()
{
}
