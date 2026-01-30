#include "Rewired_Internal_ControllerTemplateFactory.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Internal::ControllerTemplateFactory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.Internal", "ControllerTemplateFactory");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Internal::ControllerTemplateFactory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<mscorlib::System::Type*>* Assembly_CSharp::Rewired::Internal::ControllerTemplateFactory::get_templateTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_templateTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Type*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Type*>* Assembly_CSharp::Rewired::Internal::ControllerTemplateFactory::get_templateInterfaceTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_templateInterfaceTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Type*>*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplate* Assembly_CSharp::Rewired::Internal::ControllerTemplateFactory::Create(mscorlib::System::Guid typeGuid, mscorlib::System::Object* payload)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Guid", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&typeGuid;
	params[1] = (intptr_t)payload;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplate*)returnValue;
}
void Assembly_CSharp::Rewired::Internal::ControllerTemplateFactory::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
