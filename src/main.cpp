#include <iostream>

#include "playlist.h"

#include <time.h>
#include <math.h>

int main(void) {
    srand(time(NULL));

    for (int size_increase = 1; size_increase < 20; size_increase++) {
        int playlist_length = pow(2, size_increase);
        int nbr_of_tries = 100000;

        Playlist pl(playlist_length);

        int nbr_of_success = 0;
        for (int i = nbr_of_tries; i > 0; i--) {
            if (pl.test_if_two_in_a_row()) {
                nbr_of_success++;
            }
        }
        std::cout << "success rate : " <<
        (static_cast<float>(nbr_of_success) / static_cast<float>(nbr_of_tries)) * 100
        << "% for playlist of length " << playlist_length << std::endl;
    }

}