/*!
 * @file
 * @brief header file with declaration of CssNesting class
 *
 * This header file contains CssNesting class which is needed
 * for making a tree (json) from .q preprocessor code
 */

#ifndef NESTING_HPP
#define NESTING_HPP

#include "../../libs/json.hpp" // json
using namespace nlohmann;

std::vector<std::string> split_string(std::string str);

class CssNesting
{
public:
    std::string code;
    json cssNestingTree;

    CssNesting(std::string _code);
    void generate_tree();
    json get_tree();
};

#endif // NESTING_HPP
