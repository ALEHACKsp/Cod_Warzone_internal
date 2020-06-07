#include "stdafx.h"
#include "ui.h"
#include "hotkey.h"
#include "imgui/imgui.h"
//#include "imgui/examples/imgui_impl_win32.h"
//#include "imgui/examples/imgui_impl_dx12.h"

namespace draw
{
	void ui()
	{
		ImGui::Begin("Internal", NULL, ImGuiWindowFlags_NoResize);
		ImGui::SetWindowSize(ImVec2(480, 550), ImGuiSetCond_Always);
		ImGui::Checkbox(u8"Box ESP", &hotkey::Box);
		ImGui::Checkbox(u8"Show Eyes", &hotkey::Eye);
		ImGui::Checkbox(u8"Show Bones", &hotkey::Bones);
		ImGui::Checkbox(u8"Show Names", &hotkey::Names);
		ImGui::Checkbox(u8"Show Distance", &hotkey::Distance);
		ImGui::Checkbox(u8"Is Visible", &hotkey::Visible);
		ImGui::Checkbox(u8"Radar", &hotkey::Rader);
		ImGui::Checkbox(u8"Show Crosshair", &hotkey::Crosshair);
		ImGui::Checkbox(u8"Show Friendlies", &hotkey::Friendly);
		ImGui::Checkbox(u8"Aimbot", &hotkey::AimBot);
		ImGui::Checkbox(u8"Show FOV",  &hotkey::ShowFov);
		ImGui::SliderInt(u8"Radar Zoom", &hotkey::RaderZoom, 10, 100);
		ImGui::SliderFloat(u8"Aimbot FOV", &hotkey::AimbotFov, 0, 9999);
		const char* AimbotPoint[] = { u8"Head", u8"Neck", u8"Waist", u8"Random" };
		const char* AimbotKey[]   = { u8"Left Button", u8"Right Button", u8"#F" };
		ImGui::Combo(u8"Aimbot Point", &hotkey::AimPos, AimbotPoint, 4);
		ImGui::Combo(u8"Aimbot Key", &hotkey::AimKey, AimbotKey, 3);
		ImGui::SliderInt(u8"Show Limit", &hotkey::ShowLimit, 50, 1000);
		ImGui::End();
	}
}