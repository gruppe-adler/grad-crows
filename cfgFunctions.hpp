class GRAD_crows {

    class crows_client {
            file = grad-crows\crows\client;

            class crowCreate {};
            class crowGetWp {};
            class crowLoop {};
            class crowMoveNear {};
            class crowMoveTo {};
            class setBirdTarget {};
            class startleBirds {};
    };

    class crows_server {
            file = grad-crows\crows\server;

            class initCrows {};
            class registerShot {};
    };

};
