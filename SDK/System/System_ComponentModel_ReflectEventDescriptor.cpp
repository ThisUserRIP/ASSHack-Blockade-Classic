#include "System_ComponentModel_ReflectEventDescriptor.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::ReflectEventDescriptor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "ReflectEventDescriptor");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::ReflectEventDescriptor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::ReflectEventDescriptor::_ctor(mscorlib::System::Type* componentClass, mscorlib::System::String* name, mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Attribute*>* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type", "System.String", "System.Type", "System.Attribute[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)componentClass;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)type;
	params[3] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ReflectEventDescriptor::_ctor(mscorlib::System::Type* componentClass, mscorlib::System::Reflection::EventInfo* eventInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type", "System.Reflection.EventInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)componentClass;
	params[1] = (intptr_t)eventInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ReflectEventDescriptor::_ctor(mscorlib::System::Type* componentType, System::ComponentModel::EventDescriptor* oldReflectEventDescriptor, IL2CPP::Array<mscorlib::System::Attribute*>* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type", "System.ComponentModel.EventDescriptor", "System.Attribute[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)componentType;
	params[1] = (intptr_t)oldReflectEventDescriptor;
	params[2] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Type* System::System::ComponentModel::ReflectEventDescriptor::get_ComponentType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ComponentType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Type* System::System::ComponentModel::ReflectEventDescriptor::get_EventType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EventType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
bool System::System::ComponentModel::ReflectEventDescriptor::get_IsMulticast()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsMulticast");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System::System::ComponentModel::ReflectEventDescriptor::AddEventHandler(mscorlib::System::Object* component, mscorlib::System::Delegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddEventHandler", std::vector<std::string> { "System.Object", "System.Delegate" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ReflectEventDescriptor::FillAttributes(mscorlib::System::Collections::IList* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillAttributes", std::vector<std::string> { "System.Collections.IList" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute(mscorlib::System::Reflection::EventInfo* realEventInfo, mscorlib::System::Collections::IList* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillEventInfoAttribute", std::vector<std::string> { "System.Reflection.EventInfo", "System.Collections.IList" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)realEventInfo;
	params[1] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ReflectEventDescriptor::FillMethods()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillMethods");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute(mscorlib::System::Reflection::MethodInfo* realMethodInfo, mscorlib::System::Collections::IList* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillSingleMethodAttribute", std::vector<std::string> { "System.Reflection.MethodInfo", "System.Collections.IList" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)realMethodInfo;
	params[1] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::ReflectEventDescriptor::RemoveEventHandler(mscorlib::System::Object* component, mscorlib::System::Delegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveEventHandler", std::vector<std::string> { "System.Object", "System.Delegate" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)component;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
