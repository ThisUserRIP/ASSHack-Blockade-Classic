#include "custom.hh"


auto c_custom::tab(const char* icon, const char* label, bool selected, ImVec2 size_arg) -> bool {
    USE(ImGui);

    ImGuiWindow* window = GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID(label);
    const ImVec2 label_size = CalcTextSize(label, NULL, true);
    ImGuiButtonFlags flags = 0;

    ImVec2 pos = window->DC.CursorPos;
    if ((flags & ImGuiButtonFlags_AlignTextBaseLine) && style.FramePadding.y < window->DC.CurrLineTextBaseOffset) // Try to vertically align buttons that are smaller/have no padding so that text baseline matches (bit hacky, since it shouldn't be a flag)
        pos.y += window->DC.CurrLineTextBaseOffset - style.FramePadding.y;
    ImVec2 size = CalcItemSize(size_arg, label_size.x + style.FramePadding.x * 2.0f, label_size.y + style.FramePadding.y * 2.0f);

    const ImRect bb(pos, pos + size);
    ItemSize(size, style.FramePadding.y);
    if (!ItemAdd(bb, id))
        return false;

    if (g.CurrentItemFlags & ImGuiItemFlags_ButtonRepeat)
        flags |= ImGuiButtonFlags_Repeat;
    bool hovered, held;
    bool pressed = ButtonBehavior(bb, id, &hovered, &held, flags);

    // Render
    ImU32 col = ImColor(0, 0, 0, 0);
    if (selected) col = ImColor(238, 58, 57, 255);
    

    RenderFrame(bb.Min, bb.Max, col, true, style.FrameRounding);

    window->DrawList->AddText(bb.Min + ImVec2(60, 11), ImColor(255, 255, 255, 255), label);
    window->DrawList->AddText(icons, 16.f, bb.Min + ImVec2(20, 9.8f), ImColor(255, 255, 255, 255), icon);

    return pressed;
}
