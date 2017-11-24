#ifndef KEY_H
#define KEY_H


class Key {

public:
    enum CodeFormat {
        Desktop, DirectX
    };
    Key(const char &keyName);
    Key(const char &keyName, const CodeFormat &format);
    Key();
    void setName(char f);
    char getName();
    int getCode();
    void setCodeFormat(const CodeFormat &format);
    CodeFormat getFormat();
    void setFormat(const CodeFormat& format);
private:
    int m_keyCode;
    char m_keyName;
    CodeFormat m_format=Desktop;

    char keys[2] =              {'a','b'};
    int keyCodesDesktop[2] =    {0x41,0x42};
    int keyCodesDirect[2] =     {0x1E,0x30};
};

#endif // KEY_H
