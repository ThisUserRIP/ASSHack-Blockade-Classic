#include "Rewired_ControllerTemplateMap.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerTemplateMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ControllerTemplateMap");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerTemplateMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerTemplateMap::_ctor(mscorlib::System::Guid templateTypeGuid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&templateTypeGuid;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerTemplateMap::_ctor(mscorlib::System::Guid templateTypeGuid, int32_t categoryId, int32_t layoutId, int32_t sourceMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Guid", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&templateTypeGuid;
	params[1] = (intptr_t)&categoryId;
	params[2] = (intptr_t)&layoutId;
	params[3] = (intptr_t)&sourceMapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerTemplateMap::get_id()
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
mscorlib::System::Guid Rewired_Core::Rewired::ControllerTemplateMap::get_templateTypeGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_templateTypeGuid");
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
bool Rewired_Core::Rewired::ControllerTemplateMap::get_enabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_enabled");
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
void Rewired_Core::Rewired::ControllerTemplateMap::set_enabled(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_enabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerTemplateMap::get_categoryId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_categoryId");
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
void Rewired_Core::Rewired::ControllerTemplateMap::set_categoryId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_categoryId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerTemplateMap::get_layoutId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_layoutId");
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
void Rewired_Core::Rewired::ControllerTemplateMap::set_layoutId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_layoutId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateActionElementMap>* Rewired_Core::Rewired::ControllerTemplateMap::get_ElementMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ElementMaps");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateActionElementMap>*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerTemplateMap::ToXmlString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToXmlString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerTemplateMap::ToJsonString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToJsonString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ControllerTemplateMap::ToControllerMap(Rewired_Core::Rewired::Controller* controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToControllerMap", std::vector<std::string> { "Rewired.Controller" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controller;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
void Rewired_Core::Rewired::ControllerTemplateMap::ExportDataToSerializedObject(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExportDataToSerializedObject", std::vector<std::string> { "Rewired.Utils.Classes.Data.SerializedObject" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serializedObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerTemplateMap::Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import", std::vector<std::string> { "Rewired.Utils.Classes.Data.SerializedObject" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serializedObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerTemplateMap::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* Rewired_Core::Rewired::ControllerTemplateMap::Export()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Export");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject*)returnValue;
}
void Rewired_Core::Rewired::ControllerTemplateMap::AddElementMap(Rewired_Core::Rewired::ControllerTemplateActionElementMap* elementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddElementMap", std::vector<std::string> { "Rewired.ControllerTemplateActionElementMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::ControllerTemplateMap::FromControllerMap(Rewired_Core::Rewired::IControllerTemplate* controllerTemplate, Rewired_Core::Rewired::ControllerMap* controllerMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromControllerMap", std::vector<std::string> { "Rewired.IControllerTemplate", "Rewired.ControllerMap" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controllerTemplate;
	params[1] = (intptr_t)controllerMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::ControllerTemplateMap::FromXml(mscorlib::System::String* xmlString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromXml", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xmlString;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::ControllerTemplateMap::FromJson(mscorlib::System::String* jsonString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromJson", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)jsonString;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::ControllerTemplateMap::FromSerializedData(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromSerializedData", std::vector<std::string> { "Rewired.Utils.Classes.Data.SerializedObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serializedObject;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
void Rewired_Core::Rewired::ControllerTemplateMap::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
