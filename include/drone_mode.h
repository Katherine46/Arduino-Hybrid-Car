#ifndef DRONE_MODE_H
#define DRONE_MODE_H

#include <Arduino.h>

// Fungsi inisialisasi drone mode
void initDroneMode();

// Fungsi loop utama untuk drone mode
void handleDroneCommand(char command);

// Fungsi-fungsi untuk kontrol dasar
void takeOff();
void land();
void increaseAltitude();
void decreaseAltitude();

#endif
