#include "Rewired_ControllerMap.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ControllerMap");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Core::Rewired::ControllerMap::get_nextUid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_nextUid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ControllerMap::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerMap::_ctor(Rewired_Core::Rewired::ControllerMap* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerMap::get_id()
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
int32_t Rewired_Core::Rewired::ControllerMap::get_sourceMapId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sourceMapId");
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
void Rewired_Core::Rewired::ControllerMap::set_sourceMapId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sourceMapId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerMap::get_categoryId()
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
void Rewired_Core::Rewired::ControllerMap::set_categoryId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_categoryId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerMap::get_layoutId()
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
void Rewired_Core::Rewired::ControllerMap::set_layoutId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_layoutId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerMap::get_name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::ControllerMap::set_name(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_name", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Guid Rewired_Core::Rewired::ControllerMap::get_hardwareGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hardwareGuid");
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
void Rewired_Core::Rewired::ControllerMap::set_hardwareGuid(mscorlib::System::Guid value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hardwareGuid", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ControllerMap::get_enabled()
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
void Rewired_Core::Rewired::ControllerMap::set_enabled(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_enabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerMap::get_playerId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_playerId");
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
void Rewired_Core::Rewired::ControllerMap::set_playerId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_playerId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerMap::get_controllerId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerId");
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
void Rewired_Core::Rewired::ControllerMap::set_controllerId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_controllerId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Controller* Rewired_Core::Rewired::ControllerMap::get_controller()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controller");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
Rewired_Core::Rewired::ControllerType Rewired_Core::Rewired::ControllerMap::get_controllerType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerType>(*(Rewired_Core::Rewired::ControllerType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ControllerMap::set_controllerType(Rewired_Core::Rewired::ControllerType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_controllerType", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Player* Rewired_Core::Rewired::ControllerMap::get_player()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_player");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Player*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::get_elementMapCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementMapCount");
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
int32_t Rewired_Core::Rewired::ControllerMap::get_buttonMapCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_buttonMapCount");
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
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::get_AllMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AllMaps");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::get_ButtonMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ButtonMaps");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
bool Rewired_Core::Rewired::ControllerMap::ContainsAction(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsAction", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
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
bool Rewired_Core::Rewired::ControllerMap::ContainsAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsAction", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
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
bool Rewired_Core::Rewired::ControllerMap::ContainsElementIdentifier(int32_t elementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsElementIdentifier", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementIdentifierId;
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
bool Rewired_Core::Rewired::ControllerMap::ContainsKeyboardKey(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeys)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsKeyboardKey", std::vector<std::string> { "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&keyCode;
	params[1] = (intptr_t)&modifierKeys;
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
bool Rewired_Core::Rewired::ControllerMap::ContainsElementMap(Rewired_Core::Rewired::ActionElementMap* elementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsElementMap", std::vector<std::string> { "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementMap;
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
bool Rewired_Core::Rewired::ControllerMap::ContainsElementMap(int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsElementMap", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementMapId;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceOrCreateElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceOrCreateElementMap", std::vector<std::string> { "Rewired.ElementAssignment" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementAssignment;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceOrCreateElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment, Rewired_Core::Rewired::ActionElementMap& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceOrCreateElementMap", std::vector<std::string> { "Rewired.ElementAssignment", "Rewired.ActionElementMap&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementAssignment;
	params[1] = (intptr_t)&result;
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
bool Rewired_Core::Rewired::ControllerMap::CreateElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementMap", std::vector<std::string> { "Rewired.ElementAssignment" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementAssignment;
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
bool Rewired_Core::Rewired::ControllerMap::CreateElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment, Rewired_Core::Rewired::ActionElementMap& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementMap", std::vector<std::string> { "Rewired.ElementAssignment", "Rewired.ActionElementMap&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementAssignment;
	params[1] = (intptr_t)&result;
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
bool Rewired_Core::Rewired::ControllerMap::CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementMap", std::vector<std::string> { "System.Int32", "Rewired.Pole", "UnityEngine.KeyCode", "Rewired.ModifierKey", "Rewired.ModifierKey", "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&axisContribution;
	params[2] = (intptr_t)&keyCode;
	params[3] = (intptr_t)&modifierKey1;
	params[4] = (intptr_t)&modifierKey2;
	params[5] = (intptr_t)&modifierKey3;
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
bool Rewired_Core::Rewired::ControllerMap::CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3, Rewired_Core::Rewired::ActionElementMap& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementMap", std::vector<std::string> { "System.Int32", "Rewired.Pole", "UnityEngine.KeyCode", "Rewired.ModifierKey", "Rewired.ModifierKey", "Rewired.ModifierKey", "Rewired.ActionElementMap&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&axisContribution;
	params[2] = (intptr_t)&keyCode;
	params[3] = (intptr_t)&modifierKey1;
	params[4] = (intptr_t)&modifierKey2;
	params[5] = (intptr_t)&modifierKey3;
	params[6] = (intptr_t)&result;
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
bool Rewired_Core::Rewired::ControllerMap::CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementMap", std::vector<std::string> { "System.Int32", "Rewired.Pole", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&axisContribution;
	params[2] = (intptr_t)&keyCode;
	params[3] = (intptr_t)&modifierKeyFlags;
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
bool Rewired_Core::Rewired::ControllerMap::CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, Rewired_Core::Rewired::ActionElementMap& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementMap", std::vector<std::string> { "System.Int32", "Rewired.Pole", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "Rewired.ActionElementMap&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&axisContribution;
	params[2] = (intptr_t)&keyCode;
	params[3] = (intptr_t)&modifierKeyFlags;
	params[4] = (intptr_t)&result;
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
bool Rewired_Core::Rewired::ControllerMap::CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementMap", std::vector<std::string> { "System.Int32", "Rewired.Pole", "System.Int32", "Rewired.ControllerElementType", "Rewired.AxisRange", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&axisContribution;
	params[2] = (intptr_t)&elementIdentifierId;
	params[3] = (intptr_t)&elementType;
	params[4] = (intptr_t)&axisRange;
	params[5] = (intptr_t)&invert;
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
bool Rewired_Core::Rewired::ControllerMap::CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert, Rewired_Core::Rewired::ActionElementMap& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementMap", std::vector<std::string> { "System.Int32", "Rewired.Pole", "System.Int32", "Rewired.ControllerElementType", "Rewired.AxisRange", "System.Boolean", "Rewired.ActionElementMap&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&axisContribution;
	params[2] = (intptr_t)&elementIdentifierId;
	params[3] = (intptr_t)&elementType;
	params[4] = (intptr_t)&axisRange;
	params[5] = (intptr_t)&invert;
	params[6] = (intptr_t)&result;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceElementMap", std::vector<std::string> { "Rewired.ElementAssignment" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementAssignment;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment, Rewired_Core::Rewired::ActionElementMap& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceElementMap", std::vector<std::string> { "Rewired.ElementAssignment", "Rewired.ActionElementMap&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementAssignment;
	params[1] = (intptr_t)&result;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceElementMap", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole", "UnityEngine.KeyCode", "Rewired.ModifierKey", "Rewired.ModifierKey", "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&elementMapId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	params[3] = (intptr_t)&keyCode;
	params[4] = (intptr_t)&modifierKey1;
	params[5] = (intptr_t)&modifierKey2;
	params[6] = (intptr_t)&modifierKey3;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3, Rewired_Core::Rewired::ActionElementMap& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceElementMap", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole", "UnityEngine.KeyCode", "Rewired.ModifierKey", "Rewired.ModifierKey", "Rewired.ModifierKey", "Rewired.ActionElementMap&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&elementMapId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	params[3] = (intptr_t)&keyCode;
	params[4] = (intptr_t)&modifierKey1;
	params[5] = (intptr_t)&modifierKey2;
	params[6] = (intptr_t)&modifierKey3;
	params[7] = (intptr_t)&result;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceElementMap", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&elementMapId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	params[3] = (intptr_t)&keyCode;
	params[4] = (intptr_t)&modifierKeyFlags;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, Rewired_Core::Rewired::ActionElementMap& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceElementMap", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole", "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags", "Rewired.ActionElementMap&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&elementMapId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	params[3] = (intptr_t)&keyCode;
	params[4] = (intptr_t)&modifierKeyFlags;
	params[5] = (intptr_t)&result;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceElementMap", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole", "System.Int32", "Rewired.ControllerElementType", "Rewired.AxisRange", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&elementMapId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	params[3] = (intptr_t)&elementIdentifierId;
	params[4] = (intptr_t)&elementType;
	params[5] = (intptr_t)&axisRange;
	params[6] = (intptr_t)&invert;
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
bool Rewired_Core::Rewired::ControllerMap::ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert, Rewired_Core::Rewired::ActionElementMap& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceElementMap", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.Pole", "System.Int32", "Rewired.ControllerElementType", "Rewired.AxisRange", "System.Boolean", "Rewired.ActionElementMap&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&elementMapId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisContribution;
	params[3] = (intptr_t)&elementIdentifierId;
	params[4] = (intptr_t)&elementType;
	params[5] = (intptr_t)&axisRange;
	params[6] = (intptr_t)&invert;
	params[7] = (intptr_t)&result;
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
bool Rewired_Core::Rewired::ControllerMap::DeleteElementMap(int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteElementMap", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementMapId;
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
bool Rewired_Core::Rewired::ControllerMap::DeleteElementMapsWithAction(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteElementMapsWithAction", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
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
bool Rewired_Core::Rewired::ControllerMap::DeleteElementMapsWithAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteElementMapsWithAction", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetElementMap(int32_t elementMapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMap", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementMapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetElementMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMaps");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetElementMaps(bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMaps", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMaps(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMaps", std::vector<std::string> { "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMaps(bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMaps", std::vector<std::string> { "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&skipDisabledMaps;
	params[1] = (intptr_t)results;
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
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetElementMapsWithAction(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetElementMapsWithAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetElementMapsWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithAction(mscorlib::System::String* actionName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.String", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithAction(int32_t actionId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithAction(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithAction(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapMatch", std::vector<std::string> { "System.Predicate`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)predicate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapMatch");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapMatches(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapMatches", std::vector<std::string> { "System.Predicate`1<Rewired.ActionElementMap>", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)predicate;
	params[1] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapMatches(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapMatches");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
void Rewired_Core::Rewired::ControllerMap::ForEachElementMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForEachElementMapMatch", std::vector<std::string> { "System.Predicate`1<Rewired.ActionElementMap>", "System.Action`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)predicate;
	params[1] = (intptr_t)actionToPerform;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerMap::ClearElementMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearElementMaps");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerMap::SetAllElementMapsEnabled(bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllElementMapsEnabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&state;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetButtonMap(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMap", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetButtonMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMaps");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetButtonMaps(bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMaps", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::GetButtonMaps(bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMaps", std::vector<std::string> { "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&skipDisabledMaps;
	params[1] = (intptr_t)results;
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
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetButtonMapsWithAction(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetButtonMapsWithAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* Rewired_Core::Rewired::ControllerMap::GetButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::GetButtonMapsWithAction(mscorlib::System::String* actionName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.String", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetButtonMapsWithAction(int32_t actionId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ButtonMapsWithAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ButtonMapsWithAction(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::ButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstButtonMapWithAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstButtonMapWithAction(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstButtonMapWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstButtonMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstButtonMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapMatch", std::vector<std::string> { "System.Predicate`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)predicate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::ZOXvlIFqAMoYToCITlWhZQKaYQe(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZOXvlIFqAMoYToCITlWhZQKaYQe");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::GetButtonMapMatches(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapMatches", std::vector<std::string> { "System.Predicate`1<Rewired.ActionElementMap>", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)predicate;
	params[1] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::ControllerMap::xKpyLUmKKKcpzXeOxXOhSpBgHReF(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xKpyLUmKKKcpzXeOxXOhSpBgHReF");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
void Rewired_Core::Rewired::ControllerMap::ForEachButtonMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForEachButtonMapMatch", std::vector<std::string> { "System.Predicate`1<Rewired.ActionElementMap>", "System.Action`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)predicate;
	params[1] = (intptr_t)actionToPerform;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ControllerMap::DeleteButtonMapsWithAction(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteButtonMapsWithAction", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
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
bool Rewired_Core::Rewired::ControllerMap::DeleteButtonMapsWithAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteButtonMapsWithAction", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
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
int32_t Rewired_Core::Rewired::ControllerMap::SetAllButtonMapsEnabled(bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllButtonMapsEnabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&state;
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
bool Rewired_Core::Rewired::ControllerMap::DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerMap* controllerMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ControllerMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controllerMap;
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
bool Rewired_Core::Rewired::ControllerMap::DoesElementAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* actionElementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionElementMap;
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
bool Rewired_Core::Rewired::ControllerMap::DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&conflictCheck;
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
bool Rewired_Core::Rewired::ControllerMap::DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ControllerMap", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controllerMap;
	params[1] = (intptr_t)&skipDisabledMaps;
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
bool Rewired_Core::Rewired::ControllerMap::DoesElementAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ActionElementMap", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionElementMap;
	params[1] = (intptr_t)&skipDisabledMaps;
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
bool Rewired_Core::Rewired::ControllerMap::DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesElementAssignmentConflict", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ControllerMap::ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ControllerMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controllerMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ControllerMap::ElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionElementMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ControllerMap::ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&conflictCheck;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ControllerMap::ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ControllerMap", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controllerMap;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ControllerMap::ElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ActionElementMap", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionElementMap;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* Rewired_Core::Rewired::ControllerMap::ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ControllerMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controllerMap;
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
int32_t Rewired_Core::Rewired::ControllerMap::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionElementMap;
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
int32_t Rewired_Core::Rewired::ControllerMap::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&conflictCheck;
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
int32_t Rewired_Core::Rewired::ControllerMap::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ControllerMap", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controllerMap;
	params[1] = (intptr_t)&skipDisabledMaps;
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
int32_t Rewired_Core::Rewired::ControllerMap::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ActionElementMap", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionElementMap;
	params[1] = (intptr_t)&skipDisabledMaps;
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
int32_t Rewired_Core::Rewired::ControllerMap::RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
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
int32_t Rewired_Core::Rewired::ControllerMap::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ControllerMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controllerMap;
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
int32_t Rewired_Core::Rewired::ControllerMap::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionElementMap;
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
int32_t Rewired_Core::Rewired::ControllerMap::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&conflictCheck;
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
int32_t Rewired_Core::Rewired::ControllerMap::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ControllerMap", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controllerMap;
	params[1] = (intptr_t)&skipDisabledMaps;
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
int32_t Rewired_Core::Rewired::ControllerMap::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ActionElementMap", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionElementMap;
	params[1] = (intptr_t)&skipDisabledMaps;
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
int32_t Rewired_Core::Rewired::ControllerMap::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)&skipDisabledMaps;
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
int32_t Rewired_Core::Rewired::ControllerMap::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
int32_t Rewired_Core::Rewired::ControllerMap::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
int32_t Rewired_Core::Rewired::ControllerMap::DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableElementAssignmentConflicts");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
int32_t Rewired_Core::Rewired::ControllerMap::ForEachElementAssignmentConflict(Rewired_Core::Rewired::ControllerMap* controllerMap, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForEachElementAssignmentConflict", std::vector<std::string> { "Rewired.ControllerMap", "System.Action`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controllerMap;
	params[1] = (intptr_t)actionToPerform;
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
int32_t Rewired_Core::Rewired::ControllerMap::ForEachElementAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* actionElementMap, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForEachElementAssignmentConflict", std::vector<std::string> { "Rewired.ActionElementMap", "System.Action`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionElementMap;
	params[1] = (intptr_t)actionToPerform;
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
int32_t Rewired_Core::Rewired::ControllerMap::ForEachElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForEachElementAssignmentConflict", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Action`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)actionToPerform;
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
int32_t Rewired_Core::Rewired::ControllerMap::ForEachElementAssignmentConflict(Rewired_Core::Rewired::ControllerMap* controllerMap, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForEachElementAssignmentConflict", std::vector<std::string> { "Rewired.ControllerMap", "System.Action`1<Rewired.ActionElementMap>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controllerMap;
	params[1] = (intptr_t)actionToPerform;
	params[2] = (intptr_t)&skipDisabledMaps;
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
int32_t Rewired_Core::Rewired::ControllerMap::ForEachElementAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* actionElementMap, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForEachElementAssignmentConflict", std::vector<std::string> { "Rewired.ActionElementMap", "System.Action`1<Rewired.ActionElementMap>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)actionElementMap;
	params[1] = (intptr_t)actionToPerform;
	params[2] = (intptr_t)&skipDisabledMaps;
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
int32_t Rewired_Core::Rewired::ControllerMap::ForEachElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForEachElementAssignmentConflict", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Action`1<Rewired.ActionElementMap>", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&conflictCheck;
	params[1] = (intptr_t)actionToPerform;
	params[2] = (intptr_t)&skipDisabledMaps;
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
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::ControllerMap::GetButtonNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerMap::ToXmlString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToXmlString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerMap::ToJsonString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToJsonString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::ControllerMap::ToControllerTemplateMap(mscorlib::System::Guid templateTypeGuid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToControllerTemplateMap", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&templateTypeGuid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::ControllerMap::ToControllerTemplateMap(mscorlib::System::Type* templateInterfaceType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToControllerTemplateMap", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)templateInterfaceType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::ControllerMap::ftdUCNKatERmjtfAkgKJGGeuzDYU(Rewired_Core::Rewired::IControllerTemplate* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ftdUCNKatERmjtfAkgKJGGeuzDYU");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::ControllerMap::get_ButtonMaps_orig()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ButtonMaps_orig");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
bool Rewired_Core::Rewired::ControllerMap::AddActionMapping_BeforeBake(Rewired_Core::Rewired::ActionElementMap* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddActionMapping_BeforeBake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMaps_Append(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMaps_Append");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithMapping(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::ControllerElementType A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithMapping");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithElementIdentifier(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementIdentifier");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
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
bool Rewired_Core::Rewired::ControllerMap::ContainsElementMapping(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::ControllerElementType A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsElementMapping");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
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
int32_t Rewired_Core::Rewired::ControllerMap::FirstIndexOfElementMapping(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::ControllerElementType A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FirstIndexOfElementMapping");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
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
int32_t Rewired_Core::Rewired::ControllerMap::zEDIoOJjpjAYhRKEzLRHtGwySsvh(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zEDIoOJjpjAYhRKEzLRHtGwySsvh");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
int32_t Rewired_Core::Rewired::ControllerMap::DrBsTsOJclgSFySctThQiTVDkWL(bool A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrBsTsOJclgSFySctThQiTVDkWL");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
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
int32_t Rewired_Core::Rewired::ControllerMap::PhvjWzVlndcjGaWuuNXNcJAUJVw(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PhvjWzVlndcjGaWuuNXNcJAUJVw");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithAction(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerMap::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4, bool& A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Boolean", "System.Int32", "System.Boolean", "System.Boolean&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap::GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6, bool& A_7)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Boolean", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>", "System.Boolean", "System.Boolean&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	params[5] = (intptr_t)&A_6;
	params[6] = (intptr_t)&A_7;
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
void Rewired_Core::Rewired::ControllerMap::ZtQyhWNtTHFYlRDXdUTiYedsaNO(int32_t A_1, Rewired_Core::Rewired::ControllerElementType A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZtQyhWNtTHFYlRDXdUTiYedsaNO");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ControllerMap::AddElementMap(Rewired_Core::Rewired::ActionElementMap* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddElementMap");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
bool Rewired_Core::Rewired::ControllerMap::ejPjdVyPapWAUvbtDlfOopokIZQC(Rewired_Core::Rewired::IControllerElementTarget* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ejPjdVyPapWAUvbtDlfOopokIZQC");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
bool Rewired_Core::Rewired::ControllerMap::BSOWLQQEyYNHySrxkuCNIYEDucE(mscorlib::System::String* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BSOWLQQEyYNHySrxkuCNIYEDucE");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
bool Rewired_Core::Rewired::ControllerMap::FGCkqDCRcRMIJWirpaboXHDvxrk(mscorlib::System::String* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FGCkqDCRcRMIJWirpaboXHDvxrk");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
void Rewired_Core::Rewired::ControllerMap::sgqqpFhkEHvozrWoIxbSzoSDcUN(Rewired_Core::Rewired::ActionElementMap* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "sgqqpFhkEHvozrWoIxbSzoSDcUN");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerMap::ulPpNOzVyZYaroZkYldIbMRQVX(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ulPpNOzVyZYaroZkYldIbMRQVX");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerMap::vGYiMxSJObbapINvGNAnCwSXAiaC(int32_t A_1, Rewired_Core::Rewired::ActionElementMap* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vGYiMxSJObbapINvGNAnCwSXAiaC");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerMap::CYBHxzvsKSLfHavYOqqtJpdrAHR(Rewired_Core::Rewired::ActionElementMap* A_0, int32_t A_1, Rewired_Core::Rewired::Pole A_2, int32_t A_3, Rewired_Core::Rewired::ControllerElementType A_4, Rewired_Core::Rewired::AxisRange A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CYBHxzvsKSLfHavYOqqtJpdrAHR");
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)&A_1;
	params[2] = (intptr_t)&A_2;
	params[3] = (intptr_t)&A_3;
	params[4] = (intptr_t)&A_4;
	params[5] = (intptr_t)&A_5;
	params[6] = (intptr_t)&A_6;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerMap::BakeElementMap(Rewired_Core::Rewired::ActionElementMap* map)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BakeElementMap", std::vector<std::string> { "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)map;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ControllerMap::Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
void Rewired_Core::Rewired::ControllerMap::ExportDataToSerializedObject(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExportDataToSerializedObject");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ControllerMap::wxQwTHgtXdcMqmRsHxQvFWscVgg(Rewired_Core::Rewired::ControllerElementType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "wxQwTHgtXdcMqmRsHxQvFWscVgg");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
void Rewired_Core::Rewired::ControllerMap::tCSaCrobXEgNOwRwIVTXIEtxQvE(int32_t A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "tCSaCrobXEgNOwRwIVTXIEtxQvE");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerMap::OFewcOiFROEFXXKLDjnECBGnbrmH(Rewired_Core::Rewired::ActionElementMap* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OFewcOiFROEFXXKLDjnECBGnbrmH");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerMap::ITIUcsYDyngdQeerzNrolmRhWnWQ(Rewired_Core::Rewired::ActionElementMap* A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ITIUcsYDyngdQeerzNrolmRhWnWQ");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerMap::iCUMRFonMWanwfJuqclXbgAhgRep(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "iCUMRFonMWanwfJuqclXbgAhgRep");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* Rewired_Core::Rewired::ControllerMap::BTjEytEDmfXDlKCGhgjizVfcbDhc()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BTjEytEDmfXDlKCGhgjizVfcbDhc");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ControllerMap::zTufJcQfUjAbtihMoqeFKhxXYGv(Rewired_Core::Rewired::ControllerType A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zTufJcQfUjAbtihMoqeFKhxXYGv");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ControllerMap::DkVxZLCeRoJEyDBbixORShIbRqJ(Rewired_Core::Rewired::Controller* A_0, int32_t A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DkVxZLCeRoJEyDBbixORShIbRqJ");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)&A_1;
	params[2] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ControllerMap::CreateFromXml(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* xmlString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFromXml", std::vector<std::string> { "Rewired.ControllerType", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)xmlString;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
void Rewired_Core::Rewired::ControllerMap::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
