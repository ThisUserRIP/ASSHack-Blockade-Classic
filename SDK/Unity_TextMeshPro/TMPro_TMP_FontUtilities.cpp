#include "TMPro_TMP_FontUtilities.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_FontUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_FontUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_FontUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_TextMeshPro::TMPro::TMP_FontAsset* Unity_TextMeshPro::TMPro::TMP_FontUtilities::SearchForCharacter(Unity_TextMeshPro::TMPro::TMP_FontAsset* font, uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForCharacter", std::vector<std::string> { "TMPro.TMP_FontAsset", "System.UInt32", "TMPro.TMP_Character&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)font;
	params[1] = (intptr_t)&unicode;
	params[2] = (intptr_t)&character;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_FontAsset*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_FontAsset* Unity_TextMeshPro::TMPro::TMP_FontUtilities::SearchForCharacter(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* fonts, uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForCharacter", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_FontAsset>", "System.UInt32", "TMPro.TMP_Character&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)fonts;
	params[1] = (intptr_t)&unicode;
	params[2] = (intptr_t)&character;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_FontAsset*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_FontAsset* Unity_TextMeshPro::TMPro::TMP_FontUtilities::SearchForCharacterInternal(Unity_TextMeshPro::TMPro::TMP_FontAsset* font, uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForCharacterInternal", std::vector<std::string> { "TMPro.TMP_FontAsset", "System.UInt32", "TMPro.TMP_Character&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)font;
	params[1] = (intptr_t)&unicode;
	params[2] = (intptr_t)&character;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_FontAsset*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_FontAsset* Unity_TextMeshPro::TMPro::TMP_FontUtilities::SearchForCharacterInternal(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* fonts, uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForCharacterInternal", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_FontAsset>", "System.UInt32", "TMPro.TMP_Character&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)fonts;
	params[1] = (intptr_t)&unicode;
	params[2] = (intptr_t)&character;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_FontAsset*)returnValue;
}
