#include "Rewired_Libraries_SharpDX_DirectInput_DirectInput.h"

IL2CPP::Il2CppClass* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "Rewired.Libraries.SharpDX.DirectInput", "DirectInput");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::rBUGPecHCHOQccdWgbGopALptrQR>* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::GetDevices()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDevices");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::rBUGPecHCHOQccdWgbGopALptrQR>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::rBUGPecHCHOQccdWgbGopALptrQR>* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::GetDevices(Rewired_Windows::NlJQQTTYMgYAvXIvFEjKpjmYGwS deviceClass, Rewired_Windows::zotrNfjrxlaYOfMcNsKwvEQcQylq deviceEnumFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDevices", std::vector<std::string> { "NlJQQTTYMgYAvXIvFEjKpjmYGwS", "zotrNfjrxlaYOfMcNsKwvEQcQylq" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&deviceClass;
	params[1] = (intptr_t)&deviceEnumFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::rBUGPecHCHOQccdWgbGopALptrQR>*)returnValue;
}
int32_t Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::GetDeviceCount(Rewired_Windows::NlJQQTTYMgYAvXIvFEjKpjmYGwS deviceClass, Rewired_Windows::zotrNfjrxlaYOfMcNsKwvEQcQylq deviceEnumFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDeviceCount", std::vector<std::string> { "NlJQQTTYMgYAvXIvFEjKpjmYGwS", "zotrNfjrxlaYOfMcNsKwvEQcQylq" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&deviceClass;
	params[1] = (intptr_t)&deviceEnumFlags;
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
int32_t Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::CreateDevice_(void* pIDirectInput8, void* rguid, void* lplpDirectInputDevice, void* pUnkOuter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDevice_", std::vector<std::string> { "System.Void*", "System.Void*", "System.Void*", "System.Void*" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)pIDirectInput8;
	params[1] = (intptr_t)rguid;
	params[2] = (intptr_t)lplpDirectInputDevice;
	params[3] = (intptr_t)pUnkOuter;
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
int32_t Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::EnumDevices_(void* pIDirectInput8, int32_t dwDevType, void* lpCallback, void* pvRef, int32_t dwFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnumDevices_", std::vector<std::string> { "System.Void*", "System.Int32", "System.Void*", "System.Void*", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)pIDirectInput8;
	params[1] = (intptr_t)&dwDevType;
	params[2] = (intptr_t)lpCallback;
	params[3] = (intptr_t)pvRef;
	params[4] = (intptr_t)&dwFlags;
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
void Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::CreateDevice(mscorlib::System::Guid arg0, intptr_t& arg1, Rewired_Windows::qBxJquMCjbjCovNTSnUsIuJOTGj* arg2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDevice", std::vector<std::string> { "System.Guid", "System.IntPtr&", "qBxJquMCjbjCovNTSnUsIuJOTGj" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&arg0;
	params[1] = (intptr_t)&arg1;
	params[2] = (intptr_t)arg2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput::EnumDevices(int32_t arg0, Rewired_Windows::ErChskbRuEVIVIZQsLWoMWoKMTUu* arg1, intptr_t arg2, Rewired_Windows::zotrNfjrxlaYOfMcNsKwvEQcQylq arg3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnumDevices", std::vector<std::string> { "System.Int32", "ErChskbRuEVIVIZQsLWoMWoKMTUu", "System.IntPtr", "zotrNfjrxlaYOfMcNsKwvEQcQylq" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&arg0;
	params[1] = (intptr_t)arg1;
	params[2] = (intptr_t)&arg2;
	params[3] = (intptr_t)&arg3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
