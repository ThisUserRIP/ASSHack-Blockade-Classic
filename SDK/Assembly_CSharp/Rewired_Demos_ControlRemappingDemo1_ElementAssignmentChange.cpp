#include "Rewired_Demos_ControlRemappingDemo1_ElementAssignmentChange.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1::GetIl2CppClass(), "ElementAssignmentChange");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange::get_changeType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_changeType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType));
		return ret;
	}
	return static_cast<Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType>(*(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange::set_changeType(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_changeType", std::vector<std::string> { "Rewired.Demos.ControlRemappingDemo1/ElementAssignmentChangeType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::InputMapper_Context* Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange::get_context()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_context");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputMapper_Context*)returnValue;
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange::set_context(Rewired_Core::Rewired::InputMapper_Context* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_context", std::vector<std::string> { "Rewired.InputMapper/Context" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange::_ctor(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType changeType, Rewired_Core::Rewired::InputMapper_Context* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Demos.ControlRemappingDemo1/ElementAssignmentChangeType", "Rewired.InputMapper/Context" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&changeType;
	params[1] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange::_ctor(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Demos.ControlRemappingDemo1/ElementAssignmentChange" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
