#include "Mono_Globalization_Unicode_TailoringInfo.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Globalization::Unicode::TailoringInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Globalization.Unicode", "TailoringInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Globalization::Unicode::TailoringInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Globalization::Unicode::TailoringInfo::_ctor(int32_t lcid, int32_t tailoringIndex, int32_t tailoringCount, bool frenchSort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&lcid;
	params[1] = (intptr_t)&tailoringIndex;
	params[2] = (intptr_t)&tailoringCount;
	params[3] = (intptr_t)&frenchSort;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
