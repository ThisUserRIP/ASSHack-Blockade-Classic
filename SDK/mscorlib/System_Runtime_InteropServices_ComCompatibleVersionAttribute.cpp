#include "System_Runtime_InteropServices_ComCompatibleVersionAttribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::InteropServices::ComCompatibleVersionAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.InteropServices", "ComCompatibleVersionAttribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::InteropServices::ComCompatibleVersionAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::InteropServices::ComCompatibleVersionAttribute::_ctor(int32_t major, int32_t minor, int32_t build, int32_t revision)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&major;
	params[1] = (intptr_t)&minor;
	params[2] = (intptr_t)&build;
	params[3] = (intptr_t)&revision;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
