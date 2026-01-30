#include "Rewired_Utils_SafeAction.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::SafeAction::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "SafeAction");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::SafeAction::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Utils::SafeAction::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::SafeAction::_ctor(mscorlib::System::Action_1<mscorlib::System::Exception>* exceptionHandler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Action`1<System.Exception>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)exceptionHandler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::SafeAction::_ctor(Rewired_Core::Rewired::Utils::SafeAction* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Utils.SafeAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::SafeAction::Invoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* Rewired_Core::Rewired::Utils::SafeAction::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Action_2<mscorlib::System::Object, mscorlib::System::Action>* Rewired_Core::Rewired::Utils::SafeAction::BOiEgTxeHGQPSSmzxrYgmpCvFML()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BOiEgTxeHGQPSSmzxrYgmpCvFML");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_2<mscorlib::System::Object, mscorlib::System::Action>*)returnValue;
}
void Rewired_Core::Rewired::Utils::SafeAction::SoFByphuoXNGmWMeuLgtGSzkjuHv(mscorlib::System::Object* A_0, mscorlib::System::Action* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SoFByphuoXNGmWMeuLgtGSzkjuHv");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Utils::SafeAction* Rewired_Core::Rewired::Utils::SafeAction::op_Addition(Rewired_Core::Rewired::Utils::SafeAction* eventList, mscorlib::System::Action* listener)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "Rewired.Utils.SafeAction", "System.Action" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventList;
	params[1] = (intptr_t)listener;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::SafeAction*)returnValue;
}
Rewired_Core::Rewired::Utils::SafeAction* Rewired_Core::Rewired::Utils::operator+(Rewired_Core::Rewired::Utils::SafeAction& eventList, mscorlib::System::Action& listener)
{
	return Rewired_Core::Rewired::Utils::SafeAction::op_Addition(eventList, listener);
}
Rewired_Core::Rewired::Utils::SafeAction* Rewired_Core::Rewired::Utils::SafeAction::op_Subtraction(Rewired_Core::Rewired::Utils::SafeAction* eventList, mscorlib::System::Action* listener)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Rewired.Utils.SafeAction", "System.Action" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventList;
	params[1] = (intptr_t)listener;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::SafeAction*)returnValue;
}
Rewired_Core::Rewired::Utils::SafeAction* Rewired_Core::Rewired::Utils::operator-(Rewired_Core::Rewired::Utils::SafeAction& eventList, mscorlib::System::Action& listener)
{
	return Rewired_Core::Rewired::Utils::SafeAction::op_Subtraction(eventList, listener);
}
mscorlib::System::Action* Rewired_Core::Rewired::Utils::SafeAction::op_Implicit(Rewired_Core::Rewired::Utils::SafeAction* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "Rewired.Utils.SafeAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action*)returnValue;
}
Rewired_Core::Rewired::Utils::SafeAction* Rewired_Core::Rewired::Utils::SafeAction::op_Implicit(mscorlib::System::Action* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::SafeAction*)returnValue;
}
