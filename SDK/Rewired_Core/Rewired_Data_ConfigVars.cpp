#include "Rewired_Data_ConfigVars.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::ConfigVars::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data", "ConfigVars");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::ConfigVars::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::ConfigVars_WSbzAnctJdELEIwnjzkExhmtPlH>* Rewired_Core::Rewired::Data::ConfigVars::get_platformVarsDict()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_platformVarsDict");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::ConfigVars_WSbzAnctJdELEIwnjzkExhmtPlH>*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy>* Rewired_Core::Rewired::Data::ConfigVars::get_getSetPlatformVariableDict()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_getSetPlatformVariableDict");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy>*)returnValue;
}
void Rewired_Core::Rewired::Data::ConfigVars::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::DoesPlatformUseFallback(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, bool isEditor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesPlatformUseFallback", std::vector<std::string> { "Rewired.Platforms.Platform", "Rewired.Platforms.WebplayerPlatform", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&platform;
	params[1] = (intptr_t)&webplayerPlatform;
	params[2] = (intptr_t)&isEditor;
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
bool Rewired_Core::Rewired::Data::ConfigVars::DoesPlatformUseSDL2(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, bool isEditor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesPlatformUseSDL2", std::vector<std::string> { "Rewired.Platforms.Platform", "Rewired.Platforms.WebplayerPlatform", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&platform;
	params[1] = (intptr_t)&webplayerPlatform;
	params[2] = (intptr_t)&isEditor;
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
mscorlib::System::String* Rewired_Core::Rewired::Data::ConfigVars::GetDebugConfigSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDebugConfigSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVarsRelPath(Rewired_Core::Rewired::Platforms::Platform platform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVarsRelPath", std::vector<std::string> { "Rewired.Platforms.Platform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&platform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVars(Rewired_Core::Rewired::Platforms::Platform platform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVars", std::vector<std::string> { "Rewired.Platforms.Platform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&platform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
void Rewired_Core::Rewired::Data::ConfigVars::Editor_SetAllSerializedPlatformVar(Rewired_Core::Rewired::Data::ConfigVars_AllPlatformVar var, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Editor_SetAllSerializedPlatformVar", std::vector<std::string> { "Rewired.Data.ConfigVars/AllPlatformVar", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&var;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVar_disableKeyboard()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVar_disableKeyboard");
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
bool Rewired_Core::Rewired::Data::ConfigVars::SetPlatformVar_disableKeyboard(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPlatformVar_disableKeyboard", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
bool Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVar_ignoreInputWhenAppNotInFocus()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVar_ignoreInputWhenAppNotInFocus");
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
bool Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVar_useEnhancedDeviceSupport()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVar_useEnhancedDeviceSupport");
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
bool Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVar_useNativeMouse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVar_useNativeMouse");
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
bool Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVar_useNativeKeyboard()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVar_useNativeKeyboard");
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
int32_t Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVar_joystickRefreshRate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVar_joystickRefreshRate");
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
bool Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVar_assignJoysticksBySystemId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVar_assignJoysticksBySystemId");
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
bool Rewired_Core::Rewired::Data::ConfigVars::SetPlatformVar_ignoreInputWhenAppNotInFocus(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPlatformVar_ignoreInputWhenAppNotInFocus", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
bool Rewired_Core::Rewired::Data::ConfigVars::SetPlatformVar_useEnhancedDeviceSupport(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPlatformVar_useEnhancedDeviceSupport", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
bool Rewired_Core::Rewired::Data::ConfigVars::SetPlatformVar_useNativeMouse(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPlatformVar_useNativeMouse", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
bool Rewired_Core::Rewired::Data::ConfigVars::SetPlatformVar_useNativeKeyboard(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPlatformVar_useNativeKeyboard", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
bool Rewired_Core::Rewired::Data::ConfigVars::SetPlatformVar_joystickRefreshRate(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPlatformVar_joystickRefreshRate", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
bool Rewired_Core::Rewired::Data::ConfigVars::SetPlatformVar_assignJoysticksBySystemId(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPlatformVar_assignJoysticksBySystemId", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::GetPlatformVars()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlatformVars");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::MultiBoolValue Rewired_Core::Rewired::Data::ConfigVars::GetAllSerializedPlatformVar_multiBool(Rewired_Core::Rewired::Data::ConfigVars_AllPlatformVar var)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllSerializedPlatformVar_multiBool", std::vector<std::string> { "Rewired.Data.ConfigVars/AllPlatformVar" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&var;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::MultiBoolValue ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::MultiBoolValue));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::MultiBoolValue>(*(Rewired_Core::Rewired::MultiBoolValue*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Data::ConfigVars::IsEditModeInputSupported(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEditModeInputSupported", std::vector<std::string> { "Rewired.ControllerType", "Rewired.Platforms.EditorPlatform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&editorPlatform;
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
Rewired_Core::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<mscorlib::System::String>* Rewired_Core::Rewired::Data::ConfigVars::Rewired_Data_IConfigVars_Internal_get_values()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.Data.IConfigVars_Internal.get_values");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<mscorlib::System::String>*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* Rewired_Core::Rewired::Data::ConfigVars::get_valueDelegates()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_valueDelegates");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__2()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__2");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__3()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__3");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__4()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__4");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__5()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__5");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__6()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__6");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__7()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__7");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__8()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__8");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__9()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__9");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__a()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__a");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__b()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__b");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__c()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__c");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__d()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__d");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__e()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__e");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__f()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__f");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__10()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__10");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__11()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__11");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__12()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__12");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__13()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__13");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__14()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__14");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__15()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__15");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__16()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__16");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* Rewired_Core::Rewired::Data::ConfigVars::_get_platformVarsDict_b__17()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_platformVarsDict>b__17");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::ConfigVars_PlatformVars*)returnValue;
}
mscorlib::System::Object* Rewired_Core::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__19(Rewired_Core::Rewired::Platforms::Platform p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_getSetPlatformVariableDict>b__19", std::vector<std::string> { "Rewired.Platforms.Platform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&p;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__1a(Rewired_Core::Rewired::Platforms::Platform platform, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_getSetPlatformVariableDict>b__1a", std::vector<std::string> { "Rewired.Platforms.Platform", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&platform;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* Rewired_Core::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__1b(Rewired_Core::Rewired::Platforms::Platform platform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_getSetPlatformVariableDict>b__1b", std::vector<std::string> { "Rewired.Platforms.Platform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&platform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__1c(Rewired_Core::Rewired::Platforms::Platform platform, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_getSetPlatformVariableDict>b__1c", std::vector<std::string> { "Rewired.Platforms.Platform", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&platform;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Config::UpdateLoopSetting Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__1e()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__1e");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Config::UpdateLoopSetting ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Config::UpdateLoopSetting));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Config::UpdateLoopSetting>(*(Rewired_Core::Rewired::Config::UpdateLoopSetting*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__1f(Rewired_Core::Rewired::Config::UpdateLoopSetting x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__1f", std::vector<std::string> { "Rewired.Config.UpdateLoopSetting" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__20()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__20");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__21(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__21", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__22()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__22");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__23(Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__23", std::vector<std::string> { "Rewired.Platforms.WindowsStandalonePrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__24()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__24");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__25(Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__25", std::vector<std::string> { "Rewired.Platforms.OSXStandalonePrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__26()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__26");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__27(Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__27", std::vector<std::string> { "Rewired.Platforms.LinuxStandalonePrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__28()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__28");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__29(Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__29", std::vector<std::string> { "Rewired.Platforms.WindowsUWPPrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__2a()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__2a");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__2b(Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__2b", std::vector<std::string> { "Rewired.Platforms.XboxOnePrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__2c()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__2c");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__2d(Rewired_Core::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__2d", std::vector<std::string> { "Rewired.Platforms.GameCoreXboxOnePrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::GameCoreScarlettPrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__2e()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__2e");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::GameCoreScarlettPrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::GameCoreScarlettPrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::GameCoreScarlettPrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::GameCoreScarlettPrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__2f(Rewired_Core::Rewired::Platforms::GameCoreScarlettPrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__2f", std::vector<std::string> { "Rewired.Platforms.GameCoreScarlettPrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__30()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__30");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__31(Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__31", std::vector<std::string> { "Rewired.Platforms.PS4PrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::PS5PrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__32()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__32");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::PS5PrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::PS5PrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::PS5PrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::PS5PrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__33(Rewired_Core::Rewired::Platforms::PS5PrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__33", std::vector<std::string> { "Rewired.Platforms.PS5PrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__34()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__34");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__35(Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__35", std::vector<std::string> { "Rewired.Platforms.WebGLPrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Platforms::StadiaPrimaryInputSource Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__36()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__36");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Platforms::StadiaPrimaryInputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Platforms::StadiaPrimaryInputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Platforms::StadiaPrimaryInputSource>(*(Rewired_Core::Rewired::Platforms::StadiaPrimaryInputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__37(Rewired_Core::Rewired::Platforms::StadiaPrimaryInputSource x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__37", std::vector<std::string> { "Rewired.Platforms.StadiaPrimaryInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__38()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__38");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__39(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__39", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__3a()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__3a");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__3b(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__3b", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__3c()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__3c");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__3d(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__3d", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__3e()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__3e");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__3f(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__3f", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__40()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__40");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__41(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__41", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__42()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__42");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__43(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__43", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__44()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__44");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__45(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__45", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__46()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__46");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__47(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__47", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__48()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__48");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__49(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__49", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__4a()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__4a");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__4b(int32_t x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__4b", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__4c()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__4c");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__4d(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__4d", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__4e()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__4e");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__4f(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__4f", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__50()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__50");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__51(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__51", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__52()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__52");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__53(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__53", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::DeadZone2DType Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__54()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__54");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::DeadZone2DType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::DeadZone2DType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::DeadZone2DType>(*(Rewired_Core::Rewired::DeadZone2DType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__55(Rewired_Core::Rewired::DeadZone2DType x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__55", std::vector<std::string> { "Rewired.DeadZone2DType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisSensitivity2DType Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__56()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__56");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisSensitivity2DType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisSensitivity2DType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisSensitivity2DType>(*(Rewired_Core::Rewired::AxisSensitivity2DType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__57(Rewired_Core::Rewired::AxisSensitivity2DType x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__57", std::vector<std::string> { "Rewired.AxisSensitivity2DType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisSensitivityType Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__58()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__58");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisSensitivityType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisSensitivityType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisSensitivityType>(*(Rewired_Core::Rewired::AxisSensitivityType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__59(Rewired_Core::Rewired::AxisSensitivityType x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__59", std::vector<std::string> { "Rewired.AxisSensitivityType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__5a()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__5a");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__5b(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__5b", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Config::ThrottleCalibrationMode Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__5c()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__5c");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Config::ThrottleCalibrationMode ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Config::ThrottleCalibrationMode));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Config::ThrottleCalibrationMode>(*(Rewired_Core::Rewired::Config::ThrottleCalibrationMode*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__5d(Rewired_Core::Rewired::Config::ThrottleCalibrationMode x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__5d", std::vector<std::string> { "Rewired.Config.ThrottleCalibrationMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__5e()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__5e");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__5f(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__5f", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__60()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__60");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__61(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__61", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Config::LogLevelFlags Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__62()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__62");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Config::LogLevelFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Config::LogLevelFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Config::LogLevelFlags>(*(Rewired_Core::Rewired::Config::LogLevelFlags*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__63(Rewired_Core::Rewired::Config::LogLevelFlags x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__63", std::vector<std::string> { "Rewired.Config.LogLevelFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__64()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__64");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__65(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__65", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__66()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__66");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__67(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__67", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__68()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__68");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__69(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__69", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__6a()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__6a");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__6b(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__6b", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__6c()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__6c");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__6d(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__6d", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__6e()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__6e");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__6f(int32_t x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__6f", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__70()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__70");
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
void Rewired_Core::Rewired::Data::ConfigVars::_get_valueDelegates_b__71(bool x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_valueDelegates>b__71", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
