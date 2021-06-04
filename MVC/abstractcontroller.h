#ifndef ABSTRACTCONTROLLER_H
#define ABSTRACTCONTROLLER_H


class AbstractController
{
public:
    AbstractController();
    virtual void increaseValue() = 0;
    virtual void decreaseValue() = 0;
    virtual void setValue(int value) = 0;
};

#endif // ABSTRACTCONTROLLER_H
