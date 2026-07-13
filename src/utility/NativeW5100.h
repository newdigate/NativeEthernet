/* NativeW5100.h - WIZnet W5x00 socket-state constants used by the
 * NativeEthernet API layer.
 *
 * NativeEthernet runs on FNET, not a W5x00 chip; these constants survive
 * only because the Arduino Ethernet API surface expresses socket modes and
 * states in W5x00 terms. The values are register field values from the
 * WIZnet W5100 datasheet (Sn_MR / Sn_SR) -- hardware facts, restated here
 * from the datasheet. This file replaces the GPL/LGPL-dual header inherited
 * from the Arduino Ethernet library, so an MIT NativeEthernet build contains
 * no copyleft code.
 *
 * Copyright (c) 2026 Nicholas Newdigate
 * SPDX-License-Identifier: MIT
 */

#ifndef W5100_H_INCLUDED
#define W5100_H_INCLUDED

#include <Arduino.h>

/* W5100 Sn_MR (socket mode register) values. */
class SnMR {
public:
  static const uint8_t TCP   = 0x21;   /* TCP mode (with ND/ACK-delay bit) */
  static const uint8_t UDP   = 0x02;   /* UDP mode */
  static const uint8_t MULTI = 0x80;   /* enable multicast (UDP) */
};

/* W5100 Sn_SR (socket status register) values. */
class SnSR {
public:
  static const uint8_t CLOSED      = 0x00;
  static const uint8_t INIT        = 0x13;
  static const uint8_t LISTEN      = 0x14;
  static const uint8_t ESTABLISHED = 0x17;
  static const uint8_t FIN_WAIT    = 0x18;
  static const uint8_t CLOSE_WAIT  = 0x1C;
};

#endif
