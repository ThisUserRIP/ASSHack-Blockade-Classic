#include "Mono_Globalization_Unicode_CodePointIndexer_TableRange.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Globalization::Unicode::CodePointIndexer_TableRange::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::Mono::Globalization::Unicode::CodePointIndexer::GetIl2CppClass(), "TableRange");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Globalization::Unicode::CodePointIndexer_TableRange::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Globalization::Unicode::CodePointIndexer_TableRange::_ctor(int32_t start, int32_t end, int32_t indexStart)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&end;
	params[2] = (intptr_t)&indexStart;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
