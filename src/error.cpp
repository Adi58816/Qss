#include "include/error.hpp" // Error

/*!
 * @brief constructor
 * @details initializes Error class
 * @param[in] _type error type
 * @param[in] _message error message
 */
Error::Error(std::string _type, std::string _message)
{
    this->type = _type;
    this->message = _message;
}

/*!
 * @brief summon the exception (error)
 */
void Error::summon()
{
    std::cerr << "\x1B[31m" << this->type << "Error: " << this->message << "\033[0m" << std::endl;
    exit(1);
}
