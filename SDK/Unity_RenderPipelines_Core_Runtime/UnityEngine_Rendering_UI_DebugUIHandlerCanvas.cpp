#include "UnityEngine_Rendering_UI_DebugUIHandlerCanvas.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering.UI", "DebugUIHandlerCanvas");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ResetAllHierarchy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetAllHierarchy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::Rebuild()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rebuild");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::Traverse(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_IContainer* container, UnityEngine_CoreModule::UnityEngine::Transform* parentTransform, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* parentUIHandler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Traverse", std::vector<std::string> { "UnityEngine.Rendering.DebugUI/IContainer", "UnityEngine.Transform", "UnityEngine.Rendering.UI.DebugUIHandlerWidget" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)container;
	params[1] = (intptr_t)parentTransform;
	params[2] = (intptr_t)parentUIHandler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::GetWidgetFromPath(mscorlib::System::String* queryPath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetWidgetFromPath", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)queryPath;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ActivatePanel(int32_t index, bool tryAndKeepSelection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivatePanel", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&tryAndKeepSelection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ChangeSelection(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget, bool fromNext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeSelection", std::vector<std::string> { "UnityEngine.Rendering.UI.DebugUIHandlerWidget", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)widget;
	params[1] = (intptr_t)&fromNext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectPreviousItem()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectPreviousItem");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::SelectNextItem()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectNextItem");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ChangeSelectionValue(float multiplier)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeSelectionValue", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&multiplier;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::ActivateSelection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivateSelection");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::HandleInput()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleInput");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas::_ActivatePanel_b__14_1(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* w)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ActivatePanel>b__14_1", std::vector<std::string> { "UnityEngine.Rendering.UI.DebugUIHandlerWidget" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)w;
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
