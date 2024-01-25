#ifndef OBSERVER_H
#define OBSERVER_H


class Observer {
public:
    virtual void update(int percentuale)= 0;
    virtual void attach()=0;
    virtual void detach()=0;
};

#endif 