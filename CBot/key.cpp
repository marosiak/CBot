#include "key.h"

Key::Key(const char &keyName){
    m_keyName = keyName;
    Key();
}

Key::Key(const char &keyName, const CodeFormat &format) {
    m_keyName = keyName;
    m_format = format;
    Key();
}

Key::Key() {
    for(int i=0; i<2; i++){
        if(keys[i] == m_keyName){
            switch(getFormat()){
            case Desktop:
                m_keyCode = keyCodesDesktop[i];
                break;
            case DirectX:
                m_keyCode = keyCodesDirect[i];
                break;
            default:
                m_keyCode = keyCodesDesktop[i];
                break;
            }
        }
    }
}

int Key::getCode() {
    return m_keyCode;
}

void Key::setName(const char &f){
    m_keyName = f;
}

char Key::getName() {
    return m_keyName;
}

void Key::setCodeFormat(const Key::CodeFormat &format) {
    m_format = format;
}

Key::CodeFormat Key::getFormat(){
    return m_format;
}

void Key::setFormat(const Key::CodeFormat &format){
    m_format = format;
}
