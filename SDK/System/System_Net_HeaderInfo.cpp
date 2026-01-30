#include "System_Net_HeaderInfo.h"

IL2CPP::Il2CppClass* System::System::Net::HeaderInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "HeaderInfo");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::HeaderInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::HeaderInfo::_ctor(mscorlib::System::String* name, bool requestRestricted, bool responseRestricted, bool multi, System::Net::HeaderParser* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Boolean", "System.Boolean", "System.Boolean", "System.Net.HeaderParser" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&requestRestricted;
	params[2] = (intptr_t)&responseRestricted;
	params[3] = (intptr_t)&multi;
	params[4] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
