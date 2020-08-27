#pragma once

#include <iostream>
#include <vector>

class Playlist : std::vector<int> {
    private:
        int init_length;

    public:
        Playlist(int);

        void display();
        int get_current_size();
        void remove(int);
        bool test_if_two_in_a_row();
        bool is_empty();
};