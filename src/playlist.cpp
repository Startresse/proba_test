#include "playlist.h"

Playlist::Playlist(int length) : std::vector<int>(length),
                                 init_length(length) {
    for (int i = 0; i < init_length; ++i) {
        this->at(i) = i;
    }
}

void Playlist::display() {
    std::cout << "[";
    for (std::vector<int>::iterator it = begin(); it != end() - 1; it++)
        std::cout << *it << ", ";
    std::cout << back() <<"]" << std::endl;
}

int Playlist::get_current_size() {
    return end() - begin();
}

void Playlist::remove(int value) {
    int pos = value;
    while(pos >= 0) {
        if (this->at(pos) == value) {
            erase(begin() + pos);
            break;
        }
        --pos;
    }
}

bool Playlist::is_empty() {
    return get_current_size() == 0;
}

bool Playlist::test_if_two_in_a_row() {
    int current;
    int previous;
    while (!is_empty()) {
        return true;
    }
}