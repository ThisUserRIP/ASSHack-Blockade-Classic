#include "TMPro_TMP_TextUtilities_LineSegment.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_TextUtilities_LineSegment::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_TextMeshPro::TMPro::TMP_TextUtilities::GetIl2CppClass(), "LineSegment");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_TextUtilities_LineSegment::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::TMP_TextUtilities_LineSegment::_ctor(UnityEngine_CoreModule::UnityEngine::Vector3 p1, UnityEngine_CoreModule::UnityEngine::Vector3 p2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&p1;
	params[1] = (intptr_t)&p2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
