#include "System_Diagnostics_TraceSwitch.h"

IL2CPP::Il2CppClass* System::System::Diagnostics::TraceSwitch::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Diagnostics", "TraceSwitch");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Diagnostics::TraceSwitch::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Diagnostics::TraceSwitch::_ctor(mscorlib::System::String* displayName, mscorlib::System::String* description)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)displayName;
	params[1] = (intptr_t)description;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
