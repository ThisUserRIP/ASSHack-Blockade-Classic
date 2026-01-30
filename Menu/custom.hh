#pragma once
#define IMGUI_DEFINE_MATH_OPERATORS
#define USE(x) using namespace x
#include "..\\ImGUI\imgui.h"
#include "..\\ImGUI\imgui_internal.h"

inline ImFont* icons;

class c_custom {
public:
    auto tab(const char* icon, const char* label, bool selected, ImVec2 size) -> bool;
};
inline auto *custom = new c_custom;
