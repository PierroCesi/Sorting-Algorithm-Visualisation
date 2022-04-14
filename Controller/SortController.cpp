//
// Created by Pierre Forques on 11/04/2022.
//

#include "SortController.h"

SortController::SortController(View *view, Model *model){
    srand(time(0));
    _view = view;
    _model = model;
    _model->_list = GenerateRandomList(30);
}

std::vector<int> SortController::GenerateRandomList(int size){
    std::vector<int> list;
    for(int i(0); i<size; ++i){
        list.push_back(rand()%100);
    }
    return list;
}

void SortController::BubbleSort(){
    sf::Color aColorIdk(45, 67, 86);
    sf::Color white(255, 255, 255);

    int listSize = _model->_rectangles.size();
    sf::RectangleShape temp;

    for(int i(0); i<listSize-1; ++i){
        for(int y(0); y<listSize-1; ++y){
            if(_model->_rectangles[y+1].getSize().y > _model->_rectangles[y].getSize().y){
                _view->SwapRectangle(y);
                std::swap(_model->_rectangles[y], _model->_rectangles[y+1]);
            }

            _view->ClearWindow();
            _view->RenderList();
            _view->_window->display();
        }
        _view->ColorRect(listSize-i-1, aColorIdk);
    }

    for(int i(0); i<listSize; ++i){
        _view->ColorRect(i, sf::Color(0,255,0));
        _view->ClearWindow();
        _view->RenderList();
        _view->_window->display();
    }
}
