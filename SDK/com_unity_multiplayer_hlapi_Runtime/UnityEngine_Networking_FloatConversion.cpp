#include "UnityEngine_Networking_FloatConversion.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::FloatConversion::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("com.unity.multiplayer-hlapi.Runtime.dll", "UnityEngine.Networking", "FloatConversion");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::FloatConversion::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::FloatConversion::ToSingle(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToSingle", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
double com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::FloatConversion::ToDouble(uint64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDouble", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::FloatConversion::ToDecimal(uint64_t value1, uint64_t value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDecimal", std::vector<std::string> { "System.UInt64", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::FloatConversion::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
