#! /bin/sh

c++ -Wall -Wextra -Werror -W -std=c++98 *.cpp
./a.out | cat -e
rm a.out