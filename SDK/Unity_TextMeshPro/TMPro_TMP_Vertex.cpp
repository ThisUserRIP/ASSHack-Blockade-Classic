#include "TMPro_TMP_Vertex.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_Vertex::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_Vertex");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_Vertex::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_TextMeshPro::TMPro::TMP_Vertex Unity_TextMeshPro::TMPro::TMP_Vertex::get_zero()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_zero");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::TMP_Vertex ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::TMP_Vertex));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::TMP_Vertex>(*(Unity_TextMeshPro::TMPro::TMP_Vertex*)il2cpp_object_unbox(returnValue));
}
void Unity_TextMeshPro::TMPro::TMP_Vertex::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
