#include "Rewired_PlayerSaveData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::PlayerSaveData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "PlayerSaveData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::PlayerSaveData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<Rewired_Core::Rewired::JoystickMapSaveData*>* Rewired_Core::Rewired::PlayerSaveData::get_joystickMapSaveData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_joystickMapSaveData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::JoystickMapSaveData*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::KeyboardMapSaveData*>* Rewired_Core::Rewired::PlayerSaveData::get_keyboardMapSaveData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_keyboardMapSaveData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::KeyboardMapSaveData*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::MouseMapSaveData*>* Rewired_Core::Rewired::PlayerSaveData::get_mouseMapSaveData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mouseMapSaveData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::MouseMapSaveData*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::CustomControllerMapSaveData*>* Rewired_Core::Rewired::PlayerSaveData::get_customControllerMapSaveData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_customControllerMapSaveData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::CustomControllerMapSaveData*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::InputBehavior*>* Rewired_Core::Rewired::PlayerSaveData::get_inputBehaviors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_inputBehaviors");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::InputBehavior*>*)returnValue;
}
int32_t Rewired_Core::Rewired::PlayerSaveData::get_joystickMapCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_joystickMapCount");
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
int32_t Rewired_Core::Rewired::PlayerSaveData::get_keyboardMapCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_keyboardMapCount");
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
int32_t Rewired_Core::Rewired::PlayerSaveData::get_mouseMapCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mouseMapCount");
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
int32_t Rewired_Core::Rewired::PlayerSaveData::get_customControllerMapCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_customControllerMapCount");
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
int32_t Rewired_Core::Rewired::PlayerSaveData::get_inputBehaviorCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_inputBehaviorCount");
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMapSaveData>* Rewired_Core::Rewired::PlayerSaveData::get_AllControllerMapSaveData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AllControllerMapSaveData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMapSaveData>*)returnValue;
}
void Rewired_Core::Rewired::PlayerSaveData::_ctor(IL2CPP::Array<Rewired_Core::Rewired::JoystickMapSaveData*>* joystickMapSaveData, IL2CPP::Array<Rewired_Core::Rewired::KeyboardMapSaveData*>* keyboardMapSaveData, IL2CPP::Array<Rewired_Core::Rewired::MouseMapSaveData*>* mouseMapSaveData, IL2CPP::Array<Rewired_Core::Rewired::CustomControllerMapSaveData*>* customControllerMapSaveData, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* inputBehaviors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.JoystickMapSaveData[]", "Rewired.KeyboardMapSaveData[]", "Rewired.MouseMapSaveData[]", "Rewired.CustomControllerMapSaveData[]", "System.Collections.Generic.IList`1<Rewired.InputBehavior>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)joystickMapSaveData;
	params[1] = (intptr_t)keyboardMapSaveData;
	params[2] = (intptr_t)mouseMapSaveData;
	params[3] = (intptr_t)customControllerMapSaveData;
	params[4] = (intptr_t)inputBehaviors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
