#include <stdint.h>
#include "stm32f4xx_hal.h"
uint8_t i2cDeviceAddr = 0x4E;

I2C_HandleTypeDef hi2cx;
extern I2C_HandleTypeDef hi2c1; //* Change "hi2c1" like hi2c2, hi2c3... according to which i2c type(i2c1,i2c2...) you use, default is hi2c1.
                                //That I2C_HandleTypeDef hi2c1 comes from main.c*.
static void hi2cx_define(void)
{
	hi2cx = hi2c1;	//* Change "hi2c1" like hi2c2, hi2c3... according to which i2c type you use, default is hi2c1.
}

//define LCD_16x2
//#define LCD_16x4
//#define LCD_20x2
#define LCD_20x4

/**
*@brief: Buffer data character number.
*@val: Default: BFR_MAX=100 (Maksimum BFR_MAX=255).
*/
static const uint8_t BFR_MAX = 100; //*Change it if you want to use a different value.

/*************************END OF FILE*****************************/
