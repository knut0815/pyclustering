/**
*
* Copyright (C) 2014-2018    Andrei Novikov (pyclustering@yandex.ru)
*
* GNU_PUBLIC_LICENSE
*   pyclustering is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   pyclustering is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#pragma once


#include <memory>
#include <vector>

#include "cluster/cluster_data.hpp"

#include "definitions.hpp"


namespace ccore {

namespace clst {


/**
*
* @brief    Clustering results of K-Means algorithm that consists of information about allocated
*           clusters and centers of each cluster.
*
*/
class kmeans_data : public cluster_data {
private:
    dataset_ptr       m_centers = std::make_shared<dataset>();

public:
    /**
    *
    * @brief    Default constructor that creates empty clustering data.
    *
    */
    kmeans_data(void) = default;

    /**
    *
    * @brief    Copy constructor that creates clustering data that is the same to specified.
    *
    * @param[in] p_other: another clustering data.
    *
    */
    kmeans_data(const kmeans_data & p_other) = default;

    /**
    *
    * @brief    Move constructor that creates clustering data from another by moving data.
    *
    * @param[in] p_other: another clustering data.
    *
    */
    kmeans_data(kmeans_data && p_other) = default;

    /**
    *
    * @brief    Default destructor that destroys clustering data.
    *
    */
    virtual ~kmeans_data(void) = default;

public:
    /**
    *
    * @brief    Returns shared pointer to centers that correspond to allocated clusters.
    *
    */
    inline dataset_ptr centers(void) { return m_centers; }
};


}

}