//
// Created by Pierre Forques on 11/04/2022.
//

#ifndef SORTVISUALISATION_VIEW_H
#define SORTVISUALISATION_VIEW_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "../Model/Model.h"

class View {
private:
    Model *_model;
    static const int WINDOW_WIDTH = 2000;
    static const int WINDOW_HEIGHT = 1500;
public:
    View(Model *model);
    sf::RenderWindow *_window;

    void ClearWindow();
    void InitGraphicsList(std::vector<int> list);
    void RenderList();
    void SwapRectangle(int index1);
    void ColorRect(int index, sf::Color color);
};


#endif //SORTVISUALISATION_VIEW_H
