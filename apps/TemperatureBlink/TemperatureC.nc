
#include "printfZ1.h"
#include "Timer.h"

module TemperatureC
{
  uses interface Timer<TMilli> as TimerTemperature;
  uses interface Read<uint16_t> as Temperature;
  uses interface Leds;
  uses interface Boot;
}
implementation
{
    event void Boot.booted()
    {      
    printfz1_init();    
    call TimerTemperature.startPeriodic( 1024 );
    }

    event void TimerTemperature.fired()
    {
    call Temperature.read();
    }  
    event void Temperature.readDone(error_t result, uint16_t data)
    {    
    float temperature = data/16; 
    printfz1("+ Temperature (%d)\n", data/16);
    if (temperature > 27)
     {
      call Leds.led0On();
      call Leds.led1Off();   
      printfz1 ("+ Temperature is over (%d)\n", data/16);}
    else
    {
     call Leds.led1On();
     call Leds.led0Off();
    }
}
}
