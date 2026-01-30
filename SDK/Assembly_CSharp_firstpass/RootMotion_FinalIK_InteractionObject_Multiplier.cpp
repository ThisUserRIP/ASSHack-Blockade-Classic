#include "RootMotion_FinalIK_InteractionObject_Multiplier.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_Multiplier::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject::GetIl2CppClass(), "Multiplier");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_Multiplier::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_Multiplier::GetValue(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve* weightCurve, float timer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { "RootMotion.FinalIK.InteractionObject/WeightCurve", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)weightCurve;
	params[1] = (intptr_t)&timer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_Multiplier::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
