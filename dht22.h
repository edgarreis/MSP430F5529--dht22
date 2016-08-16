//#ifndef __DHT_22_H__
#define __DHT_22_H__

#include <stdint.h>

typedef union {
  struct {
    uint8_t hh;         // Humidity High
    uint8_t hl;         // Humidity High
    uint8_t th;         // Temp. High
    uint8_t tl;         // Temp. High
    uint8_t crc;        // Cyclic redundancy check
  } val;
  uint8_t bytes[5];     // Create a variable with 1 bytes
} dht22data;

void dht_start_read();
int dht_get_temp();
int dht_get_rh();

//#endif
