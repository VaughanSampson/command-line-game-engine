

#pragma once

class Player {

    private:
        float angle = -90;
        float torque;
        bool rendered = false;

    public: 
        void Update(int horizontalAxisInput); 
        float getAngle() const;
        bool getRendered() const;


};