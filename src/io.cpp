#include "include/io.hpp" // File
#include "include/error.hpp" // Error

/*!
 * @brief constructor
 * @details initializes class
 * @param[in] _filename name of file to work with
 */
File::File(std::string _filename)
{
    // safe filename to object
    this->filename = _filename;
}


/*!
 * @brief read file function
 * @return content content of file
 */
std::string File::read()
{
	std::ifstream file(this->filename);
	if (!file.is_open())
  {
    Error error = Error("FileDoesNotExists", "File " + this->filename + " does not exists!");
    error.summon();
  }

  std::string content,
	            line;

  while (getline(file, line))
	{
		content += line + '\n';
	}
	return content;
}



File::~File()
{

}
