#include "System_ComponentModel_CollectionChangeEventArgs.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::CollectionChangeEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "CollectionChangeEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::CollectionChangeEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::CollectionChangeEventArgs::_ctor(System::ComponentModel::CollectionChangeAction action, mscorlib::System::Object* element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.CollectionChangeAction", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&action;
	params[1] = (intptr_t)element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::ComponentModel::CollectionChangeAction System::System::ComponentModel::CollectionChangeEventArgs::get_Action()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Action");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::ComponentModel::CollectionChangeAction ret;
		std::memset(&ret, 0, sizeof(System::ComponentModel::CollectionChangeAction));
		return ret;
	}
	return static_cast<System::ComponentModel::CollectionChangeAction>(*(System::ComponentModel::CollectionChangeAction*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* System::System::ComponentModel::CollectionChangeEventArgs::get_Element()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Element");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
