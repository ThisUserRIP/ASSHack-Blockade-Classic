#include "System_ComponentModel_AsyncOperationManager.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::AsyncOperationManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "AsyncOperationManager");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::AsyncOperationManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::ComponentModel::AsyncOperation* System::System::ComponentModel::AsyncOperationManager::CreateOperation(mscorlib::System::Object* userSuppliedState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateOperation", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)userSuppliedState;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::AsyncOperation*)returnValue;
}
mscorlib::System::Threading::SynchronizationContext* System::System::ComponentModel::AsyncOperationManager::get_SynchronizationContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SynchronizationContext");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::SynchronizationContext*)returnValue;
}
void System::System::ComponentModel::AsyncOperationManager::set_SynchronizationContext(mscorlib::System::Threading::SynchronizationContext* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SynchronizationContext", std::vector<std::string> { "System.Threading.SynchronizationContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
