#include "TMPro_TMP_FontAssetUtilities.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_FontAssetUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities* Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::get_instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_Character* Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, Unity_TextMeshPro::TMPro::FontStyles fontStyle, Unity_TextMeshPro::TMPro::FontWeight fontWeight, bool& isAlternativeTypeface)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCharacterFromFontAsset", std::vector<std::string> { "System.UInt32", "TMPro.TMP_FontAsset", "System.Boolean", "TMPro.FontStyles", "TMPro.FontWeight", "System.Boolean&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)sourceFontAsset;
	params[2] = (intptr_t)&includeFallbacks;
	params[3] = (intptr_t)&fontStyle;
	params[4] = (intptr_t)&fontWeight;
	params[5] = (intptr_t)&isAlternativeTypeface;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_Character*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_Character* Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset_Internal(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, Unity_TextMeshPro::TMPro::FontStyles fontStyle, Unity_TextMeshPro::TMPro::FontWeight fontWeight, bool& isAlternativeTypeface)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCharacterFromFontAsset_Internal", std::vector<std::string> { "System.UInt32", "TMPro.TMP_FontAsset", "System.Boolean", "TMPro.FontStyles", "TMPro.FontWeight", "System.Boolean&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)sourceFontAsset;
	params[2] = (intptr_t)&includeFallbacks;
	params[3] = (intptr_t)&fontStyle;
	params[4] = (intptr_t)&fontWeight;
	params[5] = (intptr_t)&isAlternativeTypeface;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_Character*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_Character* Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAssets(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_FontAsset* sourceFontAsset, mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* fontAssets, bool includeFallbacks, Unity_TextMeshPro::TMPro::FontStyles fontStyle, Unity_TextMeshPro::TMPro::FontWeight fontWeight, bool& isAlternativeTypeface)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCharacterFromFontAssets", std::vector<std::string> { "System.UInt32", "TMPro.TMP_FontAsset", "System.Collections.Generic.List`1<TMPro.TMP_FontAsset>", "System.Boolean", "TMPro.FontStyles", "TMPro.FontWeight", "System.Boolean&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)sourceFontAsset;
	params[2] = (intptr_t)fontAssets;
	params[3] = (intptr_t)&includeFallbacks;
	params[4] = (intptr_t)&fontStyle;
	params[5] = (intptr_t)&fontWeight;
	params[6] = (intptr_t)&isAlternativeTypeface;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_Character*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_SpriteCharacter* Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpriteCharacterFromSpriteAsset", std::vector<std::string> { "System.UInt32", "TMPro.TMP_SpriteAsset", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)spriteAsset;
	params[2] = (intptr_t)&includeFallbacks;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_SpriteCharacter*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_SpriteCharacter* Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset_Internal(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpriteCharacterFromSpriteAsset_Internal", std::vector<std::string> { "System.UInt32", "TMPro.TMP_SpriteAsset", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)spriteAsset;
	params[2] = (intptr_t)&includeFallbacks;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_SpriteCharacter*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAssetUtilities::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
