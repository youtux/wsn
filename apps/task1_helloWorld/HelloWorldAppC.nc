configuration HelloWorldAppC {}
implementation {
  components MainC;
  components HelloWorldC;
  HelloWorldC.Boot -> MainC.Boot; 
}


