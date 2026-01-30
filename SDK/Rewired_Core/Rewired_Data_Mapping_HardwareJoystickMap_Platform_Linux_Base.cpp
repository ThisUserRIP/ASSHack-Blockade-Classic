#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Linux_Base.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap::GetIl2CppClass(), "Platform_Linux_Base");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::InputPlatform Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_platform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_platform");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::InputPlatform ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::InputPlatform));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::InputPlatform>(*(Rewired_Core::Rewired::InputPlatform*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_hasData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hasData");
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
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_disabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_disabled");
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
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_isAllowed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isAllowed");
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
IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base_Axis*>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_Axes_orig()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Axes_orig");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base_Axis*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base_Button*>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_Buttons_orig()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Buttons_orig");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base_Button*>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_variants_base()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_variants_base");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform>*)returnValue;
}
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* BridgedControllerHWInfo, bool strictMatch, int32_t& variantIndex, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform& platformMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Matches", std::vector<std::string> { "Rewired.BridgedControllerHWInfo", "System.Boolean", "System.Int32&", "Rewired.Data.Mapping.HardwareJoystickMap/Platform&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)BridgedControllerHWInfo;
	params[1] = (intptr_t)&strictMatch;
	params[2] = (intptr_t)&variantIndex;
	params[3] = (intptr_t)&platformMap;
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
int32_t Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_assignedButtonCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_assignedButtonCount");
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
int32_t Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_assignedAxisCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_assignedAxisCount");
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
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetAxisNames(IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* identifiers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisNames", std::vector<std::string> { "Rewired.ControllerElementIdentifier[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)identifiers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetEffectiveButtonNames(IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* identifiers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEffectiveButtonNames", std::vector<std::string> { "Rewired.ControllerElementIdentifier[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)identifiers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::IsElementIdentifierMapped(int32_t elementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsElementIdentifierMapped", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementIdentifierId;
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
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetGameElementIdentifierIdMappings(IL2CPP::Array<int32_t>& buttons, IL2CPP::Array<int32_t>& axes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGameElementIdentifierIdMappings", std::vector<std::string> { "System.Int32[]&", "System.Int32[]&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buttons;
	params[1] = (intptr_t)&axes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetAxisCalibrationData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisCalibrationData");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>*)returnValue;
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetAxisData(IL2CPP::Array<Rewired_Core::Rewired::AxisRange>& axisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>& axisInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisData", std::vector<std::string> { "Rewired.AxisRange[]&", "Rewired.Data.Mapping.HardwareAxisInfo[]&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&axisRanges;
	params[1] = (intptr_t)&axisInfos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetButtonData(IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>& buttonInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonData", std::vector<std::string> { "Rewired.Data.Mapping.HardwareButtonInfo[]&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&buttonInfos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerElementType Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetEffectiveElementIdentifierType(Rewired_Core::Rewired::ControllerElementIdentifier* elementIdentifier)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEffectiveElementIdentifierType", std::vector<std::string> { "Rewired.ControllerElementIdentifier" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementIdentifier;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::GetEffectiveAxisRange(Rewired_Core::Rewired::ControllerElementIdentifier* elementIdentifier, Rewired_Core::Rewired::AxisRange& axisRange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEffectiveAxisRange", std::vector<std::string> { "Rewired.ControllerElementIdentifier", "Rewired.AxisRange&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementIdentifier;
	params[1] = (intptr_t)&axisRange;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base_Axis>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::IterateAxes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IterateAxes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base_Axis>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base_Button>* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::IterateButtons()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IterateButtons");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base_Button>*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::get_elements_base()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elements_base");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base*)returnValue;
}
mscorlib::System::Object* Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::DeepClone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeepClone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* destination)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyVars", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap/Platform" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)destination;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux_Base::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
