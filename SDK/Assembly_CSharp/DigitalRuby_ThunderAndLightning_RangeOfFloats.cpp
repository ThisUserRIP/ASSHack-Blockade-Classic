#include "DigitalRuby_ThunderAndLightning_RangeOfFloats.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DigitalRuby.ThunderAndLightning", "RangeOfFloats");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats::Random_()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Random");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats::Random_(mscorlib::System::Random_* r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Random", std::vector<std::string> { "System.Random" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)r;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
