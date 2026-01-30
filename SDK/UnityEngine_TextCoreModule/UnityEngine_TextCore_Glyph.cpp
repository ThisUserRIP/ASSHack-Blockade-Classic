#include "UnityEngine_TextCore_Glyph.h"

IL2CPP::Il2CppClass* UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TextCoreModule.dll", "UnityEngine.TextCore", "Glyph");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::get_index()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_index");
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
void UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::set_index(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_index", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::get_metrics()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_metrics");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::set_metrics(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_metrics", std::vector<std::string> { "UnityEngine.TextCore.GlyphMetrics" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::get_glyphRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_glyphRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect));
		return ret;
	}
	return static_cast<UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect>(*(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::set_glyphRect(UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_glyphRect", std::vector<std::string> { "UnityEngine.TextCore.GlyphRect" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::get_scale()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_scale");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::set_scale(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_scale", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::get_atlasIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_atlasIndex");
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
void UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::set_atlasIndex(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_atlasIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::_ctor(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&glyphStruct;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph::_ctor(uint32_t index, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine_TextCoreModule::UnityEngine::TextCore::GlyphRect glyphRect, float scale, int32_t atlasIndex)
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
