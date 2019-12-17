#ifndef MULTI
#define MULTI

#include <vector>

class Task
{
    int interval;
    virtual void run();
};

class Manager
{
    std::vector<Task *> tasks;
};

#endif