#include "TMPro_TMP_GlyphPairAdjustmentRecord.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_GlyphPairAdjustmentRecord");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::get_firstAdjustmentRecord()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_firstAdjustmentRecord");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord>(*(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::set_firstAdjustmentRecord(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_firstAdjustmentRecord", std::vector<std::string> { "TMPro.TMP_GlyphAdjustmentRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::get_secondAdjustmentRecord()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_secondAdjustmentRecord");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord>(*(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::set_secondAdjustmentRecord(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_secondAdjustmentRecord", std::vector<std::string> { "TMPro.TMP_GlyphAdjustmentRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::FontFeatureLookupFlags Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::get_featureLookupFlags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_featureLookupFlags");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::FontFeatureLookupFlags ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::FontFeatureLookupFlags));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::FontFeatureLookupFlags>(*(Unity_TextMeshPro::TMPro::FontFeatureLookupFlags*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::set_featureLookupFlags(Unity_TextMeshPro::TMPro::FontFeatureLookupFlags value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_featureLookupFlags", std::vector<std::string> { "TMPro.FontFeatureLookupFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::_ctor(Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, Unity_TextMeshPro::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "TMPro.TMP_GlyphAdjustmentRecord", "TMPro.TMP_GlyphAdjustmentRecord" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&firstAdjustmentRecord;
	params[1] = (intptr_t)&secondAdjustmentRecord;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord::_ctor(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&glyphPairAdjustmentRecord;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
