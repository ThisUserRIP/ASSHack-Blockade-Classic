#include "TMPro_TMP_FontAsset.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_FontAsset::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_FontAsset");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_FontAsset::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_version()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_version");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_version(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_version", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TextRenderingModule::UnityEngine::Font* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_sourceFontFile()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sourceFontFile");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_TextRenderingModule::UnityEngine::Font*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_sourceFontFile(UnityEngine_TextRenderingModule::UnityEngine::Font* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sourceFontFile", std::vector<std::string> { "UnityEngine.Font" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::AtlasPopulationMode Unity_TextMeshPro::TMPro::TMP_FontAsset::get_atlasPopulationMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_atlasPopulationMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::AtlasPopulationMode ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::AtlasPopulationMode));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::AtlasPopulationMode>(*(Unity_TextMeshPro::TMPro::AtlasPopulationMode*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_atlasPopulationMode(Unity_TextMeshPro::TMPro::AtlasPopulationMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_atlasPopulationMode", std::vector<std::string> { "TMPro.AtlasPopulationMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo Unity_TextMeshPro::TMPro::TMP_FontAsset::get_faceInfo()
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
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_faceInfo(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_faceInfo", std::vector<std::string> { "UnityEngine.TextCore.FaceInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_glyphTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_glyphTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_glyphTable(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_glyphTable", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_glyphLookupTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_glyphLookupTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Character>* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_characterTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_characterTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Character>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_characterTable(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Character>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_characterTable", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_Character>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_Character>* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_characterLookupTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_characterLookupTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, Unity_TextMeshPro::TMPro::TMP_Character>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture2D* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_atlasTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_atlasTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_atlasTextures()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_atlasTextures");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_atlasTextures(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_atlasTextures", std::vector<std::string> { "UnityEngine.Texture2D[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_TextMeshPro::TMPro::TMP_FontAsset::get_atlasTextureCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_atlasTextureCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::get_isMultiAtlasTexturesEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isMultiAtlasTexturesEnabled");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_isMultiAtlasTexturesEnabled(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_isMultiAtlasTexturesEnabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::get_clearDynamicDataOnBuild()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_clearDynamicDataOnBuild");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_clearDynamicDataOnBuild(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_clearDynamicDataOnBuild", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_usedGlyphRects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_usedGlyphRects");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_usedGlyphRects(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_usedGlyphRects", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_freeGlyphRects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_freeGlyphRects");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_freeGlyphRects(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_freeGlyphRects", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::FaceInfo_Legacy* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_fontInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fontInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::FaceInfo_Legacy*)returnValue;
}
int32_t Unity_TextMeshPro::TMPro::TMP_FontAsset::get_atlasWidth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_atlasWidth");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_atlasWidth(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_atlasWidth", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_TextMeshPro::TMPro::TMP_FontAsset::get_atlasHeight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_atlasHeight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_atlasHeight(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_atlasHeight", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_TextMeshPro::TMPro::TMP_FontAsset::get_atlasPadding()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_atlasPadding");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_atlasPadding(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_atlasPadding", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode Unity_TextMeshPro::TMPro::TMP_FontAsset::get_atlasRenderMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_atlasRenderMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_atlasRenderMode(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_atlasRenderMode", std::vector<std::string> { "UnityEngine.TextCore.LowLevel.GlyphRenderMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::TMP_FontFeatureTable* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_fontFeatureTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fontFeatureTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_FontFeatureTable*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_fontFeatureTable(Unity_TextMeshPro::TMPro::TMP_FontFeatureTable* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_fontFeatureTable", std::vector<std::string> { "TMPro.TMP_FontFeatureTable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_fallbackFontAssetTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fallbackFontAssetTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_fallbackFontAssetTable(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_fallbackFontAssetTable", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_FontAsset>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::FontAssetCreationSettings Unity_TextMeshPro::TMPro::TMP_FontAsset::get_creationSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_creationSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::FontAssetCreationSettings ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::FontAssetCreationSettings));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::FontAssetCreationSettings>(*(Unity_TextMeshPro::TMPro::FontAssetCreationSettings*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_creationSettings(Unity_TextMeshPro::TMPro::FontAssetCreationSettings value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_creationSettings", std::vector<std::string> { "TMPro.FontAssetCreationSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_FontWeightPair>* Unity_TextMeshPro::TMPro::TMP_FontAsset::get_fontWeightTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fontWeightTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_FontWeightPair>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::set_fontWeightTable(IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_FontWeightPair>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_fontWeightTable", std::vector<std::string> { "TMPro.TMP_FontWeightPair[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::TMP_FontAsset* Unity_TextMeshPro::TMPro::TMP_FontAsset::CreateFontAsset(UnityEngine_TextRenderingModule::UnityEngine::Font* font)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFontAsset", std::vector<std::string> { "UnityEngine.Font" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)font;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_FontAsset*)returnValue;
}
Unity_TextMeshPro::TMPro::TMP_FontAsset* Unity_TextMeshPro::TMPro::TMP_FontAsset::CreateFontAsset(UnityEngine_TextRenderingModule::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight, Unity_TextMeshPro::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFontAsset", std::vector<std::string> { "UnityEngine.Font", "System.Int32", "System.Int32", "UnityEngine.TextCore.LowLevel.GlyphRenderMode", "System.Int32", "System.Int32", "TMPro.AtlasPopulationMode", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)font;
	params[1] = (intptr_t)&samplingPointSize;
	params[2] = (intptr_t)&atlasPadding;
	params[3] = (intptr_t)&renderMode;
	params[4] = (intptr_t)&atlasWidth;
	params[5] = (intptr_t)&atlasHeight;
	params[6] = (intptr_t)&atlasPopulationMode;
	params[7] = (intptr_t)&enableMultiAtlasSupport;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::TMP_FontAsset*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::ReadFontAssetDefinition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadFontAssetDefinition");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::InitializeDictionaryLookupTables()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeDictionaryLookupTables");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::InitializeGlyphLookupDictionary()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeGlyphLookupDictionary");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::InitializeCharacterLookupDictionary()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeCharacterLookupDictionary");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeGlyphPaidAdjustmentRecordsLookupDictionary");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::AddSynthesizedCharactersAndFaceMetrics()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSynthesizedCharactersAndFaceMetrics");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSynthesizedCharacter", std::vector<std::string> { "System.UInt32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)&isFontFaceLoaded;
	params[2] = (intptr_t)&addImmediately;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::AddCharacterToLookupCache(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character* character)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCharacterToLookupCache", std::vector<std::string> { "System.UInt32", "TMPro.TMP_Character" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)character;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::SortCharacterTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortCharacterTable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::SortGlyphTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortGlyphTable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::SortFontFeatureTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortFontFeatureTable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::SortAllTables()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortAllTables");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::HasCharacter(int32_t character)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasCharacter", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&character;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::HasCharacter(wchar_t character, bool searchFallbacks, bool tryAddCharacter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasCharacter", std::vector<std::string> { "System.Char", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&character;
	params[1] = (intptr_t)&searchFallbacks;
	params[2] = (intptr_t)&tryAddCharacter;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasCharacter_Internal", std::vector<std::string> { "System.UInt32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&character;
	params[1] = (intptr_t)&searchFallbacks;
	params[2] = (intptr_t)&tryAddCharacter;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::HasCharacters(mscorlib::System::String* text, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Char>& missingCharacters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasCharacters", std::vector<std::string> { "System.String", "System.Collections.Generic.List`1<System.Char>&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&missingCharacters;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::HasCharacters(mscorlib::System::String* text, IL2CPP::Array<uint32_t>& missingCharacters, bool searchFallbacks, bool tryAddCharacter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasCharacters", std::vector<std::string> { "System.String", "System.UInt32[]&", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&missingCharacters;
	params[2] = (intptr_t)&searchFallbacks;
	params[3] = (intptr_t)&tryAddCharacter;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::HasCharacters(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasCharacters", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
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
mscorlib::System::String* Unity_TextMeshPro::TMPro::TMP_FontAsset::GetCharacters(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCharacters", std::vector<std::string> { "TMPro.TMP_FontAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fontAsset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
IL2CPP::Array<int32_t>* Unity_TextMeshPro::TMPro::TMP_FontAsset::GetCharactersArray(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCharactersArray", std::vector<std::string> { "TMPro.TMP_FontAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fontAsset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
uint32_t Unity_TextMeshPro::TMPro::TMP_FontAsset::GetGlyphIndex(uint32_t unicode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGlyphIndex", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&unicode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::RegisterFontAssetForFontFeatureUpdate(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterFontAssetForFontFeatureUpdate", std::vector<std::string> { "TMPro.TMP_FontAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fontAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpdateFontFeaturesForFontAssetsInQueue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateFontFeaturesForFontAssetsInQueue");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::RegisterFontAssetForAtlasTextureUpdate(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterFontAssetForAtlasTextureUpdate", std::vector<std::string> { "TMPro.TMP_FontAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fontAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpdateAtlasTexturesForFontAssetsInQueue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateAtlasTexturesForFontAssetsInQueue");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::TryAddCharacters(IL2CPP::Array<uint32_t>* unicodes, bool includeFontFeatures)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddCharacters", std::vector<std::string> { "System.UInt32[]", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)unicodes;
	params[1] = (intptr_t)&includeFontFeatures;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::TryAddCharacters(IL2CPP::Array<uint32_t>* unicodes, IL2CPP::Array<uint32_t>& missingUnicodes, bool includeFontFeatures)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddCharacters", std::vector<std::string> { "System.UInt32[]", "System.UInt32[]&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)unicodes;
	params[1] = (intptr_t)&missingUnicodes;
	params[2] = (intptr_t)&includeFontFeatures;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::TryAddCharacters(mscorlib::System::String* characters, bool includeFontFeatures)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddCharacters", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)characters;
	params[1] = (intptr_t)&includeFontFeatures;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::TryAddCharacters(mscorlib::System::String* characters, mscorlib::System::String& missingCharacters, bool includeFontFeatures)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddCharacters", std::vector<std::string> { "System.String", "System.String&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)characters;
	params[1] = (intptr_t)&missingCharacters;
	params[2] = (intptr_t)&includeFontFeatures;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::TryAddCharacterInternal(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddCharacterInternal", std::vector<std::string> { "System.UInt32", "TMPro.TMP_Character&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)&character;
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
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetCharacter_and_QueueRenderToTexture", std::vector<std::string> { "System.UInt32", "TMPro.TMP_Character&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)&character;
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
void Unity_TextMeshPro::TMPro::TMP_FontAsset::TryAddGlyphsToAtlasTextures()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddGlyphsToAtlasTextures");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_TextMeshPro::TMPro::TMP_FontAsset::TryAddGlyphsToNewAtlasTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddGlyphsToNewAtlasTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::SetupNewAtlasTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupNewAtlasTexture");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpdateAtlasTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateAtlasTexture");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateGlyphAdjustmentRecords");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords(IL2CPP::Array<uint32_t>* glyphIndexes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateGlyphAdjustmentRecords", std::vector<std::string> { "System.UInt32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)glyphIndexes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* glyphIndexes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateGlyphAdjustmentRecords", std::vector<std::string> { "System.Collections.Generic.List`1<System.UInt32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)glyphIndexes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* newGlyphIndexes, mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* allGlyphIndexes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateGlyphAdjustmentRecords", std::vector<std::string> { "System.Collections.Generic.List`1<System.UInt32>", "System.Collections.Generic.List`1<System.UInt32>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)newGlyphIndexes;
	params[1] = (intptr_t)allGlyphIndexes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::ClearFontAssetData(bool setAtlasSizeToZero)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearFontAssetData", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&setAtlasSizeToZero;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::ClearFontAssetDataInternal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearFontAssetDataInternal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpdateFontAssetData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateFontAssetData");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::ClearFontAssetTables()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearFontAssetTables");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::ClearAtlasTextures(bool setAtlasSizeToZero)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearAtlasTextures", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&setAtlasSizeToZero;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpgradeFontAsset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpgradeFontAsset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::UpgradeGlyphAdjustmentTableToFontFeatureTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpgradeGlyphAdjustmentTableToFontFeatureTable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontAsset::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
