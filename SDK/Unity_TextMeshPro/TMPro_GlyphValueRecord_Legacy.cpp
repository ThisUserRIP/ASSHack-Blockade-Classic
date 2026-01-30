#include "TMPro_GlyphValueRecord_Legacy.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "GlyphValueRecord_Legacy");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy::_ctor(UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.TextCore.LowLevel.GlyphValueRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&valueRecord;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy::op_Addition(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy a, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "TMPro.GlyphValueRecord_Legacy", "TMPro.GlyphValueRecord_Legacy" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy>(*(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy*)il2cpp_object_unbox(returnValue));
}
Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy Unity_TextMeshPro::TMPro::operator+(Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy a, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy b)
{
	return Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy::op_Addition(a, b);
}
