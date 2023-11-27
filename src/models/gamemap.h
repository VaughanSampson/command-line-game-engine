

class GameMap {

    private:
        int width, height;
    
    public:
        GameMap(int setWidth, int setHeight); 

        int getWidth() const {
            return width;
        }

        int getHeight() const {
            return height;
        }
};