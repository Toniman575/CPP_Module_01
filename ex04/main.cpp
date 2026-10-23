/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 14:13:20 by asadik            #+#    #+#             */
/*   Updated: 2026/10/23 16:22:37 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Wrong number of arguments." << std::endl;
		return 1;
	}
	std::ifstream input_file(argv[1]);
	if (!input_file)
		return 1;

	input_file.seekg(0, input_file.end);
	int length = input_file.tellg();
	input_file.seekg(0, input_file.beg);
	char *buffer = new char[length + 1];
	buffer[length] = 0;
	
	input_file.read(buffer, length);
	if (!input_file)
		return 1;

	std::string output(buffer);
	std::string find(argv[2]);
	std::string replace(argv[3]);
	for (std::size_t pos = output.find(argv[2]); pos != std::string::npos;
		 pos = output.find(argv[2])) {
		output.erase(pos, find.length());
		output.insert(pos, replace);
	}

	std::ofstream output_file((std::string(argv[1]) + ".replace").c_str());
	if (output_file) {
		output_file << output;
	}
	
	input_file.close();
	output_file.close();
	delete[] buffer;
}