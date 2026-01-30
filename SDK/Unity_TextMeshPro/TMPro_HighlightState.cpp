#include "TMPro_HighlightState.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::HighlightState::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "HighlightState");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::HighlightState::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::HighlightState::_ctor(UnityEngine_CoreModule::UnityEngine::Color32 color, Unity_TextMeshPro::TMPro::TMP_Offset padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Color32", "TMPro.TMP_Offset" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&padding;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_TextMeshPro::TMPro::HighlightState::op_Equality(Unity_TextMeshPro::TMPro::HighlightState lhs, Unity_TextMeshPro::TMPro::HighlightState rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "TMPro.HighlightState", "TMPro.HighlightState" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Unity_TextMeshPro::TMPro::operator==(Unity_TextMeshPro::TMPro::HighlightState& lhs, Unity_TextMeshPro::TMPro::HighlightState& rhs)
{
	return Unity_TextMeshPro::TMPro::HighlightState::op_Equality(lhs, rhs);
}
bool Unity_TextMeshPro::TMPro::HighlightState::op_Inequality(Unity_TextMeshPro::TMPro::HighlightState lhs, Unity_TextMeshPro::TMPro::HighlightState rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "TMPro.HighlightState", "TMPro.HighlightState" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Unity_TextMeshPro::TMPro::operator!=(Unity_TextMeshPro::TMPro::HighlightState& lhs, Unity_TextMeshPro::TMPro::HighlightState& rhs)
{
	return Unity_TextMeshPro::TMPro::HighlightState::op_Inequality(lhs, rhs);
}
int32_t Unity_TextMeshPro::TMPro::HighlightState::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
bool Unity_TextMeshPro::TMPro::HighlightState::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Unity_TextMeshPro::TMPro::HighlightState::Equals(Unity_TextMeshPro::TMPro::HighlightState other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "TMPro.HighlightState" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
