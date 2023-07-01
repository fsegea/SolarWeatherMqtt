char ssid[] = "";                       // WiFi Router ssid
char pass[] = "";                       // WiFi Router password

/****** MQTT Settings ********************************************************/

const char* mqtt_server = "10.10.0.100";       // MQTT Server (broker) address

/****** Additional Settings **************************************************/

// String LANGUAGE = 'SP';              // either 'DE' for German or 'EN' for English

  const char TEXT_AIR_PRESSURE[]      = "Presión";
  const char TEXT_RISING_FAST[]       = "en rápido aumento";
  const char TEXT_RISING[]            = "en aumento";
  const char TEXT_RISING_SLOW[]       = "en aumento lento";
  const char TEXT_STEADY[]            = "estable";
  const char TEXT_FALLING_SLOW[]      = "en lento descenso";
  const char TEXT_FALLING[]           = "en descenso";
  const char TEXT_FALLING_FAST[]      = "en rápido descenso";

  const char TEXT_ZAMBRETTI_FORECAST[]= "Pronóstico";
  const char TEXT_ZAMBRETTI_ACCURACY[]= "Precisión de pronóstico";
  const char TEXT_ZAMBRETTI_A[]       = "Clima estable";
  const char TEXT_ZAMBRETTI_B[]       = "Buen clima";
  const char TEXT_ZAMBRETTI_C[]       = "Mejorando";
  const char TEXT_ZAMBRETTI_D[]       = "Buen clima, pero inestable";
  const char TEXT_ZAMBRETTI_E[]       = "Buen clima con posibles lluvias";
  const char TEXT_ZAMBRETTI_F[]       = "Muy buen clima, mejorando";
  const char TEXT_ZAMBRETTI_G[]       = "Buen clima pero con posibles lloviznas";
  const char TEXT_ZAMBRETTI_H[]       = "Buen clima pero con lloviznas";
  const char TEXT_ZAMBRETTI_I[]       = "Lloviznas pero mejorando";
  const char TEXT_ZAMBRETTI_J[]       = "Variable mejora";
  const char TEXT_ZAMBRETTI_K[]       = "Buen clima con probables lluvias";
  const char TEXT_ZAMBRETTI_L[]       = "Inestable, mejorando después ";
  const char TEXT_ZAMBRETTI_M[]       = "Clima inestable con probables mejoras";
  const char TEXT_ZAMBRETTI_N[]       = "Lluvioso con intervalos";
  const char TEXT_ZAMBRETTI_O[]       = "Lluvioso, se vuelve inestable";
  const char TEXT_ZAMBRETTI_P[]       = "Variable con chubascos";
  const char TEXT_ZAMBRETTI_Q[]       = "Inestable con intervalos cortos de buen tiempo";
  const char TEXT_ZAMBRETTI_R[]       = "Inestable, luego lluvia";
  const char TEXT_ZAMBRETTI_S[]       = "Inestable, lluvia ocasionales";
  const char TEXT_ZAMBRETTI_T[]       = "Muy inestable, pequeños intervalos a veces";
  const char TEXT_ZAMBRETTI_U[]       = "Llueve a veces, luego empeora";
  const char TEXT_ZAMBRETTI_V[]       = "Lluvia ocasional con fuerte inestabilidad";
  const char TEXT_ZAMBRETTI_W[]       = "Precipitaciones frecuentes";
  const char TEXT_ZAMBRETTI_X[]       = "Muy inestable, lluvia";
  const char TEXT_ZAMBRETTI_Y[]       = "Tormenta con posibles mejoras";
  const char TEXT_ZAMBRETTI_Z[]       = "Tormenta, mucha lluvia";
  const char TEXT_ZAMBRETTI_0[]       = "¡Batería baja, por favor recargue!";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Sin pronóstico por el momento";

#define TEMP_CORR (-1)               // Manual correction of temp sensor
#define ELEVATION (20)              // Enter your elevation in m ASL to calculate rel pressure (ASL/QNH) at your place

#define sleepTimeMin (60)            // setting of deepsleep time in minutes (default: 10)

// NTP
#define NTP_SERVER      "ch.pool.ntp.org"  // Swiss NTP pool - use any in your country
#define TZ              1                  // (utc+) TZ in hours
#define DST_MN          60                 // use 60mn for summer time in some countries

#define TZ_SEC          ((TZ)*3600)
#define DST_SEC         ((DST_MN)*60)


/*MQTT

home/weather/solarweatherstation/tempc
home/weather/solarweatherstation/heatindexc
home/weather/solarweatherstation/dewpointc
home/weather/solarweatherstation/spreadc
home/weather/solarweatherstation/abshpa
home/weather/solarweatherstation/relhpa
home/weather/solarweatherstation/humi
home/weather/solarweatherstation/battv
home/weather/solarweatherstation/zambrettisays
home/weather/solarweatherstation/trend
home/weather/solarweatherstation/accuracy

***************************************************************************/
