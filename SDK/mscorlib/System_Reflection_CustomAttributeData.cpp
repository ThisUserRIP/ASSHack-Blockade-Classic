#include "System_Reflection_CustomAttributeData.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::CustomAttributeData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection", "CustomAttributeData");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::CustomAttributeData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Reflection::CustomAttributeData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Reflection::CustomAttributeData::_ctor(mscorlib::System::Reflection::ConstructorInfo* ctorInfo, mscorlib::System::Reflection::Assembly* assembly, intptr_t data, uint32_t data_length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Reflection.ConstructorInfo", "System.Reflection.Assembly", "System.IntPtr", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)ctorInfo;
	params[1] = (intptr_t)assembly;
	params[2] = (intptr_t)&data;
	params[3] = (intptr_t)&data_length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Reflection::CustomAttributeData::ResolveArgumentsInternal(mscorlib::System::Reflection::ConstructorInfo* ctor, mscorlib::System::Reflection::Assembly* assembly, intptr_t data, uint32_t data_length, IL2CPP::Array<mscorlib::System::Object*>& ctorArgs, IL2CPP::Array<mscorlib::System::Object*>& namedArgs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveArgumentsInternal", std::vector<std::string> { "System.Reflection.ConstructorInfo", "System.Reflection.Assembly", "System.IntPtr", "System.UInt32", "System.Object[]&", "System.Object[]&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)ctor;
	params[1] = (intptr_t)assembly;
	params[2] = (intptr_t)&data;
	params[3] = (intptr_t)&data_length;
	params[4] = (intptr_t)&ctorArgs;
	params[5] = (intptr_t)&namedArgs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Reflection::CustomAttributeData::ResolveArguments()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveArguments");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Reflection::ConstructorInfo* mscorlib::System::Reflection::CustomAttributeData::get_Constructor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Constructor");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::ConstructorInfo*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeTypedArgument>* mscorlib::System::Reflection::CustomAttributeData::get_ConstructorArguments()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ConstructorArguments");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeTypedArgument>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeNamedArgument>* mscorlib::System::Reflection::CustomAttributeData::get_NamedArguments()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NamedArguments");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeNamedArgument>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* mscorlib::System::Reflection::CustomAttributeData::GetCustomAttributes(mscorlib::System::Reflection::Assembly* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Reflection.Assembly" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* mscorlib::System::Reflection::CustomAttributeData::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Reflection.MemberInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* mscorlib::System::Reflection::CustomAttributeData::GetCustomAttributesInternal(mscorlib::System::RuntimeType* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributesInternal", std::vector<std::string> { "System.RuntimeType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* mscorlib::System::Reflection::CustomAttributeData::GetCustomAttributes(mscorlib::System::Reflection::Module* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Reflection.Module" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* mscorlib::System::Reflection::CustomAttributeData::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Reflection.ParameterInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>*)returnValue;
}
mscorlib::System::Type* mscorlib::System::Reflection::CustomAttributeData::get_AttributeType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AttributeType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::String* mscorlib::System::Reflection::CustomAttributeData::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::Reflection::CustomAttributeData::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
int32_t mscorlib::System::Reflection::CustomAttributeData::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
