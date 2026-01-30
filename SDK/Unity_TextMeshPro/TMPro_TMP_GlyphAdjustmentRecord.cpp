#include "TMPro_TMP_GlyphAdjustmentRecord.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_GlyphAdjustmentRecord");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint32_t Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord::get_glyphIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_glyphIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord::set_glyphIndex(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_glyphIndex", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord::get_glyphValueRecord()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_glyphValueRecord");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord>(*(Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord::set_glyphValueRecord(Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_glyphValueRecord", std::vector<std::string> { "TMPro.TMP_GlyphValueRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord::_ctor(uint32_t glyphIndex, Unity_TextMeshPro::TMPro::TMP_GlyphValueRecord glyphValueRecord)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "TMPro.TMP_GlyphValueRecord" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&glyphIndex;
	params[1] = (intptr_t)&glyphValueRecord;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord::_ctor(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord adjustmentRecord)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&adjustmentRecord;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
