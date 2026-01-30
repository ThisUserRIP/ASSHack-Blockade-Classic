#include "RootMotion_FinalIK_InteractionTrigger_Range.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_Range::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger::GetIl2CppClass(), "Range");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_Range::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_Range::IsInRange(UnityEngine_CoreModule::UnityEngine::Transform* character, UnityEngine_CoreModule::UnityEngine::Transform* raycastFrom, UnityEngine_PhysicsModule::UnityEngine::RaycastHit raycastHit, UnityEngine_CoreModule::UnityEngine::Transform* trigger, float& maxError)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInRange", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.RaycastHit", "UnityEngine.Transform", "System.Single&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)character;
	params[1] = (intptr_t)raycastFrom;
	params[2] = (intptr_t)&raycastHit;
	params[3] = (intptr_t)trigger;
	params[4] = (intptr_t)&maxError;
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
void Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_Range::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
