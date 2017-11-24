#ifndef CBOT_H
#define CBOT_H

#include <iostream>

class CBot {

public:
    enum EchoMode { Default, Silent };

    CBot(const EchoMode &mode);
    CBot();

    void setEchoMode(const EchoMode &m);
    EchoMode getEchoMode();
private:
    EchoMode m_echoMode=Default;
};

#endif // CBOT_H
