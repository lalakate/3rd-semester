#ifndef FLAPPY_BIRD_COURSE_WORK_STATEMACHINE_H
#define FLAPPY_BIRD_COURSE_WORK_STATEMACHINE_H

#include <memory>
#include <stack>
#include "State.h"

typedef std::unique_ptr<State> StateRef;

class StateMachine {
public:
    StateMachine() {}

    ~StateMachine() {}

    void AddState(StateRef newState, bool isReplacing = true);

    void RemoveState();

    void ProcessStateChanges();

    StateRef &GetActiveState();

private:
    std::stack<StateRef> _states;
    StateRef _newState;
    bool _isRemoving;
    bool _isAdding, _isReplacing;
};


#endif //FLAPPY_BIRD_COURSE_WORK_STATEMACHINE_H
