#include "include/debug.hpp" // DebugMessage

/*!
 * @brief constructor
 * @details initializes Debug class
 * @param[in] _message debug message
 */
DebugMessage::DebugMessage(std::string _message)
{
    this->message = _message;
}

/*!
 * @brief print message
 */
void DebugMessage::show()
{
    std::cerr << DEBUG_LOG_PREFIX << " " << this->message << std::endl;
}
