#pragma once 

#include <vector>
#include <string>
#include <iostream>
#include "file.hpp"

class MultimediaPlayer {
    std::vector<File*> data;
    
    MultimediaPlayer() = default;
public:
    static MultimediaPlayer* instance() { 
        static MultimediaPlayer* player = nullptr;
        if (!player) {
            player = new MultimediaPlayer();
            
        }
        return player;
    }
    MultimediaPlayer(const MultimediaPlayer& rhs) = delete;

    ~MultimediaPlayer() {}

    MultimediaPlayer& operator=(const MultimediaPlayer& rhs) = delete;

    void add(File* item) {
        data.push_back(item->clone());
    }

    void remove(size_t index) {
        if (index < data.size()) {
            delete data[index];
            data.erase(data.begin() + index);
        }

    }

    void print_all_file_states() {
        //TODO
    }
};