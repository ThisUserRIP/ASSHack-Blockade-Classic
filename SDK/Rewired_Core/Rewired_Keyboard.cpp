#include "Rewired_Keyboard.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Keyboard::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "Keyboard");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Keyboard::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<Rewired_Core::Rewired::KeyboardKeyCode>* Rewired_Core::Rewired::Keyboard::get_keyIndexToKeyboardKeyCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_keyIndexToKeyboardKeyCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::KeyboardKeyCode>*)returnValue;
}
void Rewired_Core::Rewired::Keyboard::_ctor(mscorlib::System::String* name, Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "Rewired.Interfaces.IUnifiedKeyboardSource" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Keyboard::_ctor(int32_t controllerId, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareIdentifier, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, int32_t buttonCount, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.InputSource", "System.String", "System.String", "Rewired.HardwareControllerMap_Game", "System.Int32", "Rewired.Controller/Extension", "Rewired.ControllerDataUpdater" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&controllerId;
	params[1] = (intptr_t)&inputSource;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)hardwareIdentifier;
	params[4] = (intptr_t)hardwareMap;
	params[5] = (intptr_t)&buttonCount;
	params[6] = (intptr_t)extension;
	params[7] = (intptr_t)dataUpdater;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Guid Rewired_Core::Rewired::Keyboard::get_deviceInstanceGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_deviceInstanceGuid");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Keyboard::GetKey(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKey", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
bool Rewired_Core::Rewired::Keyboard::GetKeyDown(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyDown", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
bool Rewired_Core::Rewired::Keyboard::GetKeyUp(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyUp", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
bool Rewired_Core::Rewired::Keyboard::GetKeyDoublePressHold(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, float speed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyDoublePressHold", std::vector<std::string> { "UnityEngine.KeyCode", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&keyCode;
	params[1] = (intptr_t)&speed;
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
bool Rewired_Core::Rewired::Keyboard::GetKeyDoublePressHold(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyDoublePressHold", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
bool Rewired_Core::Rewired::Keyboard::GetKeyDoublePressDown(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, float speed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyDoublePressDown", std::vector<std::string> { "UnityEngine.KeyCode", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&keyCode;
	params[1] = (intptr_t)&speed;
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
bool Rewired_Core::Rewired::Keyboard::GetKeyDoublePressDown(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyDoublePressDown", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
bool Rewired_Core::Rewired::Keyboard::GetKeyPrev(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyPrev", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
double Rewired_Core::Rewired::Keyboard::GetKeyTimePressed(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyTimePressed", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
double Rewired_Core::Rewired::Keyboard::GetKeyTimeUnpressed(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyTimeUnpressed", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Keyboard::GetModifierKey(Rewired_Core::Rewired::ModifierKey key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetModifierKey", std::vector<std::string> { "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
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
bool Rewired_Core::Rewired::Keyboard::GetModifierKeyDown(Rewired_Core::Rewired::ModifierKey key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetModifierKeyDown", std::vector<std::string> { "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
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
bool Rewired_Core::Rewired::Keyboard::GetModifierKeyUp(Rewired_Core::Rewired::ModifierKey key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetModifierKeyUp", std::vector<std::string> { "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
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
bool Rewired_Core::Rewired::Keyboard::GetModifierKeyPrev(Rewired_Core::Rewired::ModifierKey key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetModifierKeyPrev", std::vector<std::string> { "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
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
double Rewired_Core::Rewired::Keyboard::GetModifierKeyTimePressed(Rewired_Core::Rewired::ModifierKey key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetModifierKeyTimePressed", std::vector<std::string> { "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
double Rewired_Core::Rewired::Keyboard::GetModifierKeyTimeUnpressed(Rewired_Core::Rewired::ModifierKey key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetModifierKeyTimeUnpressed", std::vector<std::string> { "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::KeyCode Rewired_Core::Rewired::Keyboard::GetKeyCodeByButtonIndex(int32_t buttonIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyCodeByButtonIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&buttonIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::KeyCode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::KeyCode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::KeyCode>(*(UnityEngine_CoreModule::UnityEngine::KeyCode*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::KeyCode Rewired_Core::Rewired::Keyboard::GetKeyCodeById(int32_t elementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyCodeById", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&elementIdentifierId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::KeyCode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::KeyCode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::KeyCode>(*(UnityEngine_CoreModule::UnityEngine::KeyCode*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Keyboard::GetButtonIndexByKeyCode(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonIndexByKeyCode", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::Keyboard::GetElementIdentifierByKeyCode(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierByKeyCode", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::Keyboard::PollForFirstKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollForFirstKey");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::Keyboard::PollForAllKeys()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollForAllKeys");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::Keyboard::PollForAllKeysDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollForAllKeysDown");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::Keyboard::PollForFirstKeyDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollForFirstKeyDown");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::Keyboard::PollForFirstButton()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollForFirstButton");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::Keyboard::PollForFirstButtonDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollForFirstButtonDown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::Keyboard::PollForAllButtons()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollForAllButtons");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::Keyboard::PollForAllButtonsDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollForAllButtonsDown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
bool Rewired_Core::Rewired::Keyboard::IsModifierKey(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsModifierKey", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
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
bool Rewired_Core::Rewired::Keyboard::IsModifierKey(Rewired_Core::Rewired::KeyboardKeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsModifierKey", std::vector<std::string> { "Rewired.KeyboardKeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
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
Rewired_Core::Rewired::ModifierKey Rewired_Core::Rewired::Keyboard::KeyCodeToModifierKey(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KeyCodeToModifierKey", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ModifierKey ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ModifierKey));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ModifierKey>(*(Rewired_Core::Rewired::ModifierKey*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ModifierKeyFlags Rewired_Core::Rewired::Keyboard::KeyCodeToModifierKeyFlags(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KeyCodeToModifierKeyFlags", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ModifierKeyFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ModifierKeyFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ModifierKeyFlags>(*(Rewired_Core::Rewired::ModifierKeyFlags*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Keyboard::ModifierKeyFlagsContain(Rewired_Core::Rewired::ModifierKeyFlags flags, Rewired_Core::Rewired::ModifierKey key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ModifierKeyFlagsContain", std::vector<std::string> { "Rewired.ModifierKeyFlags", "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&flags;
	params[1] = (intptr_t)&key;
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
bool Rewired_Core::Rewired::Keyboard::ModifierKeyFlagsContain(Rewired_Core::Rewired::ModifierKeyFlags flags, UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ModifierKeyFlagsContain", std::vector<std::string> { "Rewired.ModifierKeyFlags", "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&flags;
	params[1] = (intptr_t)&key;
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
Rewired_Core::Rewired::ModifierKey Rewired_Core::Rewired::Keyboard::ModifierKeyFlagsToModifierKey(Rewired_Core::Rewired::ModifierKeyFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ModifierKeyFlagsToModifierKey", std::vector<std::string> { "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ModifierKey ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ModifierKey));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ModifierKey>(*(Rewired_Core::Rewired::ModifierKey*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::KeyCode Rewired_Core::Rewired::Keyboard::ModifierKeyFlagsToKeyCode(Rewired_Core::Rewired::ModifierKeyFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ModifierKeyFlagsToKeyCode", std::vector<std::string> { "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::KeyCode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::KeyCode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::KeyCode>(*(UnityEngine_CoreModule::UnityEngine::KeyCode*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ModifierKeyFlags Rewired_Core::Rewired::Keyboard::ModifierKeyToModifierKeyFlags(Rewired_Core::Rewired::ModifierKey key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ModifierKeyToModifierKeyFlags", std::vector<std::string> { "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ModifierKeyFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ModifierKeyFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ModifierKeyFlags>(*(Rewired_Core::Rewired::ModifierKeyFlags*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Rewired_Core::Rewired::Keyboard::GetKeyName(UnityEngine_CoreModule::UnityEngine::KeyCode key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyName", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Keyboard::GetKeyName(UnityEngine_CoreModule::UnityEngine::KeyCode key, Rewired_Core::Rewired::ModifierKeyFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyName", std::vector<std::string> { "UnityEngine.KeyCode", "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&key;
	params[1] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Keyboard::ModifierKeyFlagsToString(Rewired_Core::Rewired::ModifierKeyFlags flags, bool abbreviate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ModifierKeyFlagsToString", std::vector<std::string> { "Rewired.ModifierKeyFlags", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&flags;
	params[1] = (intptr_t)&abbreviate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Keyboard::ModifierKeyFlagsToString(Rewired_Core::Rewired::ModifierKeyFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ModifierKeyFlagsToString", std::vector<std::string> { "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Rewired_Core::Rewired::KeyboardKeyCode Rewired_Core::Rewired::Keyboard::KeyCodeToKeyboardKeyCode(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KeyCodeToKeyboardKeyCode", std::vector<std::string> { "UnityEngine.KeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::KeyboardKeyCode ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::KeyboardKeyCode));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::KeyboardKeyCode>(*(Rewired_Core::Rewired::KeyboardKeyCode*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::KeyCode Rewired_Core::Rewired::Keyboard::KeyboardKeyCodeToKeyCode(Rewired_Core::Rewired::KeyboardKeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KeyboardKeyCodeToKeyCode", std::vector<std::string> { "Rewired.KeyboardKeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::KeyCode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::KeyCode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::KeyCode>(*(UnityEngine_CoreModule::UnityEngine::KeyCode*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ModifierKeyFlags Rewired_Core::Rewired::Keyboard::ConvertModifierKeyFlagsSingleToDouble(Rewired_Core::Rewired::ModifierKeyFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertModifierKeyFlagsSingleToDouble", std::vector<std::string> { "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ModifierKeyFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ModifierKeyFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ModifierKeyFlags>(*(Rewired_Core::Rewired::ModifierKeyFlags*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Keyboard::GetDoubledModifierKeyCount(Rewired_Core::Rewired::ModifierKeyFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDoubledModifierKeyCount", std::vector<std::string> { "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
Rewired_Core::Rewired::KeyboardKeyCode Rewired_Core::Rewired::Keyboard::GetKeyboardKeyCodeByButtonIndex(int32_t buttonIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyboardKeyCodeByButtonIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&buttonIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::KeyboardKeyCode ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::KeyboardKeyCode));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::KeyboardKeyCode>(*(Rewired_Core::Rewired::KeyboardKeyCode*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Keyboard::GetElementIdentifierIdByKeyCode(Rewired_Core::Rewired::KeyboardKeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementIdentifierIdByKeyCode", std::vector<std::string> { "Rewired.KeyboardKeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Rewired_Core::Rewired::Keyboard::FixKeyboardAssignments(int32_t& elementIdentifierId, UnityEngine_CoreModule::UnityEngine::KeyCode& keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixKeyboardAssignments", std::vector<std::string> { "System.Int32&", "UnityEngine.KeyCode&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&keyCode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Keyboard::UpdateData(Rewired_Core::Rewired::UpdateLoopType updateLoop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateData", std::vector<std::string> { "Rewired.UpdateLoopType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateLoop;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Keyboard::UpdateData_AndroidKeyboardDisabled(Rewired_Core::Rewired::UpdateLoopType updateLoop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateData_AndroidKeyboardDisabled", std::vector<std::string> { "Rewired.UpdateLoopType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateLoop;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Keyboard::GetKey(Rewired_Core::Rewired::KeyboardKeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKey", std::vector<std::string> { "Rewired.KeyboardKeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
bool Rewired_Core::Rewired::Keyboard::GetKeyPrev(Rewired_Core::Rewired::KeyboardKeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyPrev", std::vector<std::string> { "Rewired.KeyboardKeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
bool Rewired_Core::Rewired::Keyboard::AllRequiredKeysPressed(Rewired_Core::Rewired::KeyboardKeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags doubledFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllRequiredKeysPressed", std::vector<std::string> { "Rewired.KeyboardKeyCode", "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&keyCode;
	params[1] = (intptr_t)&doubledFlags;
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
bool Rewired_Core::Rewired::Keyboard::IsAnyComponentKeyActive(Rewired_Core::Rewired::KeyboardKeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags doubledFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAnyComponentKeyActive", std::vector<std::string> { "Rewired.KeyboardKeyCode", "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&keyCode;
	params[1] = (intptr_t)&doubledFlags;
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
int32_t Rewired_Core::Rewired::Keyboard::GetButtonIndex(Rewired_Core::Rewired::KeyboardKeyCode keyCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonIndex", std::vector<std::string> { "Rewired.KeyboardKeyCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyCode;
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
void Rewired_Core::Rewired::Keyboard::BakeMap(Rewired_Core::Rewired::ControllerMap* controllerMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BakeMap", std::vector<std::string> { "Rewired.ControllerMap" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controllerMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Keyboard::BakeActionElementMap(Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* map)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BakeActionElementMap", std::vector<std::string> { "Rewired.ControllerMap", "Rewired.ActionElementMap" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controllerMap;
	params[1] = (intptr_t)map;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Keyboard::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Keyboard::GetControlButtons(Rewired_Core::Rewired::Controller_Button& leftButton, Rewired_Core::Rewired::Controller_Button& rightButton, Rewired_Core::Rewired::ModifierKey key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControlButtons", std::vector<std::string> { "Rewired.Controller/Button&", "Rewired.Controller/Button&", "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&leftButton;
	params[1] = (intptr_t)&rightButton;
	params[2] = (intptr_t)&key;
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
void Rewired_Core::Rewired::Keyboard::UpdateCurrentModifierKeyFlags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateCurrentModifierKeyFlags");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
