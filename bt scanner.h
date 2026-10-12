
// [BEGIN lopaka generated]
void drawBT_devices_Picker(void) {
    tft.fillScreen(0x0);
    // string 27
    tft.setTextColor(0xEF7D);
    tft.setTextSize(1);
    tft.drawString("BT SCAN", 3, 4);
    // line 29
    tft.drawLine(-2, 14, 132, 14, 0xEF7D);
    // string 30
    tft.drawString("Device 1", 3, 20);
    // string 30
    tft.drawString("Device 2", 3, 32);
    // string 30
    tft.drawString("Device 3", 3, 44);
    // navigation
    tft.drawRect(1, 18, 120, 11, 0xEF7D);
    // rect 34
    tft.drawRect(122, 17, 5, 103, 0xEF7D);
    // line 36
    tft.drawLine(-278, -15, -278, -15, 0xEF7D);
    // line 37
    tft.drawLine(124, 20, 124, 25, 0xEF7D);

}
// [END lopaka generated]
