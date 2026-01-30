#include "UnityEngine_Rendering_UI_DebugUIHandlerCanvas___c.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_Rebuild_b__11_0(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Rebuild>b__11_0", std::vector<std::string> { "UnityEngine.Rendering.DebugUI/Widget" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas___c::_ActivatePanel_b__14_0(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerPanel* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ActivatePanel>b__14_0", std::vector<std::string> { "UnityEngine.Rendering.UI.DebugUIHandlerPanel" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
