#include <pebble.h>
#include <watchface.h>

static void init();
static void deinit();
int main(void);

int main(void) {
  init();
  app_event_loop();
  deinit();
}

static void init(){
	init_watchface();

	//Register with TickerTimeService
	update_time();
	tick_timer_service_subscribe(MINUTE_UNIT, tick_handler);

	//Register for battery level updates
	battery_state_service_subscribe(battery_handler);
	//Initial Battery Update
	battery_handler(battery_state_service_peek());
}

static void deinit(){
	deinit_watchface();
}