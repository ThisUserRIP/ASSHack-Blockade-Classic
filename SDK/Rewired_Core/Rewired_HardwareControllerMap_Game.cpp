#include "Rewired_HardwareControllerMap_Game.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HardwareControllerMap_Game::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "HardwareControllerMap_Game");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HardwareControllerMap_Game::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::HardwareControllerMap_Game::_ctor(mscorlib::System::String* controllerName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controllerName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HardwareControllerMap_Game::_ctor(mscorlib::System::String* controllerName, int32_t customControllerSourceId, IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* hardwareElementIdentifiers, IL2CPP::Array<int32_t>* buttonElementIdentifierIds, IL2CPP::Array<int32_t>* axisElementIdentifierIds, IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hwAxisCalibrationData, IL2CPP::Array<Rewired_Core::Rewired::AxisRange>* hwAxisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>* hwAxisInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "Rewired.ControllerElementIdentifier[]", "System.Int32[]", "System.Int32[]", "Rewired.AxisCalibrationData[]", "Rewired.AxisRange[]", "Rewired.Data.Mapping.HardwareAxisInfo[]", "Rewired.Data.Mapping.HardwareButtonInfo[]", "Rewired.Data.Mapping.HardwareJoystickMap/CompoundElement[]" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)controllerName;
	params[1] = (intptr_t)&customControllerSourceId;
	params[2] = (intptr_t)hardwareElementIdentifiers;
	params[3] = (intptr_t)buttonElementIdentifierIds;
	params[4] = (intptr_t)axisElementIdentifierIds;
	params[5] = (intptr_t)hwAxisCalibrationData;
	params[6] = (intptr_t)hwAxisRanges;
	params[7] = (intptr_t)hwAxisInfo;
	params[8] = (intptr_t)hwButtonInfo;
	params[9] = (intptr_t)compoundElements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HardwareControllerMap_Game::_ctor(mscorlib::System::String* controllerName, Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, IL2CPP::Array<Rewired_Core::Rewired::JoystickType>* joystickTypes, IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* hardwareElementIdentifiers, IL2CPP::Array<int32_t>* buttonElementIdentifierIds, IL2CPP::Array<int32_t>* axisElementIdentifierIds, IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hwAxisCalibrationData, IL2CPP::Array<Rewired_Core::Rewired::AxisRange>* hwAxisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>* hwAxisInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "Rewired.HardwareControllerMapIdentifier", "Rewired.JoystickType[]", "Rewired.ControllerElementIdentifier[]", "System.Int32[]", "System.Int32[]", "Rewired.AxisCalibrationData[]", "Rewired.AxisRange[]", "Rewired.Data.Mapping.HardwareAxisInfo[]", "Rewired.Data.Mapping.HardwareButtonInfo[]", "Rewired.Data.Mapping.HardwareJoystickMap/CompoundElement[]" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)controllerName;
	params[1] = (intptr_t)&hardwareMapIdentifier;
	params[2] = (intptr_t)joystickTypes;
	params[3] = (intptr_t)hardwareElementIdentifiers;
	params[4] = (intptr_t)buttonElementIdentifierIds;
	params[5] = (intptr_t)axisElementIdentifierIds;
	params[6] = (intptr_t)hwAxisCalibrationData;
	params[7] = (intptr_t)hwAxisRanges;
	params[8] = (intptr_t)hwAxisInfo;
	params[9] = (intptr_t)hwButtonInfo;
	params[10] = (intptr_t)compoundElements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HardwareControllerMap_Game::_ctor(mscorlib::System::String* controllerName, Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* hardwareElementIdentifiers, IL2CPP::Array<int32_t>* buttonElementIdentifierIds, IL2CPP::Array<int32_t>* axisElementIdentifierIds, IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hwAxisCalibrationData, IL2CPP::Array<Rewired_Core::Rewired::AxisRange>* hwAxisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>* hwAxisInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "Rewired.HardwareControllerMapIdentifier", "Rewired.ControllerElementIdentifier[]", "System.Int32[]", "System.Int32[]", "Rewired.AxisCalibrationData[]", "Rewired.AxisRange[]", "Rewired.Data.Mapping.HardwareAxisInfo[]", "Rewired.Data.Mapping.HardwareButtonInfo[]", "Rewired.Data.Mapping.HardwareJoystickMap/CompoundElement[]" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)controllerName;
	params[1] = (intptr_t)&hardwareMapIdentifier;
	params[2] = (intptr_t)hardwareElementIdentifiers;
	params[3] = (intptr_t)buttonElementIdentifierIds;
	params[4] = (intptr_t)axisElementIdentifierIds;
	params[5] = (intptr_t)hwAxisCalibrationData;
	params[6] = (intptr_t)hwAxisRanges;
	params[7] = (intptr_t)hwAxisInfo;
	params[8] = (intptr_t)hwButtonInfo;
	params[9] = (intptr_t)compoundElements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HardwareControllerMap_Game::_ctor(mscorlib::System::String* controllerName, IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* hardwareElementIdentifiers, IL2CPP::Array<int32_t>* buttonElementIdentifierIds, IL2CPP::Array<int32_t>* axisElementIdentifierIds, IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hwAxisCalibrationData, IL2CPP::Array<Rewired_Core::Rewired::AxisRange>* hwAxisRanges, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo*>* hwAxisInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "Rewired.ControllerElementIdentifier[]", "System.Int32[]", "System.Int32[]", "Rewired.AxisCalibrationData[]", "Rewired.AxisRange[]", "Rewired.Data.Mapping.HardwareAxisInfo[]", "Rewired.Data.Mapping.HardwareButtonInfo[]", "Rewired.Data.Mapping.HardwareJoystickMap/CompoundElement[]" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)controllerName;
	params[1] = (intptr_t)hardwareElementIdentifiers;
	params[2] = (intptr_t)buttonElementIdentifierIds;
	params[3] = (intptr_t)axisElementIdentifierIds;
	params[4] = (intptr_t)hwAxisCalibrationData;
	params[5] = (intptr_t)hwAxisRanges;
	params[6] = (intptr_t)hwAxisInfo;
	params[7] = (intptr_t)hwButtonInfo;
	params[8] = (intptr_t)compoundElements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::HardwareControllerMap_Game::GetElementIdentifierName(int32_t elementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierName", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementIdentifierId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::HardwareControllerMap_Game::GetElementIdentifierPositiveName(int32_t elementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierPositiveName", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementIdentifierId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::HardwareControllerMap_Game::GetElementIdentifierNegativeName(int32_t elementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierNegativeName", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementIdentifierId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Rewired_Core::Rewired::HardwareControllerMap_Game::GetAxisIndex(int32_t elementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementIdentifierId;
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
int32_t Rewired_Core::Rewired::HardwareControllerMap_Game::GetAxisIndex(mscorlib::System::String* elementIdentifierName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisIndex", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementIdentifierName;
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
int32_t Rewired_Core::Rewired::HardwareControllerMap_Game::GetButtonIndex(int32_t elementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementIdentifierId;
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
int32_t Rewired_Core::Rewired::HardwareControllerMap_Game::GetButtonIndex(mscorlib::System::String* elementIdentifierName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonIndex", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementIdentifierName;
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
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::HardwareControllerMap_Game::GetElementIdentifierById(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierById", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::HardwareControllerMap_Game::GetButtonElementIdentifierById(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonElementIdentifierById", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::HardwareControllerMap_Game::GetAxisElementIdentifierById(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisElementIdentifierById", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* Rewired_Core::Rewired::HardwareControllerMap_Game::GetAxis2DData(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxis2DData", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* Rewired_Core::Rewired::HardwareControllerMap_Game::GetHatData(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHatData", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*)returnValue;
}
Rewired_Core::Rewired::ControllerElementType Rewired_Core::Rewired::HardwareControllerMap_Game::GetElementType(int32_t elementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementType", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementIdentifierId;
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
int32_t Rewired_Core::Rewired::HardwareControllerMap_Game::aqTeAtTvgNgyPiruoKQgtGZbxkXE(IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "aqTeAtTvgNgyPiruoKQgtGZbxkXE");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
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
