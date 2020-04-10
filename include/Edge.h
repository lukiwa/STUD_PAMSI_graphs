//
// Created by lukasz-lap on 05.04.2020.
//

#ifndef STUD_PAMSI_GRAPHS_EDGE_H
#define STUD_PAMSI_GRAPHS_EDGE_H

#include <iostream>
#include <sstream>

/**
 * @brief Edge of the graph
 */
struct Edge {
    std::size_t from_id;
    std::size_t to_id;
    unsigned weight;

    friend std::ostream &operator<<(std::ostream &os, const Edge &obj) {


        os << "{" <<
           obj.from_id << " " <<
           obj.to_id << " " <<
           obj.weight << "}";


        return os;
    }
};

#endif //STUD_PAMSI_GRAPHS_EDGE_H

