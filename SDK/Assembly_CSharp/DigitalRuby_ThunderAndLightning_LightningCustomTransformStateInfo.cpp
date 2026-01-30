#include "DigitalRuby_ThunderAndLightning_LightningCustomTransformStateInfo.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DigitalRuby.ThunderAndLightning", "LightningCustomTransformStateInfo");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformState Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::get_State()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_State");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformState ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformState));
		return ret;
	}
	return static_cast<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformState>(*(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformState*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::set_State(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformState value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_State", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningCustomTransformState" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::get_Parameters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Parameters");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::set_Parameters(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Parameters", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningBoltParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::GetOrCreateStateInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrCreateStateInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo*)returnValue;
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::ReturnStateInfoToCache(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReturnStateInfoToCache", std::vector<std::string> { "DigitalRuby.ThunderAndLightning.LightningCustomTransformStateInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
