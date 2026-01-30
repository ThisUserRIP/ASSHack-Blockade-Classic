#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct Glyph; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_TextCore_LowLevel_GlyphMarshallingStruct.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel { struct GlyphMarshallingStruct; };
#include "UnityEngine_TextCore_GlyphRect.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct GlyphRect; };
#include "UnityEngine_TextCore_LowLevel_GlyphPairAdjustmentRecord.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel { struct GlyphPairAdjustmentRecord; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "UnityEngine_TextCore_LowLevel_FontEngineError.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "UnityEngine_TextCore_FaceInfo.h"
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct FaceInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_TextCore_LowLevel_GlyphLoadFlags.h"
#include "UnityEngine_TextCore_LowLevel_GlyphPackingMode.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "UnityEngine_TextCore_LowLevel_GlyphRenderMode.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel
{
	struct FontEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph*>* s_Glyphs;
			IL2CPP::Array<uint32_t>* s_GlyphIndexes_MarshallingArray_A;
			IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* s_GlyphMarshallingStruct_IN;
			IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* s_GlyphMarshallingStruct_OUT;
			IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* s_FreeGlyphRects;
			IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* s_UsedGlyphRects;
			IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* s_PairAdjustmentRecords_MarshallingArray;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph>* s_GlyphLookupDictionary;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError InitializeFontEngine();
		static int32_t InitializeFontEngine_Internal();
		static UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(UnityEngine_TextRenderingModule::UnityEngine::Font* font, int32_t pointSize);
		static int32_t LoadFontFace_With_Size_FromFont_Internal(UnityEngine_TextRenderingModule::UnityEngine::Font* font, int32_t pointSize);
		static UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo GetFaceInfo();
		static int32_t GetFaceInfo_Internal(UnityEngine_TextCoreModule::UnityEngine::TextCore::FaceInfo& faceInfo);
		static uint32_t GetGlyphIndex(uint32_t unicode);
		static bool TryGetGlyphWithUnicodeValue(uint32_t unicode, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph& glyph);
		static bool TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyphStruct);
		static bool TryGetGlyphWithIndexValue(uint32_t glyphIndex, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph& glyph);
		static bool TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyphStruct);
		static bool TryAddGlyphToTexture(uint32_t glyphIndex, int32_t padding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph& glyph);
		static bool TryAddGlyphToTexture_Internal(uint32_t glyphIndex, int32_t padding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, int32_t& freeGlyphRectCount, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, int32_t& usedGlyphRectCount, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyph);
		static bool TryAddGlyphsToTexture(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* glyphIndexes, int32_t padding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, mscorlib::System::Collections::Generic::List_1<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph*>& glyphs);
		static bool TryAddGlyphsToTexture_Internal(IL2CPP::Array<uint32_t>* glyphIndex, int32_t padding, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* freeGlyphRects, int32_t& freeGlyphRectCount, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, int32_t& usedGlyphRectCount, UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* glyphs, int32_t& glyphCount);
		static IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetGlyphPairAdjustmentTable(IL2CPP::Array<uint32_t>* glyphIndexes);
		static IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetGlyphPairAdjustmentRecords(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* glyphIndexes, int32_t& recordCount);
		static int32_t PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes(IL2CPP::Array<uint32_t>* glyphIndexes, int32_t& recordCount);
		static int32_t GetGlyphPairAdjustmentRecordsFromMarshallingArray(IL2CPP::Array<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* glyphPairAdjustmentRecords);
		template <typename T> static void GenericListToMarshallingArray(mscorlib::System::Collections::Generic::List_1<T>& srcList, IL2CPP::Array<T>& dstArray)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenericListToMarshallingArray", std::vector<std::string> { "System.Collections.Generic.List`1<T>&", GetGenericTypeName<T>() + (std::string)"[]&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&srcList;
			params[1] = (intptr_t)&dstArray;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> static void SetMarshallingArraySize(IL2CPP::Array<T>& marshallingArray, int32_t recordCount)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMarshallingArraySize", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]&", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&marshallingArray;
			params[1] = (intptr_t)&recordCount;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void ResetAtlasTexture(UnityEngine_CoreModule::UnityEngine::Texture2D* texture);
		static void _cctor();
	};
}

