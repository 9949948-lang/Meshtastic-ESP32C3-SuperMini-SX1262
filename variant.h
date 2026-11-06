#pragma once

// Кнопка управления (Назначена на свободный GPIO20)
#define BUTTON_PIN 20

// Аппаратная шина SPI LoRa (Строго по вашей текущей распайке)
#define PIN_LORA_SCK    8   // Пин [ Л ] 4 (GPIO8) — Зеленый
#define PIN_LORA_MISO   9   // Пин [ Л ] 5 (GPIO9) — Бело-синий
#define PIN_LORA_MOSI   6   // Пин [ Л ] 6 (GPIO6) — Бело-оранжевый
#define PIN_LORA_NSS    7   // Пин [ П ] 6 (GPIO7) — Бело-коричневый

// Линии управления радиочипом (Строго по вашей текущей распайке)
#define PIN_LORA_RESET  3   // Пин [ Л ] 8 (GPIO3) — Коричневый
#define PIN_LORA_BUSY   2   // Пин [ П ] 5 (GPIO2) — Бело-коричневый
#define PIN_LORA_DIO1   10  // Пин [ Л ] 7 (GPIO10) — Бело-зеленый

// Модель вашего радиочипа
#define LORA_LLCC68
