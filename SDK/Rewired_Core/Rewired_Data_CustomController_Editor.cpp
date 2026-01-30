#include "Rewired_Data_CustomController_Editor.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::CustomController_Editor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data", "CustomController_Editor");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::CustomController_Editor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Rewired_Core::Rewired::Data::CustomController_Editor::get_name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::Data::CustomController_Editor::set_name(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_name", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::Data::CustomController_Editor::get_descriptiveName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_descriptiveName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::Data::CustomController_Editor::set_descriptiveName(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_descriptiveName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::Data::CustomController_Editor::get_id()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_id");
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
void Rewired_Core::Rewired::Data::CustomController_Editor::set_id(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_id", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Guid Rewired_Core::Rewired::Data::CustomController_Editor::get_typeGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_typeGuid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::CustomController_Editor::set_typeGuid(mscorlib::System::Guid value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_typeGuid", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::Data::CustomController_Editor::get_typeGuidString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_typeGuidString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::Data::CustomController_Editor::set_typeGuidString(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_typeGuidString", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerElementIdentifier>* Rewired_Core::Rewired::Data::CustomController_Editor::get_elementIdentifiers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementIdentifiers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerElementIdentifier>*)returnValue;
}
void Rewired_Core::Rewired::Data::CustomController_Editor::set_elementIdentifiers(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerElementIdentifier>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_elementIdentifiers", std::vector<std::string> { "System.Collections.Generic.List`1<Rewired.ControllerElementIdentifier>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::CustomController_Editor_Axis>* Rewired_Core::Rewired::Data::CustomController_Editor::get_axes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_axes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::CustomController_Editor_Axis>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::CustomController_Editor_Button>* Rewired_Core::Rewired::Data::CustomController_Editor::get_buttons()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_buttons");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::CustomController_Editor_Button>*)returnValue;
}
int32_t Rewired_Core::Rewired::Data::CustomController_Editor::get_buttonCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_buttonCount");
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
int32_t Rewired_Core::Rewired::Data::CustomController_Editor::get_axisCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_axisCount");
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerElementIdentifier>* Rewired_Core::Rewired::Data::CustomController_Editor::get_ElementIdentifiers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ElementIdentifiers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerElementIdentifier>*)returnValue;
}
void Rewired_Core::Rewired::Data::CustomController_Editor::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor::_ctor(Rewired_Core::Rewired::Data::CustomController_Editor* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Data.CustomController_Editor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Data::CustomController_Editor* Rewired_Core::Rewired::Data::CustomController_Editor::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::CustomController_Editor*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::CustomController_Editor::GetElementIdentifierNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<int32_t>* Rewired_Core::Rewired::Data::CustomController_Editor::GetElementIdentifierIds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierIds");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::CustomController_Editor::GetElementIdentifierNamesTypeSorted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierNamesTypeSorted");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<int32_t>* Rewired_Core::Rewired::Data::CustomController_Editor::GetElementIdentifierIdsTypeSorted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierIdsTypeSorted");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* Rewired_Core::Rewired::Data::CustomController_Editor::GetElementIdentifiersTypeSorted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifiersTypeSorted");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>*)returnValue;
}
bool Rewired_Core::Rewired::Data::CustomController_Editor::ContainsElementIdentifier(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsElementIdentifier", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Rewired_Core::Rewired::Data::CustomController_Editor::IndexOfElementIdentifier(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOfElementIdentifier", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::Data::CustomController_Editor::GetElementIdentifier(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifier", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::ControllerElementType Rewired_Core::Rewired::Data::CustomController_Editor::WJDLAEhiXhDWJatwkzMnhCTZHTLe(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WJDLAEhiXhDWJatwkzMnhCTZHTLe");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerElementType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerElementType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerElementType>(*(Rewired_Core::Rewired::ControllerElementType*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Data::CustomController_Editor::MlNDieenpQvdIhRwEVqdLjzAoyJ(int32_t A_1, Rewired_Core::Rewired::AxisRange& A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MlNDieenpQvdIhRwEVqdLjzAoyJ", std::vector<std::string> { "System.Int32", "Rewired.AxisRange&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::CustomController_Editor::GetButtonNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<int32_t>* Rewired_Core::Rewired::Data::CustomController_Editor::GetButtonElementIdentifierIds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonElementIdentifierIds");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::CustomController_Editor::GetAxisNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<int32_t>* Rewired_Core::Rewired::Data::CustomController_Editor::GetAxisElementIdentifierIds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisElementIdentifierIds");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::CustomController_Editor::GetElementNames(Rewired_Core::Rewired::ControllerElementType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementNames", std::vector<std::string> { "Rewired.ControllerElementType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<int32_t>* Rewired_Core::Rewired::Data::CustomController_Editor::GetElementElementIdentifierIds(Rewired_Core::Rewired::ControllerElementType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementElementIdentifierIds", std::vector<std::string> { "Rewired.ControllerElementType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
void Rewired_Core::Rewired::Data::CustomController_Editor::AddElement(Rewired_Core::Rewired::ControllerElementType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddElement", std::vector<std::string> { "Rewired.ControllerElementType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor::AddAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAxis");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor::AddButton()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddButton");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor::InsertElement(Rewired_Core::Rewired::ControllerElementType type, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InsertElement", std::vector<std::string> { "Rewired.ControllerElementType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor::InsertAxis(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InsertAxis", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor::InsertButton(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InsertButton", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor::DeleteElement(Rewired_Core::Rewired::ControllerElementType type, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteElement", std::vector<std::string> { "Rewired.ControllerElementType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::CustomController_Editor::ReorderElement(Rewired_Core::Rewired::ControllerElementType type, int32_t index, bool offsetDown, bool offsetNow)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReorderElement", std::vector<std::string> { "Rewired.ControllerElementType", "System.Int32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&offsetDown;
	params[3] = (intptr_t)&offsetNow;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Rewired_Core::Rewired::Data::CustomController_Editor::DuplicateElement(Rewired_Core::Rewired::ControllerElementType type, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DuplicateElement", std::vector<std::string> { "Rewired.ControllerElementType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::Data::CustomController_Editor::cEenIdiIYZMqSXstjGqHyBmUCRoK(int32_t A_1, mscorlib::System::String* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cEenIdiIYZMqSXstjGqHyBmUCRoK");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::Data::CustomController_Editor_Element* Rewired_Core::Rewired::Data::CustomController_Editor::qsPNjUuOWmRfwuDsruwHhtUiRFN(Rewired_Core::Rewired::ControllerElementType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qsPNjUuOWmRfwuDsruwHhtUiRFN");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::CustomController_Editor_Element*)returnValue;
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::Data::CustomController_Editor::xWTZIzIoHGMPvZymCfmUNxDjAQX(Rewired_Core::Rewired::ControllerElementType A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xWTZIzIoHGMPvZymCfmUNxDjAQX");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::HardwareControllerMap_Game* Rewired_Core::Rewired::Data::CustomController_Editor::ldLHiqOqKKMciKQcqptJxbtNtnY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ldLHiqOqKKMciKQcqptJxbtNtnY");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HardwareControllerMap_Game*)returnValue;
}
