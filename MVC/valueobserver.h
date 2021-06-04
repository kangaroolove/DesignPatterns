#ifndef VALUEOBSERVER_H
#define VALUEOBSERVER_H


class ValueObserver
{
public:
    ValueObserver();
    virtual void updateValue(int value) = 0;
};

#endif // VALUEOBSERVER_H
