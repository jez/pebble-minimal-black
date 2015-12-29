#ifndef WATCHFACE_H
#define WATCHFACE_H

void main_window_load(Window *window);
void main_window_unload(Window *window);
void tick_handler(struct tm *tick_time, TimeUnits units_changed);
void update_time();
void update_battery(Layer *layer, GContext *ctx);
void battery_handler(BatteryChargeState charge_state);
void init_watchface();
void deinit_watchface();

#endif