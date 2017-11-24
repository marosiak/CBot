#include "cbot.h"

CBot::CBot(){
    if(getEchoMode() == Default){
        std::cout << "CBot by orzel1244 is running"<<std::endl;
    }
}
CBot::CBot(const EchoMode &mode) {
    setEchoMode(mode);
    CBot();
}

void CBot::setEchoMode(const EchoMode &m){
    m_echoMode = m;
}

CBot::EchoMode CBot::getEchoMode() {
    return m_echoMode;
}
