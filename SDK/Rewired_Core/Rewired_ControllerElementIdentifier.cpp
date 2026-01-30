#include "Rewired_ControllerElementIdentifier.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerElementIdentifier::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ControllerElementIdentifier");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerElementIdentifier::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Core::Rewired::ControllerElementIdentifier::get_id()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_id");
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
mscorlib::System::String* Rewired_Core::Rewired::ControllerElementIdentifier::get_name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_name");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::ControllerElementIdentifier::set_name(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_name", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerElementIdentifier::get_positiveName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_positiveName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::ControllerElementIdentifier::set_positiveName(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_positiveName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerElementIdentifier::get_negativeName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_negativeName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::ControllerElementIdentifier::set_negativeName(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_negativeName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerElementType Rewired_Core::Rewired::ControllerElementIdentifier::get_elementType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerElementType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerElementType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerElementType>(*(Rewired_Core::Rewired::ControllerElementType*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::CompoundControllerElementType Rewired_Core::Rewired::ControllerElementIdentifier::get_compoundElementType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_compoundElementType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::CompoundControllerElementType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::CompoundControllerElementType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::CompoundControllerElementType>(*(Rewired_Core::Rewired::CompoundControllerElementType*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ControllerElementIdentifier::get_isCompoundElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isCompoundElement");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ControllerElementIdentifier::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerElementIdentifier::_ctor(Rewired_Core::Rewired::ControllerElementIdentifier* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerElementIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerElementIdentifier::_ctor(int32_t id, mscorlib::System::String* name, mscorlib::System::String* positiveName, mscorlib::System::String* negativeName, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::CompoundControllerElementType compoundElementType, bool isMappableOnPlatform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.String", "Rewired.ControllerElementType", "Rewired.CompoundControllerElementType", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)positiveName;
	params[3] = (intptr_t)negativeName;
	params[4] = (intptr_t)&elementType;
	params[5] = (intptr_t)&compoundElementType;
	params[6] = (intptr_t)&isMappableOnPlatform;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerElementIdentifier::_ctor(int32_t id, mscorlib::System::String* name, mscorlib::System::String* positiveName, mscorlib::System::String* negativeName, Rewired_Core::Rewired::ControllerElementType elementType, bool isMappableOnPlatform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.String", "Rewired.ControllerElementType", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)positiveName;
	params[3] = (intptr_t)negativeName;
	params[4] = (intptr_t)&elementType;
	params[5] = (intptr_t)&isMappableOnPlatform;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerElementIdentifier::_ctor(Rewired_Core::Rewired::ControllerElementIdentifier* source, bool isMappableOnPlatform, Rewired_Core::Rewired::ControllerElementType changedElementType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerElementIdentifier", "System.Boolean", "Rewired.ControllerElementType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)&isMappableOnPlatform;
	params[2] = (intptr_t)&changedElementType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::ControllerElementIdentifier::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerElementIdentifier::GetDisplayName(Rewired_Core::Rewired::ControllerElementType actualElementType, Rewired_Core::Rewired::AxisRange axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDisplayName", std::vector<std::string> { "Rewired.ControllerElementType", "Rewired.AxisRange" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actualElementType;
	params[1] = (intptr_t)&axisRange;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerElementIdentifier::GetDisplayName(Rewired_Core::Rewired::AxisRange axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDisplayName", std::vector<std::string> { "Rewired.AxisRange" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&axisRange;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Object* Rewired_Core::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_elementType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_elementType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool Rewired_Core::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_useEditorElementTypeOverride()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_useEditorElementTypeOverride");
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
Rewired_Core::Rewired::ControllerElementType Rewired_Core::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_editorElementTypeOverride()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_editorElementTypeOverride");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerElementType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerElementType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerElementType>(*(Rewired_Core::Rewired::ControllerElementType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ControllerElementIdentifier::bCELNeUADMxtpjjomeInEGLqDjbf()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bCELNeUADMxtpjjomeInEGLqDjbf");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::ControllerElementIdentifier::get_BlankReadOnly()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BlankReadOnly");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
