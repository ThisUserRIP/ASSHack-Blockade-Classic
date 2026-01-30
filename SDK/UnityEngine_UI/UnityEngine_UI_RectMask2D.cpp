#include "UnityEngine_UI_RectMask2D.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::RectMask2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "RectMask2D");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::RectMask2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector4 UnityEngine_UI::UnityEngine::UI::RectMask2D::get_padding()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_padding");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::set_padding(UnityEngine_CoreModule::UnityEngine::Vector4 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_padding", std::vector<std::string> { "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2Int UnityEngine_UI::UnityEngine::UI::RectMask2D::get_softness()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_softness");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2Int ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2Int));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2Int>(*(UnityEngine_CoreModule::UnityEngine::Vector2Int*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::set_softness(UnityEngine_CoreModule::UnityEngine::Vector2Int value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_softness", std::vector<std::string> { "UnityEngine.Vector2Int" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UIModule::UnityEngine::Canvas* UnityEngine_UI::UnityEngine::UI::RectMask2D::get_Canvas()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Canvas");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UIModule::UnityEngine::Canvas*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_UI::UnityEngine::UI::RectMask2D::get_canvasRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_canvasRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::RectTransform* UnityEngine_UI::UnityEngine::UI::RectMask2D::get_rectTransform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rectTransform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::RectTransform*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::RectMask2D::IsRaycastLocationValid(UnityEngine_CoreModule::UnityEngine::Vector2 sp, UnityEngine_CoreModule::UnityEngine::Camera* eventCamera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsRaycastLocationValid", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Camera" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sp;
	params[1] = (intptr_t)eventCamera;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_UI::UnityEngine::UI::RectMask2D::get_rootCanvasRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rootCanvasRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::PerformClipping()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PerformClipping");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::UpdateClipSoftness()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateClipSoftness");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::AddClippable(UnityEngine_UI::UnityEngine::UI::IClippable* clippable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddClippable", std::vector<std::string> { "UnityEngine.UI.IClippable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)clippable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::RemoveClippable(UnityEngine_UI::UnityEngine::UI::IClippable* clippable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveClippable", std::vector<std::string> { "UnityEngine.UI.IClippable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)clippable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::OnTransformParentChanged()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnTransformParentChanged");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::RectMask2D::OnCanvasHierarchyChanged()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCanvasHierarchyChanged");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
