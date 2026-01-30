#include "System_Reflection_MonoEventInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::MonoEventInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection", "MonoEventInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::MonoEventInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Reflection::MonoEventInfo::get_event_info(mscorlib::System::Reflection::MonoEvent* ev, mscorlib::System::Reflection::MonoEventInfo& info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_event_info", std::vector<std::string> { "System.Reflection.MonoEvent", "System.Reflection.MonoEventInfo&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ev;
	params[1] = (intptr_t)&info;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Reflection::MonoEventInfo mscorlib::System::Reflection::MonoEventInfo::GetEventInfo(mscorlib::System::Reflection::MonoEvent* ev)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEventInfo", std::vector<std::string> { "System.Reflection.MonoEvent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ev;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Reflection::MonoEventInfo ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Reflection::MonoEventInfo));
		return ret;
	}
	return static_cast<mscorlib::System::Reflection::MonoEventInfo>(*(mscorlib::System::Reflection::MonoEventInfo*)il2cpp_object_unbox(returnValue));
}
