#include "UnityEngine_TextCore_LowLevel_FontEngine.h"

IL2CPP::Il2CppClass* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TextCoreModule.dll", "UnityEngine.TextCore.LowLevel", "FontEngine");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeFontEngine");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine_Internal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeFontEngine_Internal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(UnityEngine_TextRenderingModule::UnityEngine::Font* font, int32_t pointSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFontFace", std::vector<std::string> { "UnityEngine.Font", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)font;
	params[1] = (intptr_t)&pointSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_FromFont_Internal(UnityEngine_TextRenderingModule::UnityEngine::Font* font, int32_t pointSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFontFace_With_Size_FromFont_Internal", std::vector<std::string> { "UnityEngine.Font", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)font;
	params[1] = (intptr_t)&pointSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFaceInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo_Internal(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo& faceInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFaceInfo_Internal", std::vector<std::string> { "UnityEngine.TextCore.FaceInfo&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&faceInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
uint32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphIndex(uint32_t unicode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGlyphIndex", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&unicode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue(uint32_t unicode, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph& glyph)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetGlyphWithUnicodeValue", std::vector<std::string> { "System.UInt32", "UnityEngine.TextCore.LowLevel.GlyphLoadFlags", "UnityEngine.TextCore.Glyph&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)&flags;
	params[2] = (intptr_t)&glyph;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyphStruct)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetGlyphWithUnicodeValue_Internal", std::vector<std::string> { "System.UInt32", "UnityEngine.TextCore.LowLevel.GlyphLoadFlags", "UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)&loadFlags;
	params[2] = (intptr_t)&glyphStruct;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue(uint32_t glyphIndex, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph& glyph)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetGlyphWithIndexValue", std::vector<std::string> { "System.UInt32", "UnityEngine.TextCore.LowLevel.GlyphLoadFlags", "UnityEngine.TextCore.Glyph&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&glyphIndex;
	params[1] = (intptr_t)&flags;
	params[2] = (intptr_t)&glyph;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyphStruct)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetGlyphWithIndexValue_Internal", std::vector<std::string> { "System.UInt32", "UnityEngine.TextCore.LowLevel.GlyphLoadFlags", "UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&glyphIndex;
	params[1] = (intptr_t)&loadFlags;
	params[2] = (intptr_t)&glyphStruct;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture(uint32_t glyphIndex, int32_t padding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph& glyph)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddGlyphToTexture", std::vector<std::string> { "System.UInt32", "System.Int32", "UnityEngine.TextCore.LowLevel.GlyphPackingMode", "System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>", "System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>", "UnityEngine.TextCore.LowLevel.GlyphRenderMode", "UnityEngine.Texture2D", "UnityEngine.TextCore.Glyph&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&glyphIndex;
	params[1] = (intptr_t)&padding;
	params[2] = (intptr_t)&packingMode;
	params[3] = (intptr_t)freeGlyphRects;
	params[4] = (intptr_t)usedGlyphRects;
	params[5] = (intptr_t)&renderMode;
	params[6] = (intptr_t)texture;
	params[7] = (intptr_t)&glyph;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal(uint32_t glyphIndex, int32_t padding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, int32_t& freeGlyphRectCount, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, int32_t& usedGlyphRectCount, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyph)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddGlyphToTexture_Internal", std::vector<std::string> { "System.UInt32", "System.Int32", "UnityEngine.TextCore.LowLevel.GlyphPackingMode", "UnityEngine.TextCore.GlyphRect[]", "System.Int32&", "UnityEngine.TextCore.GlyphRect[]", "System.Int32&", "UnityEngine.TextCore.LowLevel.GlyphRenderMode", "UnityEngine.Texture2D", "UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&glyphIndex;
	params[1] = (intptr_t)&padding;
	params[2] = (intptr_t)&packingMode;
	params[3] = (intptr_t)freeGlyphRects;
	params[4] = (intptr_t)&freeGlyphRectCount;
	params[5] = (intptr_t)usedGlyphRects;
	params[6] = (intptr_t)&usedGlyphRectCount;
	params[7] = (intptr_t)&renderMode;
	params[8] = (intptr_t)texture;
	params[9] = (intptr_t)&glyph;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* glyphIndexes, int32_t padding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph*>& glyphs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddGlyphsToTexture", std::vector<std::string> { "System.Collections.Generic.List`1<System.UInt32>", "System.Int32", "UnityEngine.TextCore.LowLevel.GlyphPackingMode", "System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>", "System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>", "UnityEngine.TextCore.LowLevel.GlyphRenderMode", "UnityEngine.Texture2D", "UnityEngine.TextCore.Glyph[]&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)glyphIndexes;
	params[1] = (intptr_t)&padding;
	params[2] = (intptr_t)&packingMode;
	params[3] = (intptr_t)freeGlyphRects;
	params[4] = (intptr_t)usedGlyphRects;
	params[5] = (intptr_t)&renderMode;
	params[6] = (intptr_t)texture;
	params[7] = (intptr_t)&glyphs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal(IL2CPP::Array<uint32_t>* glyphIndex, int32_t padding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, int32_t& freeGlyphRectCount, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, int32_t& usedGlyphRectCount, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* glyphs, int32_t& glyphCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddGlyphsToTexture_Internal", std::vector<std::string> { "System.UInt32[]", "System.Int32", "UnityEngine.TextCore.LowLevel.GlyphPackingMode", "UnityEngine.TextCore.GlyphRect[]", "System.Int32&", "UnityEngine.TextCore.GlyphRect[]", "System.Int32&", "UnityEngine.TextCore.LowLevel.GlyphRenderMode", "UnityEngine.Texture2D", "UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[]", "System.Int32&" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)glyphIndex;
	params[1] = (intptr_t)&padding;
	params[2] = (intptr_t)&packingMode;
	params[3] = (intptr_t)freeGlyphRects;
	params[4] = (intptr_t)&freeGlyphRectCount;
	params[5] = (intptr_t)usedGlyphRects;
	params[6] = (intptr_t)&usedGlyphRectCount;
	params[7] = (intptr_t)&renderMode;
	params[8] = (intptr_t)texture;
	params[9] = (intptr_t)glyphs;
	params[10] = (intptr_t)&glyphCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentTable(IL2CPP::Array<uint32_t>* glyphIndexes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGlyphPairAdjustmentTable", std::vector<std::string> { "System.UInt32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)glyphIndexes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*)returnValue;
}
IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentRecords(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* glyphIndexes, int32_t& recordCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGlyphPairAdjustmentRecords", std::vector<std::string> { "System.Collections.Generic.List`1<System.UInt32>", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)glyphIndexes;
	params[1] = (intptr_t)&recordCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*)returnValue;
}
int32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes(IL2CPP::Array<uint32_t>* glyphIndexes, int32_t& recordCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes", std::vector<std::string> { "System.UInt32[]", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)glyphIndexes;
	params[1] = (intptr_t)&recordCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentRecordsFromMarshallingArray(IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* glyphPairAdjustmentRecords)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGlyphPairAdjustmentRecordsFromMarshallingArray", std::vector<std::string> { "UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)glyphPairAdjustmentRecords;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture(UnityEngine_CoreModule::UnityEngine::Texture2D* texture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetAtlasTexture", std::vector<std::string> { "UnityEngine.Texture2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)texture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngine::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
