#ifndef MODBUS_CRC16_H
#define MODBUS_CRC16_H

#include <stdint.h>

uint16_t get_modbus_crc16 (uint8_t *buf, uint16_t len);

#endif
