configuration BasicSimAppC {}
implementation {

    components MainC;
    components BasicSimC as App;

    // TODO: components that implement radio sending and receiving
    App.Boot -> MainC.Boot;

    // Radio

    components ActiveMessageC;
    components new AMReceiverC(AM_RADIO_MSG) as Receiver;
    components new AMSenderC(AM_RADIO_MSG) as Sender;

    App.RadioControl -> ActiveMessageC;
    App.Packet -> ActiveMessageC;
    App.Receive -> Receiver;
    App.AMSend -> Sender;
}


