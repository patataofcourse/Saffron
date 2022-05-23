#ifndef CONFIG_H
#define CONFIG_H

#include <3ds.h>
#include <CTRPluginFramework.hpp>

#include <string>
#include <map>

struct Config {
    typedef std::map<u16, std::string> map;

    map tickflows;
    bool has_map = false;

    Config();
    Config(map map);
    static Config* FromFile(std::string fname);
};

extern Config* config;

#endif