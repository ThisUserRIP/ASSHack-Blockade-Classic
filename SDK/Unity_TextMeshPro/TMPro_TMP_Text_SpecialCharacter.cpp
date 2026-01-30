#include "TMPro_TMP_Text_SpecialCharacter.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_Text_SpecialCharacter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_TextMeshPro::TMPro::TMP_Text::GetIl2CppClass(), "SpecialCharacter");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_Text_SpecialCharacter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::TMP_Text_SpecialCharacter::_ctor(Unity_TextMeshPro::TMPro::TMP_Character* character, int32_t materialIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "TMPro.TMP_Character", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)character;
	params[1] = (intptr_t)&materialIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
