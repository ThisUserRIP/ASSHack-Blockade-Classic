#include "System_Diagnostics_Tracing_EventProvider_SessionInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Diagnostics::Tracing::EventProvider::GetIl2CppClass(), "SessionInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo::_ctor(int32_t sessionIdBit_, int32_t etwSessionId_)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sessionIdBit_;
	params[1] = (intptr_t)&etwSessionId_;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
