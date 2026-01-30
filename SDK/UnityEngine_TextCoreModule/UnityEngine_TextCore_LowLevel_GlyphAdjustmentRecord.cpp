#include "UnityEngine_TextCore_LowLevel_GlyphAdjustmentRecord.h"

IL2CPP::Il2CppClass* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TextCoreModule.dll", "UnityEngine.TextCore.LowLevel", "GlyphAdjustmentRecord");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphIndex()
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
UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphValueRecord()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_glyphValueRecord");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord*)il2cpp_object_unbox(returnValue));
}
