#ifndef __BSP_H
#define __BSP_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "main.h"
	 
#define BSP_ERROR_NONE                    0
#define BSP_ERROR_NO_INIT                -1
#define BSP_ERROR_WRONG_PARAM            -2
#define BSP_ERROR_BUSY                   -3
#define BSP_ERROR_PERIPH_FAILURE         -4
#define BSP_ERROR_COMPONENT_FAILURE      -5
#define BSP_ERROR_UNKNOWN_FAILURE        -6
#define BSP_ERROR_UNKNOWN_COMPONENT      -7
#define BSP_ERROR_BUS_FAILURE            -8
#define BSP_ERROR_CLOCK_FAILURE          -9
#define BSP_ERROR_MSP_FAILURE            -10
#define BSP_ERROR_FEATURE_NOT_SUPPORTED  -11

/* BSP OSPI error codes */
#define BSP_ERROR_OSPI_SUSPENDED          -20
#define BSP_ERROR_OSPI_MMP_UNLOCK_FAILURE -21
#define BSP_ERROR_OSPI_MMP_LOCK_FAILURE   -22

/* BSP BUS error codes */
#define BSP_ERROR_BUS_TRANSACTION_FAILURE -100
#define BSP_ERROR_BUS_ARBITRATION_LOSS    -101
#define BSP_ERROR_BUS_ACKNOWLEDGE_FAILURE -102
#define BSP_ERROR_BUS_PROTOCOL_FAILURE    -103
#define BSP_ERROR_BUS_MODE_FAULT          -104
#define BSP_ERROR_BUS_FRAME_ERROR         -105
#define BSP_ERROR_BUS_CRC_ERROR           -106
#define BSP_ERROR_BUS_DMA_FAILURE         -107

#define LCD_INSTANCES_NBR 1U

/* LCD orientations */
#define LCD_ORIENTATION_PORTRAIT          0U
#define LCD_ORIENTATION_LANDSCAPE         1U
#define LCD_ORIENTATION_PORTRAIT_ROT180   2U
#define LCD_ORIENTATION_LANDSCAPE_ROT180  3U

/* LCD colors */
#define LCD_COLOR_BLUE          0x001FU
#define LCD_COLOR_GREEN         0x07E0U
#define LCD_COLOR_RED           0xF800U
#define LCD_COLOR_CYAN          0x07FFU
#define LCD_COLOR_MAGENTA       0xF81FU
#define LCD_COLOR_YELLOW        0xFFE0U
#define LCD_COLOR_LIGHTBLUE     0x841FU
#define LCD_COLOR_LIGHTGREEN    0x87F0U
#define LCD_COLOR_LIGHTRED      0xFC10U
#define LCD_COLOR_LIGHTCYAN     0x87FFU
#define LCD_COLOR_LIGHTMAGENTA  0xFC1FU
#define LCD_COLOR_LIGHTYELLOW   0xFFF0U
#define LCD_COLOR_DARKBLUE      0x0010U
#define LCD_COLOR_DARKGREEN     0x0400U
#define LCD_COLOR_DARKRED       0x8000U
#define LCD_COLOR_DARKCYAN      0x0410U
#define LCD_COLOR_DARKMAGENTA   0x8010U
#define LCD_COLOR_DARKYELLOW    0x8400U
#define LCD_COLOR_WHITE         0xFFFFU
#define LCD_COLOR_LIGHTGRAY     0xD69AU
#define LCD_COLOR_GRAY          0x8410U
#define LCD_COLOR_DARKGRAY      0x4208U
#define LCD_COLOR_BLACK         0x0000U
#define LCD_COLOR_BROWN         0xA145U
#define LCD_COLOR_ORANGE        0xFD20U

int BSP_LCD_Init(uint32_t Instance, uint32_t Orientation);
int BSP_LCD_DeInit(uint32_t Instance);
int BSP_LCD_DisplayOn(uint32_t Instance);
int BSP_LCD_DisplayOff(uint32_t Instance);
int BSP_LCD_SetBrightness(uint32_t Instance, uint32_t Brightness);
int BSP_LCD_GetBrightness(uint32_t Instance, uint32_t *Brightness);
int BSP_LCD_GetXSize(uint32_t Instance, uint32_t *Xsize);
int BSP_LCD_GetYSize(uint32_t Instance, uint32_t *Ysize);
int BSP_LCD_SetActiveLayer(uint32_t Instance, uint32_t LayerIndex);
int BSP_LCD_DrawBitmap(uint32_t Instance, uint32_t Xpos, uint32_t Ypos, uint8_t *pBmp);
int BSP_LCD_FillRGBRect(uint32_t Instance, uint32_t Xpos, uint32_t Ypos, uint8_t *pData, uint32_t Width, uint32_t Height);
int BSP_LCD_DrawHLine(uint32_t Instance, uint32_t Xpos, uint32_t Ypos, uint32_t Length, uint32_t Color);
int BSP_LCD_DrawVLine(uint32_t Instance, uint32_t Xpos, uint32_t Ypos, uint32_t Length, uint32_t Color);
int BSP_LCD_FillRect(uint32_t Instance, uint32_t Xpos, uint32_t Ypos, uint32_t Width, uint32_t Height, uint32_t Color);
int BSP_LCD_ReadPixel(uint32_t Instance, uint32_t Xpos, uint32_t Ypos, uint32_t *Color);
int BSP_LCD_WritePixel(uint32_t Instance, uint32_t Xpos, uint32_t Ypos, uint32_t Color);
int BSP_LCD_GetFormat(uint32_t Instance, uint32_t *Format);

#ifdef __cplusplus
}
#endif
#endif /* __BSP_H */
