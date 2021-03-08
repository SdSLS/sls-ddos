#include <iostream>
#include <string>

int main()
{
	std::string ip;
	std::cout << "digite su ip (no hondureña):";
	std::cin >> ip;

	std::string cockmando = "ping " + ip;
	#if _WIN32
	cockmando += " -t -l 65500 > nul";
	#elif __linux__
	cockmando += " -c 99999 -q -s 65500";
	#endif
  
	std::cout << "Atacando la IP: " << ip << std::endl
		<< "Puerto: 4220" << std::endl
		<< "Potencia: 2.4tbps" << std::endl
		<< "Status: Tumbada" << std::endl
		<< "IP bajada por sls422 y braian samp samp...." << std::endl;
  
	system(cockmando.c_str());
  
  	return 0;
}
