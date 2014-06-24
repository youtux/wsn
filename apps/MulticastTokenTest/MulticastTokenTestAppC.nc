configuration MulticastTokenTestAppC {}

implementation {
	components MulticastTokenTestC as App;
    components MainC;
    components MulticastTokenC;

    App -> MainC.Boot; // Component_uses -> Component_provides
    App.MTControl -> MulticastTokenC;
    App.MulticastToken -> MulticastTokenC;
}
