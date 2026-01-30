#include "Mono_Globalization_Unicode_Contraction.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Globalization::Unicode::Contraction::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Globalization.Unicode", "Contraction");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Globalization::Unicode::Contraction::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Globalization::Unicode::Contraction::_ctor(int32_t index, IL2CPP::Array<wchar_t>* source, mscorlib::System::String* replacement, IL2CPP::Array<uint8_t>* sortkey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Char[]", "System.String", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)replacement;
	params[3] = (intptr_t)sortkey;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
