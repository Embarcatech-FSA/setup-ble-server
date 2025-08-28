#ifndef GLOBALS_H
#define GLOBALS_H

// --- Includes Comuns do Sistema ---
#include "hardware/i2c.h"
#include <stdio.h>
#include <stdbool.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"


// Display na I2C1
#define I2C_PORT_DISP i2c1   	// Define que o barramento I2C usado será o "i2c0"
#define I2C_SDA_DISP 14      	// Define que o pino GPIO 14 será usado como SDA (linha de dados do I2C)
#define I2C_SCL_DISP 15      	// Define que o pino GPIO 15 será usado como SCL (linha de clock do I2C)
#define DISPLAY_ADDRESS 0x3C	    // Define o endereço I2C do dispositivo (0x3C é o endereço padrão de muitos displays OLED SSD1306)
#define DISPLAY_WIDTH       128
#define DISPLAY_HEIGHT      64

#define LED_GREEN 11        // Led verde
#define LED_RED 13          // Led vermelho
#define LED_BLUE 12          // Led azul

#endif // GLOBALS_H