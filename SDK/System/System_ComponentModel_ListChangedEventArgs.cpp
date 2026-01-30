#include "System_ComponentModel_ListChangedEventArgs.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::ListChangedEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "ListChangedEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::ListChangedEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::ListChangedEventArgs::_ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.ListChangedType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&listChangedType;
	params[1] = (intptr_t)&newIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ListChangedEventArgs::_ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, System::ComponentModel::PropertyDescriptor* propDesc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.ListChangedType", "System.Int32", "System.ComponentModel.PropertyDescriptor" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&listChangedType;
	params[1] = (intptr_t)&newIndex;
	params[2] = (intptr_t)propDesc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ListChangedEventArgs::_ctor(System::ComponentModel::ListChangedType listChangedType, System::ComponentModel::PropertyDescriptor* propDesc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.ListChangedType", "System.ComponentModel.PropertyDescriptor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&listChangedType;
	params[1] = (intptr_t)propDesc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ListChangedEventArgs::_ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, int32_t oldIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.ListChangedType", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&listChangedType;
	params[1] = (intptr_t)&newIndex;
	params[2] = (intptr_t)&oldIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::ComponentModel::ListChangedType System::System::ComponentModel::ListChangedEventArgs::get_ListChangedType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ListChangedType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::ComponentModel::ListChangedType ret;
		std::memset(&ret, 0, sizeof(System::ComponentModel::ListChangedType));
		return ret;
	}
	return static_cast<System::ComponentModel::ListChangedType>(*(System::ComponentModel::ListChangedType*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::ComponentModel::ListChangedEventArgs::get_NewIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NewIndex");
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
int32_t System::System::ComponentModel::ListChangedEventArgs::get_OldIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OldIndex");
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
System::System::ComponentModel::PropertyDescriptor* System::System::ComponentModel::ListChangedEventArgs::get_PropertyDescriptor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PropertyDescriptor");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptor*)returnValue;
}
