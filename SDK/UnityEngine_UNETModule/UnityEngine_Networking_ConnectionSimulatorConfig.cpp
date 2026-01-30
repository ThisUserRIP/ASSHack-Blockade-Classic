#include "UnityEngine_Networking_ConnectionSimulatorConfig.h"

IL2CPP::Il2CppClass* UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UNETModule.dll", "UnityEngine.Networking", "ConnectionSimulatorConfig");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig::_ctor(int32_t outMinDelay, int32_t outAvgDelay, int32_t inMinDelay, int32_t inAvgDelay, float packetLossPercentage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&outMinDelay;
	params[1] = (intptr_t)&outAvgDelay;
	params[2] = (intptr_t)&inMinDelay;
	params[3] = (intptr_t)&inAvgDelay;
	params[4] = (intptr_t)&packetLossPercentage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
