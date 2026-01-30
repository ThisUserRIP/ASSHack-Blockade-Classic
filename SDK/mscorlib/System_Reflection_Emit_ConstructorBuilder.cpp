#include "System_Reflection_Emit_ConstructorBuilder.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::Emit::ConstructorBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection.Emit", "ConstructorBuilder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::Emit::ConstructorBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Reflection::MethodAttributes mscorlib::System::Reflection::Emit::ConstructorBuilder::get_Attributes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Attributes");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Reflection::MethodAttributes ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Reflection::MethodAttributes));
		return ret;
	}
	return static_cast<mscorlib::System::Reflection::MethodAttributes>(*(mscorlib::System::Reflection::MethodAttributes*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Type* mscorlib::System::Reflection::Emit::ConstructorBuilder::get_DeclaringType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DeclaringType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::String* mscorlib::System::Reflection::Emit::ConstructorBuilder::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* mscorlib::System::Reflection::Emit::ConstructorBuilder::GetParameters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetParameters");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>*)returnValue;
}
mscorlib::System::RuntimeMethodHandle mscorlib::System::Reflection::Emit::ConstructorBuilder::get_MethodHandle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MethodHandle");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::RuntimeMethodHandle ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::RuntimeMethodHandle));
		return ret;
	}
	return static_cast<mscorlib::System::RuntimeMethodHandle>(*(mscorlib::System::RuntimeMethodHandle*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Type* mscorlib::System::Reflection::Emit::ConstructorBuilder::get_ReflectedType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ReflectedType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::Reflection::Emit::ConstructorBuilder::GetCustomAttributes(bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::Reflection::Emit::ConstructorBuilder::GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Type", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attributeType;
	params[1] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
mscorlib::System::Reflection::MethodImplAttributes mscorlib::System::Reflection::Emit::ConstructorBuilder::GetMethodImplementationFlags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodImplementationFlags");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Reflection::MethodImplAttributes ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Reflection::MethodImplAttributes));
		return ret;
	}
	return static_cast<mscorlib::System::Reflection::MethodImplAttributes>(*(mscorlib::System::Reflection::MethodImplAttributes*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::System::Reflection::Emit::ConstructorBuilder::Invoke(mscorlib::System::Object* obj, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.Object", "System.Reflection.BindingFlags", "System.Reflection.Binder", "System.Object[]", "System.Globalization.CultureInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&invokeAttr;
	params[2] = (intptr_t)binder;
	params[3] = (intptr_t)parameters;
	params[4] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Reflection::Emit::ConstructorBuilder::Invoke(mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* parameters, mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.Reflection.BindingFlags", "System.Reflection.Binder", "System.Object[]", "System.Globalization.CultureInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&invokeAttr;
	params[1] = (intptr_t)binder;
	params[2] = (intptr_t)parameters;
	params[3] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool mscorlib::System::Reflection::Emit::ConstructorBuilder::IsDefined(mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefined", std::vector<std::string> { "System.Type", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attributeType;
	params[1] = (intptr_t)&inherit;
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
