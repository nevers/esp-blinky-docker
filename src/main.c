#include "os_type.h"
#include "eagle_soc.h"
#include "c_types.h"
#include "gpio.h"
#include "osapi.h"

#define DELAY_MS 1000
#define REPEATING 1

static volatile os_timer_t timer_id;

void handle_timeout(void *arg) {
    if (GPIO_REG_READ(GPIO_OUT_ADDRESS) & BIT2)
        gpio_output_set(0, BIT2, BIT2, 0); //Set GPIO2 to LOW
    else 
        gpio_output_set(BIT2, 0, BIT2, 0); //Set GPIO2 to HIGH
}

void ICACHE_FLASH_ATTR user_init()
{
    // Initialize the GPIO subsystem.
    gpio_init();

    //Set GPIO2 to output mode
    PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO2_U, FUNC_GPIO2);

    //Set GPIO2 low
    gpio_output_set(0, BIT2, BIT2, 0);

    //Disarm timer
    os_timer_disarm(&timer_id);

    //Setup timer
    os_timer_setfn(&timer_id, (os_timer_func_t *)handle_timeout, NULL);

    //Arm the timer register &timer_id. is the pointer
    os_timer_arm(&timer_id, DELAY_MS, REPEATING);
}
