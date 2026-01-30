#include "Rewired_Libraries_SharpDX_DirectInput_DeviceObjectId.h"

IL2CPP::Il2CppClass* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "Rewired.Libraries.SharpDX.DirectInput", "DeviceObjectId");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId::get_Flags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Flags");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN ret;
		std::memset(&ret, 0, sizeof(Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN));
		return ret;
	}
	return static_cast<Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN>(*(Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId::get_InstanceNumber()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InstanceNumber");
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
bool Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId::Equals(Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "Rewired.Libraries.SharpDX.DirectInput.DeviceObjectId" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
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
bool Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
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
int32_t Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
mscorlib::System::String* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
