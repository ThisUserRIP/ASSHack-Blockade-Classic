#include "TMPro_GlyphPairKey.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::GlyphPairKey::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "GlyphPairKey");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::GlyphPairKey::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::GlyphPairKey::_ctor(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&firstGlyphIndex;
	params[1] = (intptr_t)&secondGlyphIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::GlyphPairKey::_ctor(Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord* record)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "TMPro.TMP_GlyphPairAdjustmentRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)record;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
