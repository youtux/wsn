
configuration HelloWorldAppC
{
}
implementation
{
  components MainC, HelloWorldC as App, LedsC;
  components new TimerMilliC() as TimerBlink;
  App -> MainC.Boot;


  App.TimerBlink -> TimerBlink;
  App.Leds -> LedsC;
}

