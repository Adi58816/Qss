/*!
 * @file
 * @brief header file with declaration of Error class
 *
 * This header file contains Error class which is needed
 * for summoning exceptions messages while compilation works
 */

#ifndef ERROR_HPP
#define ERROR_HPP

#include <string> // string
#include <iostream> // cerr

class Error
{
public:
    std::string type,
        message;

    Error(std::string _type, std::string _message);

    void summon();
};

#endif // ERROR_HPP
