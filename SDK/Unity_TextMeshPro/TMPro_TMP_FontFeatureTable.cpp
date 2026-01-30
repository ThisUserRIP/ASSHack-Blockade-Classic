#include "TMPro_TMP_FontFeatureTable.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_FontFeatureTable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_FontFeatureTable");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_FontFeatureTable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord>* Unity_TextMeshPro::TMPro::TMP_FontFeatureTable::get_glyphPairAdjustmentRecords()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_glyphPairAdjustmentRecords");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_FontFeatureTable::set_glyphPairAdjustmentRecords(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_glyphPairAdjustmentRecords", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_GlyphPairAdjustmentRecord>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontFeatureTable::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_FontFeatureTable::SortGlyphPairAdjustmentRecords()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortGlyphPairAdjustmentRecords");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
