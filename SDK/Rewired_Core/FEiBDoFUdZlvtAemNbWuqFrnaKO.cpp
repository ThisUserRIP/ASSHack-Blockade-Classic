#include "FEiBDoFUdZlvtAemNbWuqFrnaKO.h"

IL2CPP::Il2CppClass* Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "", "FEiBDoFUdZlvtAemNbWuqFrnaKO");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<bool>* Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::get_ButtonValues()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ButtonValues");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<bool>*)returnValue;
}
void Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::_ctor(Rewired_Core::SKrrZjnCrwAmuNrKjpiWkZtnRmf* nativeJoystick, Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* joystickInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "SKrrZjnCrwAmuNrKjpiWkZtnRmf", "spZDJRewmbxAsUKXRWZDtdnqsYI" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)nativeJoystick;
	params[1] = (intptr_t)joystickInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::_ctor(Rewired_Core::SKrrZjnCrwAmuNrKjpiWkZtnRmf* nativeJoystick, Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* joystickInfo, Rewired_Core::yzACPDDxGCtCXzPebQMkoQYswDi type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "SKrrZjnCrwAmuNrKjpiWkZtnRmf", "spZDJRewmbxAsUKXRWZDtdnqsYI", "yzACPDDxGCtCXzPebQMkoQYswDi" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)nativeJoystick;
	params[1] = (intptr_t)joystickInfo;
	params[2] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::_ctor(Rewired_Core::KVBYRrMkCsEDijOnPrfyxmKdjWB* nativeDevice, Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* joystickInfo, Rewired_Core::yzACPDDxGCtCXzPebQMkoQYswDi type, int32_t buttonCount, int32_t axisCount, int32_t hatCount, int32_t ballCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "KVBYRrMkCsEDijOnPrfyxmKdjWB", "spZDJRewmbxAsUKXRWZDtdnqsYI", "yzACPDDxGCtCXzPebQMkoQYswDi", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)nativeDevice;
	params[1] = (intptr_t)joystickInfo;
	params[2] = (intptr_t)&type;
	params[3] = (intptr_t)&buttonCount;
	params[4] = (intptr_t)&axisCount;
	params[5] = (intptr_t)&hatCount;
	params[6] = (intptr_t)&ballCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::pFqEeNdzCVoYGNaBpkbkVXEGNDNa(Rewired_Core::OzkBgRAmkWuaJLDyDJYRRUBYDNFT A_1, uint8_t A_2, int16_t A_3, double A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pFqEeNdzCVoYGNaBpkbkVXEGNDNa");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::Update(Rewired_Core::Rewired::UpdateLoopType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::UpdateFinished()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateFinished");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::get_JoystickId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_JoystickId");
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
int32_t Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::get_ButtonCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ButtonCount");
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
int32_t Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::get_AxisCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AxisCount");
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
int32_t Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::get_HatCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HatCount");
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
int32_t Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::get_BallCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BallCount");
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
bool Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::get_HasElements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasElements");
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
Rewired_Core::Rewired::InputSource Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::get_InputSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InputSource");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::InputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::InputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::InputSource>(*(Rewired_Core::Rewired::InputSource*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::get_HasEverReceivedInput()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasEverReceivedInput");
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
float Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::GetAxisValue(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisValue");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::GetAxisRawValue(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisRawValue");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
bool Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::GetButtonValue(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonValue");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
int32_t Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::GetHatValue(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHatValue");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::GetBallValue(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBallValue");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::jtplUNfWoyXSJUktOfDKlfcvHpG(Rewired_Core::SKrrZjnCrwAmuNrKjpiWkZtnRmf* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jtplUNfWoyXSJUktOfDKlfcvHpG");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::InitializeHaptic()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeHaptic");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::CloseDevice()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloseDevice");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::manmAjofTbuGOiPNYnAusGfryPW(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "manmAjofTbuGOiPNYnAusGfryPW");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO::uuOAwWNURXyKroJTXqNkrDlVfmj(int16_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "uuOAwWNURXyKroJTXqNkrDlVfmj");
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
