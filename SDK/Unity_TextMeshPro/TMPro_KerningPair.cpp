#include "TMPro_KerningPair.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::KerningPair::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "KerningPair");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::KerningPair::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint32_t Unity_TextMeshPro::TMPro::KerningPair::get_firstGlyph()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_firstGlyph");
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
void Unity_TextMeshPro::TMPro::KerningPair::set_firstGlyph(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_firstGlyph", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy Unity_TextMeshPro::TMPro::KerningPair::get_firstGlyphAdjustments()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_firstGlyphAdjustments");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy>(*(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_TextMeshPro::TMPro::KerningPair::get_secondGlyph()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_secondGlyph");
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
void Unity_TextMeshPro::TMPro::KerningPair::set_secondGlyph(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_secondGlyph", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy Unity_TextMeshPro::TMPro::KerningPair::get_secondGlyphAdjustments()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_secondGlyphAdjustments");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy>(*(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy*)il2cpp_object_unbox(returnValue));
}
bool Unity_TextMeshPro::TMPro::KerningPair::get_ignoreSpacingAdjustments()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ignoreSpacingAdjustments");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::KerningPair::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::KerningPair::_ctor(uint32_t left, uint32_t right, float offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "System.UInt32", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&left;
	params[1] = (intptr_t)&right;
	params[2] = (intptr_t)&offset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::KerningPair::_ctor(uint32_t firstGlyph, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint32_t secondGlyph, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "TMPro.GlyphValueRecord_Legacy", "System.UInt32", "TMPro.GlyphValueRecord_Legacy" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&firstGlyph;
	params[1] = (intptr_t)&firstGlyphAdjustments;
	params[2] = (intptr_t)&secondGlyph;
	params[3] = (intptr_t)&secondGlyphAdjustments;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::KerningPair::ConvertLegacyKerningData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertLegacyKerningData");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::KerningPair::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
