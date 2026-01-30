#include "bhsiOYyuLgoZVDaslnvjJtzLABN.h"

IL2CPP::Il2CppClass* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "", "bhsiOYyuLgoZVDaslnvjJtzLABN");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::add_ControllerDisconnectStartedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::ControllerStatusChangedEventArgs>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_ControllerDisconnectStartedEvent", std::vector<std::string> { "System.Action`1<Rewired.ControllerStatusChangedEventArgs>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::remove_ControllerDisconnectStartedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::ControllerStatusChangedEventArgs>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_ControllerDisconnectStartedEvent", std::vector<std::string> { "System.Action`1<Rewired.ControllerStatusChangedEventArgs>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::add_JustBeforeControllerFullyDisconnectedEvent(mscorlib::System::Action_2<Rewired_Core::Rewired::ControllerType, mscorlib::System::Int32>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_JustBeforeControllerFullyDisconnectedEvent", std::vector<std::string> { "System.Action`2<Rewired.ControllerType,System.Int32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::remove_JustBeforeControllerFullyDisconnectedEvent(mscorlib::System::Action_2<Rewired_Core::Rewired::ControllerType, mscorlib::System::Int32>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_JustBeforeControllerFullyDisconnectedEvent", std::vector<std::string> { "System.Action`2<Rewired.ControllerType,System.Int32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::_ctor(Rewired_Core::Rewired::Data::ConfigVars* configVars, Rewired_Core::Rewired::PlatformInputManager* inputManager)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Data.ConfigVars", "Rewired.PlatformInputManager" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)configVars;
	params[1] = (intptr_t)inputManager;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Joystick>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_Joysticks_readOnly()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Joysticks_readOnly");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Joystick>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Joystick>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_Joysticks_orig()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Joysticks_orig");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Joystick>*)returnValue;
}
int32_t Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_joystickCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_joystickCount");
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
Rewired_Core::Rewired::Mouse* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_Mouse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Mouse");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Mouse*)returnValue;
}
Rewired_Core::Rewired::Keyboard* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_Keyboard()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Keyboard");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Keyboard*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::CustomController>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_CustomControllers_readOnly()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CustomControllers_readOnly");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::CustomController>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::CustomController>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_CustomControllers_orig()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CustomControllers_orig");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::CustomController>*)returnValue;
}
int32_t Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_customControllerCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_customControllerCount");
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
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::pKLNoWCgVUqlRfCsOXaDmHUNbICB(mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputBehavior>* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pKLNoWCgVUqlRfCsOXaDmHUNbICB");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::rzxcwQaQDJsOGhoApWnDOXVkvyqu(Rewired_Core::Rewired::UpdateLoopType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rzxcwQaQDJsOGhoApWnDOXVkvyqu");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::OojHVyREErIozRayFZRviDSHOGp* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::IoMROHTqvUlJhdAaZLmoMqjcMJA(int32_t A_1, mscorlib::System::String* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IoMROHTqvUlJhdAaZLmoMqjcMJA");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::OojHVyREErIozRayFZRviDSHOGp*)returnValue;
}
Rewired_Core::OojHVyREErIozRayFZRviDSHOGp* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::IoMROHTqvUlJhdAaZLmoMqjcMJA(int32_t A_1, int32_t A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IoMROHTqvUlJhdAaZLmoMqjcMJA");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::OojHVyREErIozRayFZRviDSHOGp*)returnValue;
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::fzmEKjkScUOlXVxRRgwCBauCnaeC(Rewired_Core::Rewired::UpdateControllerInfoEventArgs* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "fzmEKjkScUOlXVxRRgwCBauCnaeC");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::MhqOLMyDbLkGgUHlZXPAsXQbwma(int32_t A_1, Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN_nTaiBTAhDlqpzbOVZBJOGGtbPktg A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MhqOLMyDbLkGgUHlZXPAsXQbwma");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
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
int32_t Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::dYMqmePgCmcjCilyUxxBbFuvCoKz(int32_t A_1, Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN_nTaiBTAhDlqpzbOVZBJOGGtbPktg A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dYMqmePgCmcjCilyUxxBbFuvCoKz");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
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
int32_t Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::dYMqmePgCmcjCilyUxxBbFuvCoKz(mscorlib::System::Guid A_1, Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN_nTaiBTAhDlqpzbOVZBJOGGtbPktg A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dYMqmePgCmcjCilyUxxBbFuvCoKz");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::SOOHyTDyBepWZJBNsjBQCmxZGgSv(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SOOHyTDyBepWZJBNsjBQCmxZGgSv");
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
int32_t Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::POtFpKXsvaSOdZoYIdflKfnEQvw(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "POtFpKXsvaSOdZoYIdflKfnEQvw");
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
int32_t Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::POtFpKXsvaSOdZoYIdflKfnEQvw(mscorlib::System::Guid A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "POtFpKXsvaSOdZoYIdflKfnEQvw");
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
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::ncnZqKJtNmEkPrCjWljFoQJHllx(Rewired_Core::Rewired::BridgedController* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ncnZqKJtNmEkPrCjWljFoQJHllx");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::RlIPVRvbcSncUAqPeZQtOdNaxnH(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RlIPVRvbcSncUAqPeZQtOdNaxnH");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lXQtVlGRlZOlfEMLGVsiLyCPlvC()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lXQtVlGRlZOlfEMLGVsiLyCPlvC");
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
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::vjQdZTMNFknknvlGlJrRkugaFrL(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vjQdZTMNFknknvlGlJrRkugaFrL");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::pezaPdGYdyTHatqUqPSGtdbaaV(int32_t A_1, mscorlib::System::String* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pezaPdGYdyTHatqUqPSGtdbaaV");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::pezaPdGYdyTHatqUqPSGtdbaaV(int32_t A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pezaPdGYdyTHatqUqPSGtdbaaV");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Rewired_Core::Rewired::Joystick* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::cGgqZhWKcOXGyuFSKmJDhydXsoN(int32_t A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cGgqZhWKcOXGyuFSKmJDhydXsoN", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Joystick*)returnValue;
}
Rewired_Core::Rewired::Joystick* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::cGgqZhWKcOXGyuFSKmJDhydXsoN(mscorlib::System::Guid A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cGgqZhWKcOXGyuFSKmJDhydXsoN", std::vector<std::string> { "System.Guid", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Joystick*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::Joystick*>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::XdbpPlJQzxHdArIaQaNGJDRgANY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XdbpPlJQzxHdArIaQaNGJDRgANY");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::Joystick*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::upQQsMcpPgGxNaffgdcWNSdmYvv()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "upQQsMcpPgGxNaffgdcWNSdmYvv");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
Rewired_Core::Rewired::CustomController* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::AYKtVtLNAlyDUmdZoYkQtRHhnGC(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AYKtVtLNAlyDUmdZoYkQtRHhnGC");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomController*)returnValue;
}
Rewired_Core::Rewired::CustomController* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::AYKtVtLNAlyDUmdZoYkQtRHhnGC(mscorlib::System::Guid A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AYKtVtLNAlyDUmdZoYkQtRHhnGC");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomController*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::CustomController*>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::pojdyfNnmTgDsfzCvlNYJOQQFfL()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pojdyfNnmTgDsfzCvlNYJOQQFfL");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::CustomController*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::tMhhnyxHozkfuaTDvdDprzSinRY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "tMhhnyxHozkfuaTDvdDprzSinRY");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
Rewired_Core::Rewired::CustomController* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::zbpXBlWiXvTrbbtvRhbjKZIMUKf(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zbpXBlWiXvTrbbtvRhbjKZIMUKf");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomController*)returnValue;
}
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::xZSgExgesrpbxizMZhFeYMoUMDBF(Rewired_Core::Rewired::CustomController* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xZSgExgesrpbxizMZhFeYMoUMDBF");
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
Rewired_Core::Rewired::CustomController* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::cKMoXnmZWhHankEzJRPoRjzrxrN(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cKMoXnmZWhHankEzJRPoRjzrxrN");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomController*)returnValue;
}
Rewired_Core::Rewired::CustomController* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::zSQfVFjgbSgNBJIwckpArLeVeTA(mscorlib::System::String* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zSQfVFjgbSgNBJIwckpArLeVeTA");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomController*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::CustomController>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::oOEecLaifSHXNmPKVZtmkZhKHje(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "oOEecLaifSHXNmPKVZtmkZhKHje");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::CustomController>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::CustomController>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::AgrPDSRgymPunOkEsaaUklppUXU(mscorlib::System::String* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AgrPDSRgymPunOkEsaaUklppUXU");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::CustomController>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_Controllers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Controllers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller>*)returnValue;
}
int32_t Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_controllerCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerCount");
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
Rewired_Core::Rewired::Controller* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::EGdUQwGJeqIZoLcTtnLKAwhULbu(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EGdUQwGJeqIZoLcTtnLKAwhULbu", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
Rewired_Core::Rewired::Controller* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::EGdUQwGJeqIZoLcTtnLKAwhULbu(Rewired_Core::Rewired::ControllerIdentifier A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EGdUQwGJeqIZoLcTtnLKAwhULbu", std::vector<std::string> { "Rewired.ControllerIdentifier", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
Rewired_Core::Rewired::Controller* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::EGdUQwGJeqIZoLcTtnLKAwhULbu(mscorlib::System::Guid A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EGdUQwGJeqIZoLcTtnLKAwhULbu", std::vector<std::string> { "System.Guid", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::Controller*>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::zCVKvoupVhPhwcuYtuCrGdGPHrZ(Rewired_Core::Rewired::ControllerType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zCVKvoupVhPhwcuYtuCrGdGPHrZ");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::Controller*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::MRYmtAMVjMVqXKKvneYHBTidpLe(Rewired_Core::Rewired::ControllerType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MRYmtAMVjMVqXKKvneYHBTidpLe");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lOgDEpbEcDGeReNUKkvqPBmJQEoI(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lOgDEpbEcDGeReNUKkvqPBmJQEoI");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lOgDEpbEcDGeReNUKkvqPBmJQEoI(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, int32_t A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lOgDEpbEcDGeReNUKkvqPBmJQEoI");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lOgDEpbEcDGeReNUKkvqPBmJQEoI(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, mscorlib::System::String* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lOgDEpbEcDGeReNUKkvqPBmJQEoI");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lOgDEpbEcDGeReNUKkvqPBmJQEoI(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, Rewired_Core::Rewired::InputActionEventType A_4, IL2CPP::Array<mscorlib::System::Object*>* A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lOgDEpbEcDGeReNUKkvqPBmJQEoI");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lOgDEpbEcDGeReNUKkvqPBmJQEoI(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, Rewired_Core::Rewired::InputActionEventType A_4, int32_t A_5, IL2CPP::Array<mscorlib::System::Object*>* A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lOgDEpbEcDGeReNUKkvqPBmJQEoI");
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)A_6;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lOgDEpbEcDGeReNUKkvqPBmJQEoI(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, Rewired_Core::Rewired::InputActionEventType A_4, mscorlib::System::String* A_5, IL2CPP::Array<mscorlib::System::Object*>* A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lOgDEpbEcDGeReNUKkvqPBmJQEoI");
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	params[5] = (intptr_t)A_6;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, mscorlib::System::String* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::InputActionEventType A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, int32_t A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, mscorlib::System::String* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::InputActionEventType A_3, int32_t A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::InputActionEventType A_3, mscorlib::System::String* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, Rewired_Core::Rewired::InputActionEventType A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, Rewired_Core::Rewired::InputActionEventType A_4, int32_t A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::abZcPvfSwLAauSVjbtpxLWMmMMS(int32_t A_1, mscorlib::System::Action_1<Rewired_Core::Rewired::InputActionEventData>* A_2, Rewired_Core::Rewired::UpdateLoopType A_3, Rewired_Core::Rewired::InputActionEventType A_4, mscorlib::System::String* A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abZcPvfSwLAauSVjbtpxLWMmMMS");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lNOejzxNTfvaXOWYFPHonxzsfnS(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lNOejzxNTfvaXOWYFPHonxzsfnS");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::QvVmPOdSaebBAYzzJFstiOTdOAs(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QvVmPOdSaebBAYzzJFstiOTdOAs");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::OqRtYvBDCbBFCjvKPMPSfVunPt(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OqRtYvBDCbBFCjvKPMPSfVunPt");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::HnxeyEjgiyNAKdLilHhwNVcovNn(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HnxeyEjgiyNAKdLilHhwNVcovNn");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::ElOuniZHJkMBdxRzKZJwurKgXgv(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElOuniZHJkMBdxRzKZJwurKgXgv");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::iCqkdfdVvbNJcrfrNLFKbAbbjAp(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "iCqkdfdVvbNJcrfrNLFKbAbbjAp");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::yETmvBvXAmNhXryuGUVVmKaRlTa(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "yETmvBvXAmNhXryuGUVVmKaRlTa");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::NfUeMuWAstBfRzBmaDvVHYBrhRa(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NfUeMuWAstBfRzBmaDvVHYBrhRa");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::HmAlBlyXoNIUsqYAIvSQOUUdcTs(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HmAlBlyXoNIUsqYAIvSQOUUdcTs");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::DADUCzqNHsYcmHdhAAHRkREKTnN()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DADUCzqNHsYcmHdhAAHRkREKTnN");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::DADUCzqNHsYcmHdhAAHRkREKTnN(Rewired_Core::Rewired::ControllerType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DADUCzqNHsYcmHdhAAHRkREKTnN");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::FyMgiSOiqJPxNMTJmLjTARIpvQo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FyMgiSOiqJPxNMTJmLjTARIpvQo");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::FyMgiSOiqJPxNMTJmLjTARIpvQo(Rewired_Core::Rewired::ControllerType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FyMgiSOiqJPxNMTJmLjTARIpvQo");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::jlZVYGmVTkkYOOvEuJjijjdIdNs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jlZVYGmVTkkYOOvEuJjijjdIdNs");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::jlZVYGmVTkkYOOvEuJjijjdIdNs(Rewired_Core::Rewired::ControllerType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jlZVYGmVTkkYOOvEuJjijjdIdNs");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::erBQrZlIPPUkYhtwyrJDnShKbMsd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "erBQrZlIPPUkYhtwyrJDnShKbMsd");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::erBQrZlIPPUkYhtwyrJDnShKbMsd(Rewired_Core::Rewired::ControllerType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "erBQrZlIPPUkYhtwyrJDnShKbMsd");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::nXDQLHzHVgjryWbejDxgRTiPPbf()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nXDQLHzHVgjryWbejDxgRTiPPbf");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::nXDQLHzHVgjryWbejDxgRTiPPbf(Rewired_Core::Rewired::ControllerType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nXDQLHzHVgjryWbejDxgRTiPPbf");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::DADUCzqNHsYcmHdhAAHRkREKTnN(Rewired_Core::Rewired::Controller* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DADUCzqNHsYcmHdhAAHRkREKTnN");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::FyMgiSOiqJPxNMTJmLjTARIpvQo(Rewired_Core::Rewired::Controller* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FyMgiSOiqJPxNMTJmLjTARIpvQo");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::jlZVYGmVTkkYOOvEuJjijjdIdNs(Rewired_Core::Rewired::Controller* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jlZVYGmVTkkYOOvEuJjijjdIdNs");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::erBQrZlIPPUkYhtwyrJDnShKbMsd(Rewired_Core::Rewired::Controller* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "erBQrZlIPPUkYhtwyrJDnShKbMsd");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::nXDQLHzHVgjryWbejDxgRTiPPbf(Rewired_Core::Rewired::Controller* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nXDQLHzHVgjryWbejDxgRTiPPbf");
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
Rewired_Core::Rewired::Controller* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::fArCHVFjRnryBBeUsTqzAMHtIFh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "fArCHVFjRnryBBeUsTqzAMHtIFh");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
Rewired_Core::Rewired::Controller* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::fArCHVFjRnryBBeUsTqzAMHtIFh(Rewired_Core::Rewired::ControllerType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "fArCHVFjRnryBBeUsTqzAMHtIFh");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
Rewired_Core::Rewired::ControllerType Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::zlSNSaxpfxgrvINloIAKHcRHVOXB()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zlSNSaxpfxgrvINloIAKHcRHVOXB");
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
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lacijwquPRgtSCXiguXuMIclYIrH(Rewired_Core::Rewired::ActiveControllerChangedDelegate* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lacijwquPRgtSCXiguXuMIclYIrH");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lacijwquPRgtSCXiguXuMIclYIrH(Rewired_Core::Rewired::ActiveControllerChangedDelegate* A_1, Rewired_Core::Rewired::ControllerType A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lacijwquPRgtSCXiguXuMIclYIrH");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::dOBaJtIGHZhqzwcjasRhrEUOYYWR(Rewired_Core::Rewired::ActiveControllerChangedDelegate* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dOBaJtIGHZhqzwcjasRhrEUOYYWR");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::GQjFMwetbZHZeIoCrVwEWBZdpSI(Rewired_Core::Rewired::ActiveControllerChangedDelegate* A_1, Rewired_Core::Rewired::ControllerType A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GQjFMwetbZHZeIoCrVwEWBZdpSI");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::QhBvIcKwychyYnqNobnXctLfRbt()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QhBvIcKwychyYnqNobnXctLfRbt");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lacijwquPRgtSCXiguXuMIclYIrH(int32_t A_1, Rewired_Core::Rewired::PlayerActiveControllerChangedDelegate* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lacijwquPRgtSCXiguXuMIclYIrH");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::lacijwquPRgtSCXiguXuMIclYIrH(int32_t A_1, Rewired_Core::Rewired::PlayerActiveControllerChangedDelegate* A_2, Rewired_Core::Rewired::ControllerType A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lacijwquPRgtSCXiguXuMIclYIrH");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::dOBaJtIGHZhqzwcjasRhrEUOYYWR(int32_t A_1, Rewired_Core::Rewired::PlayerActiveControllerChangedDelegate* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dOBaJtIGHZhqzwcjasRhrEUOYYWR");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::dOBaJtIGHZhqzwcjasRhrEUOYYWR(int32_t A_1, Rewired_Core::Rewired::PlayerActiveControllerChangedDelegate* A_2, Rewired_Core::Rewired::ControllerType A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dOBaJtIGHZhqzwcjasRhrEUOYYWR");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::QhBvIcKwychyYnqNobnXctLfRbt(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QhBvIcKwychyYnqNobnXctLfRbt");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::SYvxiNXIEAoojxVajsBijaezYZW()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SYvxiNXIEAoojxVajsBijaezYZW");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::bmhVnathwTJwNJviFqGckQDVzfE(Rewired_Core::Rewired::Config::ThrottleCalibrationMode A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bmhVnathwTJwNJviFqGckQDVzfE");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::bmhVnathwTJwNJviFqGckQDVzfE(Rewired_Core::Rewired::ControllerWithAxes* A_1, Rewired_Core::Rewired::Config::ThrottleCalibrationMode A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bmhVnathwTJwNJviFqGckQDVzfE");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::get_nextCustomControllerId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_nextCustomControllerId");
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
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::pKLNoWCgVUqlRfCsOXaDmHUNbICB(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputBehavior>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pKLNoWCgVUqlRfCsOXaDmHUNbICB");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::hipigKtYJPZFwFSnxagvaPRWVre(Rewired_Core::Rewired::UpdateLoopType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hipigKtYJPZFwFSnxagvaPRWVre");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::MPuAPgfbNJbmsrFzVrvnCVaJAbiz(Rewired_Core::Rewired::UpdateLoopType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MPuAPgfbNJbmsrFzVrvnCVaJAbiz");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::iDedAwDNXUBwXAlVJNyjhbYfmZQl(bool A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "iDedAwDNXUBwXAlVJNyjhbYfmZQl");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::LfvsPSzghWUDvKklNACfOTJojQX(Rewired_Core::Rewired::BridgedController* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LfvsPSzghWUDvKklNACfOTJojQX");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::KWoOTKKkxgKGBVyuHjtfUqUaDdo(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KWoOTKKkxgKGBVyuHjtfUqUaDdo");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::zEcHhjbboYwyjkwJuIDRpLMSdpkC()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zEcHhjbboYwyjkwJuIDRpLMSdpkC");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::kidQQvaDgFBddDaWocJyuqnhPGsN(Rewired_Core::Rewired::CustomController* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "kidQQvaDgFBddDaWocJyuqnhPGsN");
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
bool Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::aQlcvJYwnXttPUoXeMbThtCpANC(Rewired_Core::Rewired::CustomController* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "aQlcvJYwnXttPUoXeMbThtCpANC");
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
Rewired_Core::eCdfdxaCgKScksSvqjSZREluSubO* Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::LPLCcwLwpqhVdWgLbQeWDHtqcWJ(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LPLCcwLwpqhVdWgLbQeWDHtqcWJ");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::eCdfdxaCgKScksSvqjSZREluSubO*)returnValue;
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::CKUZrYBvYAJObgPMxqljcLACueD(bool A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CKUZrYBvYAJObgPMxqljcLACueD");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::bEYbBfkhketvhPQvBOKJStlYFZHR(bool A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bEYbBfkhketvhPQvBOKJStlYFZHR");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::bhsiOYyuLgoZVDaslnvjJtzLABN::snZhCwQAgWjYPcOgscQYoAtKPcNi(bool A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "snZhCwQAgWjYPcOgscQYoAtKPcNi");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
