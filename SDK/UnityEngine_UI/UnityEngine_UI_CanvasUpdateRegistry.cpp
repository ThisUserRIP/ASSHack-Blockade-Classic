#include "UnityEngine_UI_CanvasUpdateRegistry.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "CanvasUpdateRegistry");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry* UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::get_instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry*)returnValue;
}
bool UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ObjectValidForUpdate", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
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
void UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::CleanInvalidItems()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanInvalidItems");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::PerformUpdate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PerformUpdate");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::ParentCount(UnityEngine_CoreModule::UnityEngine::Transform* child)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParentCount", std::vector<std::string> { "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)child;
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
int32_t UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::SortLayoutList(UnityEngine_UI::UnityEngine::UI::ICanvasElement* x, UnityEngine_UI::UnityEngine::UI::ICanvasElement* y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortLayoutList", std::vector<std::string> { "UnityEngine.UI.ICanvasElement", "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)y;
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
void UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterCanvasElementForLayoutRebuild", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryRegisterCanvasElementForLayoutRebuild", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
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
bool UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalRegisterCanvasElementForLayoutRebuild", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
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
void UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterCanvasElementForGraphicRebuild", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryRegisterCanvasElementForGraphicRebuild", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
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
bool UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalRegisterCanvasElementForGraphicRebuild", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
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
void UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnRegisterCanvasElementForRebuild", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalUnRegisterCanvasElementForLayoutRebuild", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalUnRegisterCanvasElementForGraphicRebuild", std::vector<std::string> { "UnityEngine.UI.ICanvasElement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingLayout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsRebuildingLayout");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingGraphics()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsRebuildingGraphics");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
