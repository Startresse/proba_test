#pragma once

#include <iostream>
#include <vector>
#include <time.h>

class Playlist : std::vector<int> {
    private:
        int init_length;

    public:
        Playlist(int);

        void display();
        void remove(int);
        void replenish();
        bool test_if_two_in_a_row();
        bool is_empty();
        int get_random_tune();
};