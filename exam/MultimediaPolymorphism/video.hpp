#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "file.hpp"
#include "audio.hpp"

class Video : public File {
public:
    std::string subtitles = "";
    std::vector<Audio> audios;

    File* clone() const override {
        return new Video(*this);
    }
};