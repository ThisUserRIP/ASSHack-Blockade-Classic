#include "UnityEngine_Rendering_UI_DebugUIHandlerContainer.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering.UI", "DebugUIHandlerContainer");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetFirstItem()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstItem");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetLastItem()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLastItem");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)returnValue;
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerContainer::IsDirectChild(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDirectChild", std::vector<std::string> { "UnityEngine.Rendering.UI.DebugUIHandlerWidget" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)widget;
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
mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget>* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerContainer::GetActiveChildren()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActiveChildren");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget>*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerContainer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
