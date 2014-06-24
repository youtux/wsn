module MulticastTokenTestC {
    uses {
        interface Boot;
        interface StdControl as MTControl;
        interface MulticastToken;
    }
}

implementation {
    event void Boot.booted() {
        dbg("Test", "Booted!\n");
        call MTControl.start();

        dbg("Test", "Setting black...\n");
        call MulticastToken.setColors(MT_BLACK);
        dbg("Test", "Read: %x\n", call MulticastToken.enabledColors());

        dbg("Test", "Enabling white...\n");
        call MulticastToken.enableColors(MT_WHITE);
        dbg("Test", "Read: %x\n", call MulticastToken.enabledColors());

        dbg("Test", "Disabling black...\n");
        call MulticastToken.disableColors(MT_BLACK);
        dbg("Test", "Read: %x\n", call MulticastToken.enabledColors());

        call MTControl.stop();
    }
}
