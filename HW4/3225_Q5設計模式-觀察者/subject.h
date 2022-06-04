#ifndef subject_h
#define subject_h
#include "observer.h"
#include <vector>

/**
 * �q�����ߡA�t�d�޲z�q�\�̡A�H�η�notify��k�QĲ�o�ɡA�t�d�q���Ҧ������q�\�̡C
 */
class Subject {
private:
    /**
     * �[��̶��X
     */
    std::vector<Observer *> observers;
    /**
     * �q�����ߦW��
     */
    std::string name;

public:
    /**
     * �غc��
     *
     * @param  {std::string} name : �q�����ߦW��
     */
    Subject(std::string name);
    /**
     * �W�[�[���
     * @param  {Observer*} observer : �[���
     */
    void addObserver(Observer *observer);
    /**
     * ��Ҧ��[��̵o�X�q��
     * �O�C���[��̵o�X(notify)�q���T��
     * @param  {std::string} message : �T��
     */
    void notifyObservers(std::string message);
};

#endif
