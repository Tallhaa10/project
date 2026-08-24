#pragma once

#define IMGUI_DEFINE_MATH_OPERATORS
#include "../ImGui/imgui.h"
#include "../ImGui/imgui_internal.h"
#include "../ImGui/backends/imgui_impl_dx11.h"
#include "../ImGui/backends/imgui_impl_win32.h"
#include "../offsets.hpp"
#include <d3d11.h>
#include <dxgi.h>
#include <unordered_map>
#include <string>
#include <vector>
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")

extern void save_config();
extern void load_config();
extern void set_current_config(const std::string& name);
extern std::string get_current_config();
extern std::vector<std::string> list_configs();
