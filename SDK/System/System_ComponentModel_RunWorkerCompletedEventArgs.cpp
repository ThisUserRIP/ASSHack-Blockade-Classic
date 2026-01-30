#include "System_ComponentModel_RunWorkerCompletedEventArgs.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::RunWorkerCompletedEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "RunWorkerCompletedEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::RunWorkerCompletedEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::RunWorkerCompletedEventArgs::_ctor(mscorlib::System::Object* result, mscorlib::System::Exception* error, bool cancelled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.Exception", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)result;
	params[1] = (intptr_t)error;
	params[2] = (intptr_t)&cancelled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System::System::ComponentModel::RunWorkerCompletedEventArgs::get_Result()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Result");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System::System::ComponentModel::RunWorkerCompletedEventArgs::get_UserState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UserState");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
