#include "TMPro_KerningPairKey.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::KerningPairKey::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "KerningPairKey");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::KerningPairKey::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::KerningPairKey::_ctor(uint32_t ascii_left, uint32_t ascii_right)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ascii_left;
	params[1] = (intptr_t)&ascii_right;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
