#include "unisparks/log.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#ifdef ARDUINO
#include <Arduino.h>
#endif

namespace unisparks {
static const char *level_str[] = {"ERROR", "INFO", "DEBUG"};
LogLevel logLevel = errorLevel;


void log(LogLevel level, const char *fmt, va_list args) {
  if (level > logLevel) {
    return;
  }
#ifdef ARDUINO
  char buf[128];
  Serial.print(level_str[static_cast<int>(level)]);
  Serial.print(": ");
  vsnprintf(buf, 128, fmt, args);
  Serial.println(buf);
#else
  printf("%s: ", level_str[static_cast<int>(level)]);
  vprintf(fmt, args);
  printf("\n");
#endif
  if (logLevel == fatalLevel) {
    abort();
  }
}

} // namespace unisparks

