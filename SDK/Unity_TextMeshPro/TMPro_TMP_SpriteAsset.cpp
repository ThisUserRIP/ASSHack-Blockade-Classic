#include "TMPro_TMP_SpriteAsset.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_SpriteAsset");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::get_version()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_version");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::set_version(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_version", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo Unity_TextMeshPro::TMPro::TMP_SpriteAsset::get_faceInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_faceInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::set_faceInfo(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_faceInfo", std::vector<std::string> { "UnityEngine.TextCore.FaceInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::get_spriteCharacterTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_spriteCharacterTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::set_spriteCharacterTable(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_spriteCharacterTable", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::get_spriteCharacterLookupTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_spriteCharacterLookupTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::set_spriteCharacterLookupTable(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_SpriteCharacter>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_spriteCharacterLookupTable", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_SpriteCharacter>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteGlyph>* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::get_spriteGlyphTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_spriteGlyphTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteGlyph>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::set_spriteGlyphTable(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteGlyph>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_spriteGlyphTable", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Material* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::GetDefaultSpriteMaterial()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultSpriteMaterial");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::UpdateLookupTables()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateLookupTables");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_TextMeshPro::TMPro::TMP_SpriteAsset::GetSpriteIndexFromHashcode(int32_t hashCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpriteIndexFromHashcode", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hashCode;
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
int32_t Unity_TextMeshPro::TMPro::TMP_SpriteAsset::GetSpriteIndexFromUnicode(uint32_t unicode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpriteIndexFromUnicode", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&unicode;
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
int32_t Unity_TextMeshPro::TMPro::TMP_SpriteAsset::GetSpriteIndexFromName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpriteIndexFromName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
Unity_TextMeshPro::TMPro::TMP_SpriteAsset* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::SearchForSpriteByUnicode(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks, int32_t& spriteIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForSpriteByUnicode", std::vector<std::string> { "TMPro.TMP_SpriteAsset", "System.UInt32", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)spriteAsset;
	params[1] = (intptr_t)&unicode;
	params[2] = (intptr_t)&includeFallbacks;
	params[3] = (intptr_t)&spriteIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_SpriteAsset*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_SpriteAsset* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteAsset>* spriteAssets, uint32_t unicode, bool includeFallbacks, int32_t& spriteIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForSpriteByUnicodeInternal", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset>", "System.UInt32", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)spriteAssets;
	params[1] = (intptr_t)&unicode;
	params[2] = (intptr_t)&includeFallbacks;
	params[3] = (intptr_t)&spriteIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_SpriteAsset*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_SpriteAsset* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks, int32_t& spriteIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForSpriteByUnicodeInternal", std::vector<std::string> { "TMPro.TMP_SpriteAsset", "System.UInt32", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)spriteAsset;
	params[1] = (intptr_t)&unicode;
	params[2] = (intptr_t)&includeFallbacks;
	params[3] = (intptr_t)&spriteIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_SpriteAsset*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_SpriteAsset* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::SearchForSpriteByHashCode(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool includeFallbacks, int32_t& spriteIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForSpriteByHashCode", std::vector<std::string> { "TMPro.TMP_SpriteAsset", "System.Int32", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)spriteAsset;
	params[1] = (intptr_t)&hashCode;
	params[2] = (intptr_t)&includeFallbacks;
	params[3] = (intptr_t)&spriteIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_SpriteAsset*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_SpriteAsset* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_SpriteAsset>* spriteAssets, int32_t hashCode, bool searchFallbacks, int32_t& spriteIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForSpriteByHashCodeInternal", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset>", "System.Int32", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)spriteAssets;
	params[1] = (intptr_t)&hashCode;
	params[2] = (intptr_t)&searchFallbacks;
	params[3] = (intptr_t)&spriteIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_SpriteAsset*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_SpriteAsset* Unity_TextMeshPro::TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool searchFallbacks, int32_t& spriteIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForSpriteByHashCodeInternal", std::vector<std::string> { "TMPro.TMP_SpriteAsset", "System.Int32", "System.Boolean", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)spriteAsset;
	params[1] = (intptr_t)&hashCode;
	params[2] = (intptr_t)&searchFallbacks;
	params[3] = (intptr_t)&spriteIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_SpriteAsset*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::SortGlyphTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortGlyphTable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::SortCharacterTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortCharacterTable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::SortGlyphAndCharacterTables()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortGlyphAndCharacterTables");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::UpgradeSpriteAsset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpgradeSpriteAsset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_SpriteAsset::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
