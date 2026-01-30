#include "Rewired_Data_Mapping_HardwareJoystickMap.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data.Mapping", "HardwareJoystickMap");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::_ctor(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::get_ControllerName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ControllerName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::get_EditorControllerName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EditorControllerName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Guid Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::get_Guid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Guid");
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
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Guid>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::get_TemplateGuids()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TemplateGuids");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Guid>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerElementIdentifier>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::get_ElementIdentifiers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ElementIdentifiers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerElementIdentifier>*)returnValue;
}
int32_t Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::get_elementIdentifierCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementIdentifierCount");
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
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::get_HideInLists()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HideInLists");
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::JoystickType>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::get_JoystickTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_JoystickTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::JoystickType>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetElementIdentifierNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierNames");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<int32_t>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetElementIdentifierIds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierIds");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetElementIdentifier(int32_t id)
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
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::ContainsElementIdentifier(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsElementIdentifier", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
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
int32_t Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetElementIdentifierInfo(Rewired_Core::Rewired::ControllerElementType type, IL2CPP::Array<mscorlib::System::String*>& names, IL2CPP::Array<int32_t>& ids)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierInfo", std::vector<std::string> { "Rewired.ControllerElementType", "System.String[]&", "System.Int32[]&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)&names;
	params[2] = (intptr_t)&ids;
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
int32_t Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetMappableElementIdentifierInfo(IL2CPP::Array<mscorlib::System::String*>& names, IL2CPP::Array<int32_t>& ids)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMappableElementIdentifierInfo", std::vector<std::string> { "System.String[]&", "System.Int32[]&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&names;
	params[1] = (intptr_t)&ids;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap*)returnValue;
}
int32_t Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::IndexOfElementIdentifier(int32_t id)
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
Rewired_Core::Rewired::ControllerElementType Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetEffectiveElementIdentifierType(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, int32_t elementIdentifierId, bool isDefaultMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEffectiveElementIdentifierType", std::vector<std::string> { "Rewired.HardwareControllerMapIdentifier", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hardwareMapIdentifier;
	params[1] = (intptr_t)&elementIdentifierId;
	params[2] = (intptr_t)&isDefaultMap;
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
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetEffectiveAxisRange(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, int32_t elementIdentifierId, bool isDefaultMap, Rewired_Core::Rewired::AxisRange& axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEffectiveAxisRange", std::vector<std::string> { "Rewired.HardwareControllerMapIdentifier", "System.Int32", "System.Boolean", "Rewired.AxisRange&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&hardwareMapIdentifier;
	params[1] = (intptr_t)&elementIdentifierId;
	params[2] = (intptr_t)&isDefaultMap;
	params[3] = (intptr_t)&axisRange;
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
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetElementIdentifiersForControllerElements(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, bool isDefaultMap, IL2CPP::Array<int32_t>& buttons, IL2CPP::Array<int32_t>& axes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifiersForControllerElements", std::vector<std::string> { "Rewired.HardwareControllerMapIdentifier", "System.Boolean", "System.Int32[]&", "System.Int32[]&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&hardwareMapIdentifier;
	params[1] = (intptr_t)&isDefaultMap;
	params[2] = (intptr_t)&buttons;
	params[3] = (intptr_t)&axes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::Matches(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* platform, Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch, int32_t& variantIndex, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform& platformMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Matches", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap/Platform", "Rewired.BridgedControllerHWInfo", "System.Boolean", "System.Int32&", "Rewired.Data.Mapping.HardwareJoystickMap/Platform&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)platform;
	params[1] = (intptr_t)bridgedControllerHWInfo;
	params[2] = (intptr_t)&strictMatch;
	params[3] = (intptr_t)&variantIndex;
	params[4] = (intptr_t)&platformMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform& platformMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Matches", std::vector<std::string> { "Rewired.BridgedControllerHWInfo", "System.Boolean", "System.Boolean", "Rewired.InputPlatform&", "System.Int32&", "Rewired.Data.Mapping.HardwareJoystickMap/Platform&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)bridgedControllerHWInfo;
	params[1] = (intptr_t)&strictMatch;
	params[2] = (intptr_t)&isDefaultMap;
	params[3] = (intptr_t)&actualInputPlatform;
	params[4] = (intptr_t)&variantIndex;
	params[5] = (intptr_t)&platformMap;
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
Rewired_Core::Rewired::HardwareJoystickMap_InputManager* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetDefaultHardwareJoystickMap_InputManager(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedController)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultHardwareJoystickMap_InputManager", std::vector<std::string> { "Rewired.BridgedControllerHWInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bridgedController;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HardwareJoystickMap_InputManager*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetTemplateGuidsOrig()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTemplateGuidsOrig");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_ElementIdentifiers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_ElementIdentifiers");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal>*)returnValue;
}
Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_GetElementIdentifier(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.Data.Mapping.IHardwareControllerMap_Internal.GetElementIdentifier", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::FindFallbackMatch(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindFallbackMatch", std::vector<std::string> { "Rewired.BridgedControllerHWInfo", "System.Boolean", "System.Boolean", "Rewired.InputPlatform&", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)bridgedControllerHWInfo;
	params[1] = (intptr_t)&strictMatch;
	params[2] = (intptr_t)&isDefaultMap;
	params[3] = (intptr_t)&actualInputPlatform;
	params[4] = (intptr_t)&variantIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::FindFallbackMap(Rewired_Core::Rewired::InputSource inputSource, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindFallbackMap", std::vector<std::string> { "Rewired.InputSource", "System.Boolean", "Rewired.InputPlatform&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&inputSource;
	params[1] = (intptr_t)&isDefaultMap;
	params[2] = (intptr_t)&actualInputPlatform;
	params[3] = (intptr_t)&variantIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_SDL2_Base* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::FindSDL2Match(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSDL2Match", std::vector<std::string> { "Rewired.BridgedControllerHWInfo", "System.Boolean", "System.Boolean", "Rewired.InputPlatform&", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)bridgedControllerHWInfo;
	params[1] = (intptr_t)&strictMatch;
	params[2] = (intptr_t)&isDefaultMap;
	params[3] = (intptr_t)&actualInputPlatform;
	params[4] = (intptr_t)&variantIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_SDL2_Base*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_SDL2_Base* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::FindSDL2Map(Rewired_Core::Rewired::InputSource inputSource, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSDL2Map", std::vector<std::string> { "Rewired.InputSource", "System.Boolean", "Rewired.InputPlatform&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&inputSource;
	params[1] = (intptr_t)&isDefaultMap;
	params[2] = (intptr_t)&actualInputPlatform;
	params[3] = (intptr_t)&variantIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_SDL2_Base*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetSpecificPlatformMap(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpecificPlatformMap", std::vector<std::string> { "Rewired.HardwareControllerMapIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hardwareMapIdentifier;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetSpecificPlatformRoot(Rewired_Core::Rewired::InputPlatform exactInputPlatform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpecificPlatformRoot", std::vector<std::string> { "Rewired.InputPlatform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&exactInputPlatform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform*)returnValue;
}
