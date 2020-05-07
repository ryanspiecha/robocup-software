#pragma once

#include "Robot.hpp"
#include "SDL.h"
#include "GamepadController.hpp"
#include "InputDevice.hpp"
#include "Node.hpp"
#include <Context.hpp>

using namespace std;

class ManualControlNode : public Node {
public:
    explicit ManualControlNode(Context* context);

    void run() override; 

    std::vector<InputDevice*> _inputDevices;
    
    

private:
    void initialize();
    
    Context* _context;
    
};