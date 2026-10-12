
// [BEGIN lopaka generated]
#include "image_Pin_back_arrow_bits.h"
void drawSong_Picker(void) {
    tft.fillScreen(0x0);
    // string 18
    tft.setTextColor(0xEF7D);
    tft.setTextSize(1);
    tft.drawString("Song List", 4, 2);
    // line 20
    tft.drawLine(-3, 12, 133, 12, 0xEF7D);
    // string 22
    tft.drawString("Song1.mp3", 3, 19);
    // string 21
    tft.drawString("Song2.mp3", 4, 31);
    // string 21
    tft.drawString("Song2.mp3", 4, 42);
    // string 21
    tft.drawString("Song2.mp3", 3, 64);
    // string 21
    tft.drawString("Song2.mp3", 3, 53);
    // rect 26
    tft.drawRect(123, 16, 5, 108, 0xEF7D);
    // navigator
    tft.drawRect(0, 17, 121, 12, 0xEF7D);
    // line 28
    tft.drawLine(125, 19, 125, 27, 0xEF7D);
    // Pin_back_arrow
    tft.drawBitmap(108, 115, image_Pin_back_arrow_bits, 10, 8, 0xFFFF);
    // rect 39
    tft.drawRect(106, 113, 14, 12, 0xFFFF);

}
// [END lopaka generated]
