

#pragma once

class Player {

    private:
        float angle = -90;
        float torque;

    public: 
        void Update(int horizontalAxisInput); 
        float getAngle() const;


};