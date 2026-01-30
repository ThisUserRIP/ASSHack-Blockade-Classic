#include "UnityEngine_TextCore_LowLevel_GlyphPairAdjustmentRecord.h"

IL2CPP::Il2CppClass* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TextCoreModule.dll", "UnityEngine.TextCore.LowLevel", "GlyphPairAdjustmentRecord");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_firstAdjustmentRecord()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_firstAdjustmentRecord");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord*)il2cpp_object_unbox(returnValue));
}
UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord::get_secondAdjustmentRecord()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_secondAdjustmentRecord");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord*)il2cpp_object_unbox(returnValue));
}
