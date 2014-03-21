module InspectVariableC {
  uses {
    interface Boot;
  }
}

implementation {

  uint8_t counter;

  event void Boot.booted()
  {
    counter = TOS_NODE_ID*10;
  }

}

