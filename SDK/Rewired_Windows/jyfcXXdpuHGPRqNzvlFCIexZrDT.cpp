#include "jyfcXXdpuHGPRqNzvlFCIexZrDT.h"

IL2CPP::Il2CppClass* Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "", "jyfcXXdpuHGPRqNzvlFCIexZrDT");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::_ctor(Rewired_Windows::pvueaHomUycmOHaTrEUjPlBmeSeS& rawDeviceInfo, mscorlib::System::String* deviceName, intptr_t deviceHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "pvueaHomUycmOHaTrEUjPlBmeSeS&", "System.String", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rawDeviceInfo;
	params[1] = (intptr_t)deviceName;
	params[2] = (intptr_t)&deviceHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::get_DeviceName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DeviceName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::set_DeviceName(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DeviceName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Windows::DlsFswFjpDDLxCrYiRtRYCYxhsh Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::get_DeviceType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DeviceType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Windows::DlsFswFjpDDLxCrYiRtRYCYxhsh ret;
		std::memset(&ret, 0, sizeof(Rewired_Windows::DlsFswFjpDDLxCrYiRtRYCYxhsh));
		return ret;
	}
	return static_cast<Rewired_Windows::DlsFswFjpDDLxCrYiRtRYCYxhsh>(*(Rewired_Windows::DlsFswFjpDDLxCrYiRtRYCYxhsh*)il2cpp_object_unbox(returnValue));
}
void Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::set_DeviceType(Rewired_Windows::DlsFswFjpDDLxCrYiRtRYCYxhsh value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DeviceType", std::vector<std::string> { "DlsFswFjpDDLxCrYiRtRYCYxhsh" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::get_Handle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Handle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::set_Handle(intptr_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Handle", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT* Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT::QszPwnCuUhrzJkuEpTbNiPiwSrY(Rewired_Windows::pvueaHomUycmOHaTrEUjPlBmeSeS& A_0, mscorlib::System::String* A_1, intptr_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QszPwnCuUhrzJkuEpTbNiPiwSrY");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)A_1;
	params[2] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Windows::jyfcXXdpuHGPRqNzvlFCIexZrDT*)returnValue;
}
