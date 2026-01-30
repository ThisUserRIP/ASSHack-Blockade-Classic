#include "UnityEngine_EventSystems_PhysicsRaycaster.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "PhysicsRaycaster");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Camera* UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_eventCamera");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Camera*)returnValue;
}
int32_t UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::get_depth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_depth");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_finalEventMask");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::LayerMask UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_eventMask");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask(UnityEngine_CoreModule::UnityEngine::LayerMask value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_eventMask", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_maxRayIntersections");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_maxRayIntersections", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, UnityEngine_CoreModule::UnityEngine::Ray& ray, int32_t& eventDisplayIndex, float& distanceToClipPlane)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeRayAndDistance", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData", "UnityEngine.Ray&", "System.Int32&", "System.Single&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)eventData;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&eventDisplayIndex;
	params[3] = (intptr_t)&distanceToClipPlane;
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
void UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster::Raycast(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* resultAppendList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData", "System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventData;
	params[1] = (intptr_t)resultAppendList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
