//
// Created by Pierre Forques on 11/04/2022.
//

#ifndef SORTVISUALISATION_SORTCONTROLLER_H
#define SORTVISUALISATION_SORTCONTROLLER_H


#include <vector>
#include <iostream>
#include "../View/View.h"

class SortController {
private:
    View *_view;
    Model *_model;
    std::vector<int> GenerateRandomList(int size);

public:
    SortController(View *view, Model *model);
    void BubbleSort();
};


#endif //SORTVISUALISATION_SORTCONTROLLER_H
