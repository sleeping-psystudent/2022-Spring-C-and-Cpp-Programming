#ifndef devices_h
#define devices_h

#include <iostream>
/**
 * �[��̩�H���O
 */
class Observer {
public:
    /**
     * ��H�禡�G�q���ƥ󪺳B�z�欰
     * @param  {std::string} msg    : �q���T��
     * @param  {std::string} sender : �q�����ߦW��
     */
    virtual void notify(std::string msg, std::string sender) =0;
};

/**
 * �[���:PC�˸m
 */
class PCDevice : public Observer{
private:
    /**
     * PC��IP��}
     */
    std::string ipAddress;

public:
    //�]�w ipAddress
    PCDevice(std::string ipAddress);
    //�L�X �q���T�� PC with IP...
    void notify(std::string msg, std::string sender);
};


/**
 * �[���:iOS�˸m
 */
class iOSDevice : public Observer{
private:
    /**
     * iOS���˸m�N�X
     */
    std::string apnsToken;

public:
    //�]�w apnsToken
    iOSDevice(std::string apnsToken);
    //�L�X �q���T��  ios device...
    void notify(std::string msg, std::string sender);
};


/**
 * �[���:Android�˸m
 */
class AndroidDevice : public Observer{
private:
    /**
     * Android���˸m�N�X
     */
    std::string fcmToken;

public:
    //�]�w fcmToken
    AndroidDevice(std::string fcmToken);
    //�L�X �q���T�� android device...
    void notify(std::string msg, std::string sender);
};

#endif
