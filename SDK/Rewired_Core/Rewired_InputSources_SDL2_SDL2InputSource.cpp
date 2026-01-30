#include "Rewired_InputSources_SDL2_SDL2InputSource.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.InputSources.SDL2", "SDL2InputSource");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::get_initialized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_initialized");
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
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::_ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoop, bool handleJoysticks, bool handleGamepads, bool handleUnifiedMouse, bool handleUnifiedKeyboard)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Config.UpdateLoopSetting", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&updateLoop;
	params[1] = (intptr_t)&handleJoysticks;
	params[2] = (intptr_t)&handleGamepads;
	params[3] = (intptr_t)&handleUnifiedMouse;
	params[4] = (intptr_t)&handleUnifiedKeyboard;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::aduoIrGkiihlVUqiUFpedeqepIOX(mscorlib::System::Action* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "aduoIrGkiihlVUqiUFpedeqepIOX");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::oTManwQPbHgLUAttHQWuKqHgrkJx(mscorlib::System::Action* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "oTManwQPbHgLUAttHQWuKqHgrkJx");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::add_DeviceChangedEvent(mscorlib::System::Action* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_DeviceChangedEvent", std::vector<std::string> { "System.Action" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::remove_DeviceChangedEvent(mscorlib::System::Action* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_DeviceChangedEvent", std::vector<std::string> { "System.Action" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::SystemDeviceConnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SystemDeviceConnected");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::SystemDeviceDisconnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SystemDeviceDisconnected");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::UpdateDevices(Rewired_Core::Rewired::UpdateLoopType updateLoop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateDevices", std::vector<std::string> { "Rewired.UpdateLoopType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateLoop;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::UpdateFinished()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateFinished");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::BJtkxLqSRNRKMNYWWJfuJtKmULs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BJtkxLqSRNRKMNYWWJfuJtKmULs");
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
int32_t Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::JmIobbJcoDxnjOpUDIeNNFkCYgr()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JmIobbJcoDxnjOpUDIeNNFkCYgr");
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
Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::mJfdPQKKREqOXnHGlCSrDmVGFHwM(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "mJfdPQKKREqOXnHGlCSrDmVGFHwM");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO*)returnValue;
}
Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::WNCEVmGzVRvWCTZMaNRZQbYXecx(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WNCEVmGzVRvWCTZMaNRZQbYXecx");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi*)returnValue;
}
Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::zRxrQxCIKAIsbjecFQMowHMBdMTc(int32_t A_1, Rewired_Core::SKrrZjnCrwAmuNrKjpiWkZtnRmf* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zRxrQxCIKAIsbjecFQMowHMBdMTc");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI*)returnValue;
}
Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::dKKixJYxdgBRYQucyJvflJzznid(int32_t A_1, Rewired_Core::ZIAAVUtCRuggKkjYOeCeJntDlQmQ* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dKKixJYxdgBRYQucyJvflJzznid");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI*)returnValue;
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::vcPcEHNTyegyjVpAAoMXgDLdEFb()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vcPcEHNTyegyjVpAAoMXgDLdEFb");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::VqCvOiPAICfsTJiPkacIHRpmTBY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VqCvOiPAICfsTJiPkacIHRpmTBY");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::wxvdQVuSCpbhLkjmLiiGjSmxiioY(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "wxvdQVuSCpbhLkjmLiiGjSmxiioY");
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
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::WcWBTFMxAQxmOTvdiGTTXKAkFTwE(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WcWBTFMxAQxmOTvdiGTTXKAkFTwE");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::sTjFdZfZyPuXHExqpZyLVWfDDYv(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "sTjFdZfZyPuXHExqpZyLVWfDDYv");
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
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::GYLkcduKPoNvJorzMCtxjfrITSa(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GYLkcduKPoNvJorzMCtxjfrITSa");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::vvUfOLwPCDuqbHQnRBxDYGJlBPE(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vvUfOLwPCDuqbHQnRBxDYGJlBPE");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO*)returnValue;
}
Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi* Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::vxUMyDporFUWkjLUFREXfBWsuAt(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vxUMyDporFUWkjLUFREXfBWsuAt");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi*)returnValue;
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::eEeioAwOUhDyMApTWsCvsbcIMon()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "eEeioAwOUhDyMApTWsCvsbcIMon");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::MRKaQkTiRlZiNdXHeYanjcsxYpw(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_nNxpUYIablnhnEVPkSqKXFzXVVM& A_1, double A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MRKaQkTiRlZiNdXHeYanjcsxYpw");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::AFriycMjLLQDUzibnNUUAdhTpEV(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_GwxGkLjabgaVIfQNJNxaIfyABowW& A_1, double A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AFriycMjLLQDUzibnNUUAdhTpEV");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::lifxhbgBoDScQAzUdPfdaXmrHlx(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_PioTQzzztxBgVJoLhwkOpvszuRb& A_1, double A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lifxhbgBoDScQAzUdPfdaXmrHlx");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::xliaaXjlgCdKGheiEpVOjyJoncCI(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_cfqFrUDouSuPwcEEjtBLMgGCXTRc& A_1, double A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xliaaXjlgCdKGheiEpVOjyJoncCI");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::nNyGExpzgmbIVSjZlYqQEZRiqqB(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_szmZpoIuCIBNchEtADGIBVWQayXE& A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nNyGExpzgmbIVSjZlYqQEZRiqqB");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::pSygWJzeiCDXgTdxqddwbpLdUgNG(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_szmZpoIuCIBNchEtADGIBVWQayXE& A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pSygWJzeiCDXgTdxqddwbpLdUgNG");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::CDTDWVkhdDLPSYgfTFncHcqdQhmO(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_FQSDYuXMwUwrmFXeFpokVHnzkSM& A_1, double A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CDTDWVkhdDLPSYgfTFncHcqdQhmO");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::neibDWbjKnFnMbgZqhRFpjiHfsV(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_XuzGEEkpIGZBmGCqFmHMMVZnxGQQ& A_1, double A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "neibDWbjKnFnMbgZqhRFpjiHfsV");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::QDZQIKKggQhTUftQkLaeZLljytm(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_zvunBVkhBVffrcFApAHeATaCSegi& A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QDZQIKKggQhTUftQkLaeZLljytm");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::oxmeJZJRfySrWlrozIlLZdRtvgio(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_zvunBVkhBVffrcFApAHeATaCSegi& A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "oxmeJZJRfySrWlrozIlLZdRtvgio");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::PWNaXayIsdzpfIYTEgbAlUabKRZ(Rewired_Core::obyfbEVyyVcqOGAFVygdmbODjCD_zvunBVkhBVffrcFApAHeATaCSegi& A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PWNaXayIsdzpfIYTEgbAlUabKRZ");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::AcsPrpthiNmfRTZpEtsElPdSnnK(int32_t A_1, Rewired_Core::OzkBgRAmkWuaJLDyDJYRRUBYDNFT A_2, uint8_t A_3, int16_t A_4, double A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AcsPrpthiNmfRTZpEtsElPdSnnK");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::LtEVCsuUskYClXxzvTYVPKoOTSb(int32_t A_1, Rewired_Core::OzkBgRAmkWuaJLDyDJYRRUBYDNFT A_2, uint8_t A_3, int16_t A_4, double A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LtEVCsuUskYClXxzvTYVPKoOTSb");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::trkYARpPAKjiHBhvRCUbSqjcAXO()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "trkYARpPAKjiHBhvRCUbSqjcAXO");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputSources::SDL2::SDL2InputSource::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
