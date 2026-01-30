#include "TMPro_TMP_Character.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_Character::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_Character");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_Character::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::TMP_Character::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_Character::_ctor(uint32_t unicode, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph* glyph)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "UnityEngine.TextCore.Glyph" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)glyph;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_Character::_ctor(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph* glyph)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "TMPro.TMP_FontAsset", "UnityEngine.TextCore.Glyph" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)fontAsset;
	params[2] = (intptr_t)glyph;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_Character::_ctor(uint32_t unicode, uint32_t glyphIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)&glyphIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
