#include "UnityEngine_UI_MaskUtilities.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::MaskUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "MaskUtilities");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::MaskUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::UI::MaskUtilities::Notify2DMaskStateChanged(UnityEngine_CoreModule::UnityEngine::Component* mask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Notify2DMaskStateChanged", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::MaskUtilities::NotifyStencilStateChanged(UnityEngine_CoreModule::UnityEngine::Component* mask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyStencilStateChanged", std::vector<std::string> { "UnityEngine.Component" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Transform* UnityEngine_UI::UnityEngine::UI::MaskUtilities::FindRootSortOverrideCanvas(UnityEngine_CoreModule::UnityEngine::Transform* start)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindRootSortOverrideCanvas", std::vector<std::string> { "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)start;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Transform*)returnValue;
}
int32_t UnityEngine_UI::UnityEngine::UI::MaskUtilities::GetStencilDepth(UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Transform* stopAfter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStencilDepth", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)transform;
	params[1] = (intptr_t)stopAfter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_UI::UnityEngine::UI::MaskUtilities::IsDescendantOrSelf(UnityEngine_CoreModule::UnityEngine::Transform* father, UnityEngine_CoreModule::UnityEngine::Transform* child)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDescendantOrSelf", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)father;
	params[1] = (intptr_t)child;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_UI::UnityEngine::UI::RectMask2D* UnityEngine_UI::UnityEngine::UI::MaskUtilities::GetRectMaskForClippable(UnityEngine_UI::UnityEngine::UI::IClippable* clippable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRectMaskForClippable", std::vector<std::string> { "UnityEngine.UI.IClippable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)clippable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::RectMask2D*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::MaskUtilities::GetRectMasksForClip(UnityEngine_UI::UnityEngine::UI::RectMask2D* clipper, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::RectMask2D>* masks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRectMasksForClip", std::vector<std::string> { "UnityEngine.UI.RectMask2D", "System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)clipper;
	params[1] = (intptr_t)masks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::MaskUtilities::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
