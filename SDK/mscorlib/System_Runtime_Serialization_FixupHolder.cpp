#include "System_Runtime_Serialization_FixupHolder.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::FixupHolder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization", "FixupHolder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::FixupHolder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::FixupHolder::_ctor(int64_t id, mscorlib::System::Object* fixupInfo, int32_t fixupType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int64", "System.Object", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)fixupInfo;
	params[2] = (intptr_t)&fixupType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
