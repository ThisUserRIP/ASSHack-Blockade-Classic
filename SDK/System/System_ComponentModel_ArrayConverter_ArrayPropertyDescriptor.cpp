#include "System_ComponentModel_ArrayConverter_ArrayPropertyDescriptor.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::ArrayConverter::GetIl2CppClass(), "ArrayPropertyDescriptor");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::_ctor(mscorlib::System::Type* arrayType, mscorlib::System::Type* elementType, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type", "System.Type", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)arrayType;
	params[1] = (intptr_t)elementType;
	params[2] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::GetValue(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::SetValue(mscorlib::System::Object* instance, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetValue", std::vector<std::string> { "System.Object", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)instance;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
