#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut LD13(LED1);

    while (true) {
        LD13 = B1_USER;
    }
}
