#ifndef OBSERVER_H
#define OBSERVER_H


class Observer {
public:
    virtual void update(int percentuale, int numFile)= 0;
    virtual void attach()=0;
    virtual void detach()=0;
};

#endif 