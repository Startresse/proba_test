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

void Playlist::remove(int value) {
    int pos = std::min<int>(value, size() - 1);
    while(pos >= 0) {
        if (this->at(pos) == value) {
            erase(begin() + pos);
            break;
        }
        --pos;
    }
}

void Playlist::replenish() {
    clear();
    for (int i = 0; i < init_length; i++) {
        this->push_back(i);
    }
}

bool Playlist::is_empty() {
    return size() == 0;
}

int Playlist::get_random_tune() {
    return at(rand() % size());
}

bool Playlist::test_if_two_in_a_row() {
    bool result = false;
    int current = get_random_tune();
    remove(current);
    int previous;
    while (!is_empty()) {
        previous = current;
        current = get_random_tune();
        remove(current);
        if (current == previous + 1)
            result = true;
            break;
    }
    replenish();
    return result;
}