#pragma once

#include <unordered_map>
#include <string>
#include <Windows.h>

extern std::unordered_map<std::string, WORD> VKToHexMap;

extern std::unordered_map<WORD, std::string> HexToVKMap;
