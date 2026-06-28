# Native Ethernet Library For Teensy 4.1

Teensy 4.1 is automatically configured for Ethernet use.
This library uses my FNET fork and is a required download.
https://github.com/vjmuzik/FNET

## NXP MIMXRT1060-EVKB (i.MX RT1062)

NativeEthernet itself needs no changes for the MIMXRT1060-EVKB — all the
board-specific Ethernet bring-up lives in FNET. Use the EVKB-aware FNET fork
(https://github.com/newdigate/FNET), which adds the EVKB KSZ8081 PHY (address
2, reset on AD_B0_09, MDC/MDIO on EMC_40/EMC_41). On the EVKB the RJ45 is J43.
Builds clean for `teensy:avr:mimxrt1060evkb`; the bring-up is derived from the
NXP SDK and should be validated on real hardware.


Just change <Ethernet.h> to <NativeEthernet.h> to use this library and the rest is taken care of.
The API is a direct replacement for the normal Ethernet.h library aside from sketches that use direct calls to w5100.h

I've done quite a bit of testing to ensure compatibility as much as possible, but if you find any issues please report them.


http://www.pjrc.com/teensy/td_libs_Ethernet.html
