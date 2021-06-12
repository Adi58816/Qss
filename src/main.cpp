#include "include/io.hpp"
#include <iostream>

/*!
 * @brief main function
 * @param[in] argc length of arguments
 * @param[in] argv arguments
 * @return int main function exit code
 */
int main(int argc, const char *argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "Usage: q <filename>\n");
		return 1;
	}

	File *file = new File(argv[1]);
	std::string file_content = file->read();
	delete file;
}
