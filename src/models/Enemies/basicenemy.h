#include "../entity.h"

class BasicEnemy : private Entity {

    public:
        BasicEnemy(int x, int y);
        void Update();

};