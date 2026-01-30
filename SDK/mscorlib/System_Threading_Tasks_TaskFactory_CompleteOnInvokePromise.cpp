#include "System_Threading_Tasks_TaskFactory_CompleteOnInvokePromise.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Threading::Tasks::TaskFactory::GetIl2CppClass(), "CompleteOnInvokePromise");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::_ctor(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Threading::Tasks::Task>* tasks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.IList`1<System.Threading.Tasks.Task>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tasks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::TaskFactory_CompleteOnInvokePromise::Invoke(mscorlib::System::Threading::Tasks::Task* completingTask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.Threading.Tasks.Task" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)completingTask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
