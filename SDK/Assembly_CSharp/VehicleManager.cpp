#include "VehicleManager.h"

IL2CPP::Il2CppClass* Assembly_CSharp::VehicleManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "VehicleManager");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::VehicleManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::VehicleManager::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Vehicle* Assembly_CSharp::VehicleManager::AddVehicle(mscorlib::System::String* aType, Assembly_CSharp::VEHICLE_CONTROLLER aController)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddVehicle", std::vector<std::string> { "System.String", "VEHICLE_CONTROLLER" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)aType;
	params[1] = (intptr_t)&aController;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Vehicle*)returnValue;
}
Assembly_CSharp::Vehicle* Assembly_CSharp::VehicleManager::AddVehicle(mscorlib::System::String* aType, Assembly_CSharp::VEHICLE_CONTROLLER aController, bool aCreateMapIcon)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddVehicle", std::vector<std::string> { "System.String", "VEHICLE_CONTROLLER", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)aType;
	params[1] = (intptr_t)&aController;
	params[2] = (intptr_t)&aCreateMapIcon;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Vehicle*)returnValue;
}
void Assembly_CSharp::VehicleManager::AddVehiclesFromChildren(UnityEngine_CoreModule::UnityEngine::GameObject* aParent, Assembly_CSharp::VEHICLE_CONTROLLER aController)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddVehiclesFromChildren", std::vector<std::string> { "UnityEngine.GameObject", "VEHICLE_CONTROLLER" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)aParent;
	params[1] = (intptr_t)&aController;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::VehicleManager::AddVehiclesFromChildren(UnityEngine_CoreModule::UnityEngine::GameObject* aParent, Assembly_CSharp::VEHICLE_CONTROLLER aController, bool aCreateMapIcon)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddVehiclesFromChildren", std::vector<std::string> { "UnityEngine.GameObject", "VEHICLE_CONTROLLER", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)aParent;
	params[1] = (intptr_t)&aController;
	params[2] = (intptr_t)&aCreateMapIcon;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::GameObject* Assembly_CSharp::VehicleManager::GetClosestVehicle(UnityEngine_CoreModule::UnityEngine::Vector3 aPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetClosestVehicle", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&aPosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
bool Assembly_CSharp::VehicleManager::IsInBounds(UnityEngine_CoreModule::UnityEngine::GameObject* aGameObject, UnityEngine_CoreModule::UnityEngine::Vector3 aPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInBounds", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)aGameObject;
	params[1] = (intptr_t)&aPosition;
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
void Assembly_CSharp::VehicleManager::RemoveVehicle(UnityEngine_CoreModule::UnityEngine::GameObject* aGameObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveVehicle", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)aGameObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::VehicleManager::SetVehiclesActive(bool aState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVehiclesActive", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&aState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::VehicleManager::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::VehicleManager::Destroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Destroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::VehicleManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
