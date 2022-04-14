#include <iostream>
#include "View/View.h"
#include "Controller/SortController.h"

int main() {
    Model *model = new Model;
    View *view = new View(model);
    SortController controller(view, model);

    sf::RenderWindow *window = view->_window;
    view->InitGraphicsList(model->_list);

    while(window->isOpen()){
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
            if (event.type == sf::Event::KeyReleased){
                if (event.key.code == sf::Keyboard::Escape){
                    controller.BubbleSort();
                }
            }
        }
        view->ClearWindow();
        view->RenderList();
        window->display();
    }
    return 0;
}
