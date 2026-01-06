#define MICROPY_HW_BOARD_NAME "PicUNO RP2040"
#define MICROPY_HW_MCU_NAME "rp2040"

#define MICROPY_HW_LED_STATUS (&pin_GPIO14)
#define MICROPY_HW_NEOPIXEL (&pin_GPIO17)

#define CIRCUITPY_BOARD_I2C         (1)
#define CIRCUITPY_BOARD_I2C_PIN     {{.scl = &pin_GPIO27, .sda = &pin_GPIO26}}

#define CIRCUITPY_BOARD_SPI         (1)
#define CIRCUITPY_BOARD_SPI_PIN     {{.clock = &pin_GPIO18, .mosi = &pin_GPIO19, .miso = &pin_GPIO16}}

#define CIRCUITPY_BOARD_UART        (1)
#define CIRCUITPY_BOARD_UART_PIN    {{.tx = &pin_GPIO0, .rx = &pin_GPIO1}}

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO27)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO26)

#define DEFAULT_SPI_BUS_SCK (&pin_GPIO18)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO19)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO16)

#define DEFAULT_UART_BUS_RX (&pin_GPIO1)
#define DEFAULT_UART_BUS_TX (&pin_GPIO0)
