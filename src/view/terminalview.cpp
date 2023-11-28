#include "terminalview.h"

TerminalView::TerminalView(GameMap* map): map(map) {

}

void TerminalView::Render() {
    std::cout << this -> map -> getWidth() << std::endl;
}

