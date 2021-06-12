/*!
 * @file
 * @brief header file with declaration of Debug class and defines
 * for debug settings
 */

#ifndef DEBUG_HPP
#define DEBUG_HPP

#define DEBUG

#ifdef DEBUG
#define DEBUG_PRINT_FILE_NAME_WHEN_ITS_OPENED
#define DEBUG_PRINT_FILE_CONTENT
#define DEBUG_PRINT_FILE_NAME_WHEN_ITS_CLOSED
#endif

#define DEBUG_LOG_PREFIX "[DEBUG] "

#include <iostream> // cerr
#include <string> // string

class DebugMessage
{
public:
    std::string message;

    DebugMessage(std::string _message);

    void show();
};

#endif // DEBUG_HPP
