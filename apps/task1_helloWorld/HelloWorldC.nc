module HelloWorldC {
  uses {
    interface Boot;
  }
}

implementation {

  event void Boot.booted()
  {
    dbg("my-channel", "Hello World!\n");
    //TODO: Try other dbg commads and see the output
    //dbg_clear("my-channel", "Hello World!\n");
    //dbgerror("my-channel", "Hello World!\n");
    //dbgerror_clear("my-channel", "Hello World!\n");
  }

}

