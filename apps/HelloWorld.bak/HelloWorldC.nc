#include "Timer.h"

module HelloWorldC
{
    uses interface Timer<TMilli> as TimerBlink;
    uses interface Leds;
    uses interface Boot;

}
implementation
{
    event void Boot.booted()
    {
        call TimerBlink.startPeriodic(250);
    }
    event void TimerBlink.fired()
    {
        call Leds.led0Toggle();
        call Leds.led1Toggle();
        call Leds.led2Toggle();
    }
}

