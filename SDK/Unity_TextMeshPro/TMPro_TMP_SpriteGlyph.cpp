#include "TMPro_TMP_SpriteGlyph.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_SpriteGlyph::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_SpriteGlyph");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_SpriteGlyph::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::TMP_SpriteGlyph::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_SpriteGlyph::_ctor(uint32_t index, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect glyphRect, float scale, int32_t atlasIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "UnityEngine.TextCore.GlyphMetrics", "UnityEngine.TextCore.GlyphRect", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&metrics;
	params[2] = (intptr_t)&glyphRect;
	params[3] = (intptr_t)&scale;
	params[4] = (intptr_t)&atlasIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_SpriteGlyph::_ctor(uint32_t index, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect glyphRect, float scale, int32_t atlasIndex, UnityEngine_CoreModule::UnityEngine::Sprite* sprite)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "UnityEngine.TextCore.GlyphMetrics", "UnityEngine.TextCore.GlyphRect", "System.Single", "System.Int32", "UnityEngine.Sprite" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&metrics;
	params[2] = (intptr_t)&glyphRect;
	params[3] = (intptr_t)&scale;
	params[4] = (intptr_t)&atlasIndex;
	params[5] = (intptr_t)sprite;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
