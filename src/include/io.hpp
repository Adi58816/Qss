/*!
 * @file
 * @brief header file with declaration of File class
 *
 * This header file contains File class which is needed
 * fast working with files and file system
 */

#ifndef IO_HPP
#define IO_HPP

#include <fstream> // ifstream, ofstream
#include <cassert> // assert

class File
{
public:
	std::string filename;

	File(std::string _filename);

	~File();

	std::string read();

	void write(std::string text);
};

#endif // IO_HPP
