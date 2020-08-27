#include <iostream>

#include "playlist.h"

int main(void) {
    int length = 10;

    Playlist pl(length);

    pl.display();
    std::cout << "size : " << pl.get_current_size() << std::endl;

    pl.remove(2);
    pl.display();
    std::cout << "size : " << pl.get_current_size() << std::endl;
}