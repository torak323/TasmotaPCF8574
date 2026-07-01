#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// ---- Basis ----
#ifndef USE_I2C
#define USE_I2C
#endif

// ---- PCF8574 / PCF8574A GPIO Expander ----
#ifndef USE_PCF8574
#define USE_PCF8574
#endif

// Optional: PCF8574 Eingänge als Sensor/MQTT nutzbar machen
#ifndef USE_PCF8574_SENSOR
#define USE_PCF8574_SENSOR
#endif

#ifndef USE_PCF8574_MQTTINPUT
#define USE_PCF8574_MQTTINPUT
#endif

// Optional: PCF8574 als Display/Input-Variante nutzbar
#ifndef USE_PCF8574_DISPLAYINPUT
#define USE_PCF8574_DISPLAYINPUT
#endif

// Optionaler PCF8574 Mode 2 Support
#ifndef USE_PCF8574_MODE2
#define USE_PCF8574_MODE2
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
