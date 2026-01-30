#include "TMPro_KerningTable___c__DisplayClass3_0.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::KerningTable___c__DisplayClass3_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_TextMeshPro::TMPro::KerningTable::GetIl2CppClass(), "<>c__DisplayClass3_0");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::KerningTable___c__DisplayClass3_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::KerningTable___c__DisplayClass3_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_TextMeshPro::TMPro::KerningTable___c__DisplayClass3_0::_AddKerningPair_b__0(Unity_TextMeshPro::TMPro::KerningPair* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<AddKerningPair>b__0", std::vector<std::string> { "TMPro.KerningPair" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
