
class Entity {

    private:
        int x, y;

    public:
        struct icon { 
            char c1; 
            char c2;
        };
        
        virtual void update() = 0;
        virtual icon getIcon() = 0;

};