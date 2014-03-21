configuration InspectVariableAppC {}
implementation {
  components MainC;
  components InspectVariableC;
  InspectVariableC.Boot -> MainC.Boot; // explicit wiring 
}
