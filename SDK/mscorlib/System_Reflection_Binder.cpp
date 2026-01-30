#include "System_Reflection_Binder.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::Binder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection", "Binder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::Binder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::Reflection::Binder::BindToMethod(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Object*>& args, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers, mscorlib::System::Globalization::CultureInfo* culture, IL2CPP::Array<mscorlib::System::String*>* names, mscorlib::System::Object& state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BindToMethod", std::vector<std::string> { "System.Reflection.BindingFlags", "System.Reflection.MethodBase[]", "System.Object[]&", "System.Reflection.ParameterModifier[]", "System.Globalization.CultureInfo", "System.String[]", "System.Object&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&bindingAttr;
	params[1] = (intptr_t)match;
	params[2] = (intptr_t)&args;
	params[3] = (intptr_t)modifiers;
	params[4] = (intptr_t)culture;
	params[5] = (intptr_t)names;
	params[6] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
mscorlib::System::Reflection::FieldInfo* mscorlib::System::Reflection::Binder::BindToField(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* match, mscorlib::System::Object* value, mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BindToField", std::vector<std::string> { "System.Reflection.BindingFlags", "System.Reflection.FieldInfo[]", "System.Object", "System.Globalization.CultureInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&bindingAttr;
	params[1] = (intptr_t)match;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::FieldInfo*)returnValue;
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::Reflection::Binder::SelectMethod(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::MethodBase*>* match, IL2CPP::Array<mscorlib::System::Type*>* types, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectMethod", std::vector<std::string> { "System.Reflection.BindingFlags", "System.Reflection.MethodBase[]", "System.Type[]", "System.Reflection.ParameterModifier[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&bindingAttr;
	params[1] = (intptr_t)match;
	params[2] = (intptr_t)types;
	params[3] = (intptr_t)modifiers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
mscorlib::System::Reflection::PropertyInfo* mscorlib::System::Reflection::Binder::SelectProperty(mscorlib::System::Reflection::BindingFlags bindingAttr, IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* match, mscorlib::System::Type* returnType, IL2CPP::Array<mscorlib::System::Type*>* indexes, IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* modifiers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectProperty", std::vector<std::string> { "System.Reflection.BindingFlags", "System.Reflection.PropertyInfo[]", "System.Type", "System.Type[]", "System.Reflection.ParameterModifier[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&bindingAttr;
	params[1] = (intptr_t)match;
	params[2] = (intptr_t)returnType;
	params[3] = (intptr_t)indexes;
	params[4] = (intptr_t)modifiers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::PropertyInfo*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Reflection::Binder::ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* type, mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeType", std::vector<std::string> { "System.Object", "System.Type", "System.Globalization.CultureInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Reflection::Binder::ReorderArgumentArray(IL2CPP::Array<mscorlib::System::Object*>& args, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReorderArgumentArray", std::vector<std::string> { "System.Object[]&", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&args;
	params[1] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Reflection::Binder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
