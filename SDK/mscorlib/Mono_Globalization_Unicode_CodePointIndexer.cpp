#include "Mono_Globalization_Unicode_CodePointIndexer.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Globalization::Unicode::CodePointIndexer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Globalization.Unicode", "CodePointIndexer");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Globalization::Unicode::CodePointIndexer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Globalization::Unicode::CodePointIndexer::_ctor(IL2CPP::Array<int32_t>* starts, IL2CPP::Array<int32_t>* ends, int32_t defaultIndex, int32_t defaultCP)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32[]", "System.Int32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)starts;
	params[1] = (intptr_t)ends;
	params[2] = (intptr_t)&defaultIndex;
	params[3] = (intptr_t)&defaultCP;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::Mono::Globalization::Unicode::CodePointIndexer::ToIndex(int32_t cp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
