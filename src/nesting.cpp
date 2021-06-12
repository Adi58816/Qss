#include "include/nesting.hpp"

/*!
 * @brief splits string
 * @details this function splits string into an array of strings
 * @param[in] str string to split
 * @return array of strings (splited string)
 */
std::vector<std::string> split_string(std::string str)
{
  std::vector<std::string> result;
  std::string current_element;
  for (char element: str)
  {
    if (element == ' ')
    {
      result.push_back(current_element);
      current_element = "";
    }
    else
    {
      current_element += element;
    }
  }
  return result;
}

/*!
 * @brief constructor
 * @details initializes class
 * @param[in] _code css code to make nest tree from
 */
CssNesting::CssNesting(std::string _code)
{
  this->code = _code;
}
