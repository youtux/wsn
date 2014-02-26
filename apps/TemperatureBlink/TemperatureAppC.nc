
configuration TemperatureAppC
{
}
implementation
{
  components MainC, TemperatureC as App, LedsC;
  components new TimerMilliC() as TimerTemperature;
  components new SimpleTMP102C();
  
  App -> MainC.Boot;

  App.TimerTemperature -> TimerTemperature;
  App.Leds -> LedsC;
  App.Temperature -> SimpleTMP102C;
}

