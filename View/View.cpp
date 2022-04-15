//
// Created by Pierre Forques on 11/04/2022.
//

#include "View.h"

View::View(Model *model){
    _window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "sort visu");
    _model = model;
}

void View::ClearWindow(){
    _window->clear(sf::Color(0, 0, 0));
}

void View::InitGraphicsList(std::vector<int> list){
    _model->_rectangles.clear();
    int sizeList = list.size();
    double max = *max_element(list.begin(), list.end());

    int coef = WINDOW_HEIGHT/max;

    int widthRect = WINDOW_WIDTH/sizeList;
    int x = 0;
    for(int element: list){
        sf::RectangleShape rectangle(sf::Vector2f(widthRect, -element*coef));
        rectangle.setPosition(sf::Vector2f(x, WINDOW_HEIGHT));
        rectangle.setOutlineColor(sf::Color(0, 0, 0));
        rectangle.setOutlineThickness(1);

        _model->_rectangles.push_back(rectangle);
        x = x+widthRect+1;
    }
}

void View::RenderList(){
    for(sf::RectangleShape rect: _model->_rectangles){
        _window->draw(rect);
    }
}

void View::SwapRectangle(int y){
    sf::Vector2f temp = _model->_rectangles[y].getPosition();
    _model->_rectangles[y].setPosition(_model->_rectangles[y+1].getPosition());
    _model->_rectangles[y+1].setPosition(temp);
}

void View::ColorRect(int index, sf::Color color){
    _model->_rectangles.at(index).setFillColor(color);
}