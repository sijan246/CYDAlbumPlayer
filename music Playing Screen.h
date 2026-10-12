
// [BEGIN lopaka generated]
#include "image_Bluetooth_Idle_bits.h"
#include "image_next_bits.h"
#include "image_next_hover_bits.h"
#include "image_pause_bits.h"
#include "image_pause_hover_bits.h"
#include "image_Pin_back_arrow_bits.h"
#include "image_play_bits.h"
#include "image_play_hover_bits.h"
#include "image_prev_bits.h"
#include "image_prev_hover_bits.h"
#include "image_volume_muted_bits.h"
#include "image_volume_not_muted_bits.h"
void drawMusic_Play_Screen(void) {
    tft.fillScreen(0x0);
    // string 3
    tft.setTextColor(0x5FA);
    tft.setTextSize(1);
    tft.drawString("Music Player", 5, 2);
    // line 2
    tft.drawLine(-2, 0, -2, 0, 0x24BE);
    // next
    tft.drawBitmap(81, 98, image_next_bits, 19, 20, 0xEF7D);
    // prev
    tft.drawBitmap(28, 98, image_prev_bits, 19, 20, 0xEF7D);
    // pause
    tft.drawBitmap(54, 98, image_pause_bits, 19, 20, 0xEF7D);
    // volume not muted
    tft.drawBitmap(5, 100, image_volume_not_muted_bits, 18, 16, 0xFFFF);
    // rect 17
    tft.drawRect(4, 12, 120, 38, 0xFFFF);
    // rect 8
    tft.drawRect(16, 88, 95, 6, 0xFFFF);
    // Song full Time 
    tft.setTextColor(0xFFFF);
    tft.drawString("00:00:00", 78, 77);
    // song current Time 
    tft.drawString("00:00:00", 2, 77);
    // Song Title 
    tft.drawString("Song Title ........", 7, 15);
    // music duration lenth
    tft.drawRect(18, 90, 2, 2, 0xFFFF);
    // rect 13
    tft.drawRect(16, 64, 95, 6, 0xFFFF);
    // Volume level intecator
    tft.fillRect(18, 66, 9, 2, 0xFFFF);
    // Voleum Lebel
    tft.drawString("Volume", 5, 54);
    // volume_muted
    tft.drawBitmap(4, 101, image_volume_muted_bits, 18, 16, 0xFFFF);
    // Pin_back_arrow
    tft.drawBitmap(110, 104, image_Pin_back_arrow_bits, 10, 8, 0xFFFF);
    // Bluetooth_Idle
    tft.drawBitmap(115, 1, image_Bluetooth_Idle_bits, 5, 8, 0xFFFF);
    // rect 40
    tft.drawRect(107, 101, 16, 16, 0xFFFF);
    // play
    tft.drawBitmap(54, 98, image_play_bits, 19, 20, 0xFFFF);
    // next_hover
    tft.drawBitmap(81, 98, image_next_hover_bits, 19, 20, 0xFFFF);
    // prev_hover
    tft.drawBitmap(28, 98, image_prev_hover_bits, 19, 20, 0xFFFF);
    // pause_hover
    tft.drawBitmap(54, 98, image_pause_hover_bits, 19, 20, 0xFFFF);
    // play_hover
    tft.drawBitmap(54, 98, image_play_hover_bits, 19, 20, 0xFFFF);

}
// [END lopaka generated]

