#include "Rewired_ReInput_ControllerHelper_PollingHelper.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ReInput_ControllerHelper::GetIl2CppClass(), "PollingHelper");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper*)returnValue;
}
void Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForFirstElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForFirstElement");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForFirstElementDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForFirstElementDown");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForFirstButton()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForFirstButton");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForFirstButtonDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForFirstButtonDown");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForFirstAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForFirstAxis");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersOfTypeForFirstElement(Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersOfTypeForFirstElement", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersOfTypeForFirstElementDown(Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersOfTypeForFirstElementDown", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersOfTypeForFirstButton(Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersOfTypeForFirstButton", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersOfTypeForFirstButtonDown(Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersOfTypeForFirstButtonDown", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersOfTypeForFirstAxis(Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersOfTypeForFirstAxis", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForFirstElement(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForFirstElement", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForFirstElementDown(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForFirstElementDown", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForFirstButton(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForFirstButton", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForFirstButtonDown(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForFirstButtonDown", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForFirstAxis(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForFirstAxis", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForAllElements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForAllElements");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForAllElementsDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForAllElementsDown");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForAllButtons()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForAllButtons");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForAllButtonsDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForAllButtonsDown");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollAllControllersForAllAxes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollAllControllersForAllAxes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForAllElements(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForAllElements", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForAllElementsDown(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForAllElementsDown", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForAllButtons(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForAllButtons", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForAllButtonsDown(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForAllButtonsDown", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::PollControllerForAllAxes(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PollControllerForAllAxes", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ETeNaMsWRsmOyulAMcCQgIfGKQQ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ETeNaMsWRsmOyulAMcCQgIfGKQQ");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::CugazxqRYCeOnDjSCCXNTIjusqXa()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CugazxqRYCeOnDjSCCXNTIjusqXa");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::kIZcgyhGPbhPgHbHMzUInWUcIbT()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "kIZcgyhGPbhPgHbHMzUInWUcIbT");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ahWWVHxRuIpiitQTdtpvEREXlXH()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ahWWVHxRuIpiitQTdtpvEREXlXH");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::zQjkBmQqITvNSBPAfFymwnvOfZSd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zQjkBmQqITvNSBPAfFymwnvOfZSd");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::AJygVSFPwDUJTMprfhzlpxhcYbrg(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AJygVSFPwDUJTMprfhzlpxhcYbrg");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::AnOqcCPvtPnBgBsTGPCyNpVYLRW(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AnOqcCPvtPnBgBsTGPCyNpVYLRW");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ozZNRJZDQiEGSdrRJpTIiCrqNgks(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ozZNRJZDQiEGSdrRJpTIiCrqNgks");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::awTbyHVVhAHPkVPVPZYJmpPUPQT(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "awTbyHVVhAHPkVPVPZYJmpPUPQT");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::FzwfGNpVpuBzESpYtnsXpHZUgxL(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FzwfGNpVpuBzESpYtnsXpHZUgxL");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::mpMcSUfNONSXNRmxOuNfwaZsfeS()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "mpMcSUfNONSXNRmxOuNfwaZsfeS");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::FIenWoVeVAnOboHkDdXOgNQLfzaL()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FIenWoVeVAnOboHkDdXOgNQLfzaL");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ESvfEvfNRCLVnGtFOeSVIEUGzYh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ESvfEvfNRCLVnGtFOeSVIEUGzYh");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::JAgvrUkbrEtpSZIeGaVqORTHbiFC()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JAgvrUkbrEtpSZIeGaVqORTHbiFC");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::NCEManUwycEvMjWjHfCjfPxcaCua()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NCEManUwycEvMjWjHfCjfPxcaCua");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::fbCRpGbcUzLUEGsGDgBhKKuKzXz()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "fbCRpGbcUzLUEGsGDgBhKKuKzXz");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::JbwyCuKLvdnqwmhyztxrqNFvFZV()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JbwyCuKLvdnqwmhyztxrqNFvFZV");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::HVtheOMZJNuqsqegSiCCKITtooDv()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HVtheOMZJNuqsqegSiCCKITtooDv");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::uyEvTyACzXbTTjZlMfJMezujUQFH()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "uyEvTyACzXbTTjZlMfJMezujUQFH");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::YZRGjmBkdFhYabsMoCkpRiOgzJk()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YZRGjmBkdFhYabsMoCkpRiOgzJk");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ixTOdCHbqWaqIItvEYJsWYjqrHU()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ixTOdCHbqWaqIItvEYJsWYjqrHU");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::DgZesSeEcRRQPdlMyncPGGnJpJFX()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DgZesSeEcRRQPdlMyncPGGnJpJFX");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::DFoAAFCCqiaDSCkzilmCOjQlyHjY(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DFoAAFCCqiaDSCkzilmCOjQlyHjY");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::dlIeoWaGZZwJrhQwiKnyzVVPxsuq(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dlIeoWaGZZwJrhQwiKnyzVVPxsuq");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::wWhAGKfrizUCASyFBiXaPrmZDeVh(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "wWhAGKfrizUCASyFBiXaPrmZDeVh");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::poCnlrmcwJEvEVGNyBNkCfqTtNGn(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "poCnlrmcwJEvEVGNyBNkCfqTtNGn");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::JkaUDSLmPpNaTiMvFtdzgiNuCNT(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JkaUDSLmPpNaTiMvFtdzgiNuCNT");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::bHRaoNGVZdWYOCGfZcZjlKtNTtCk()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bHRaoNGVZdWYOCGfZcZjlKtNTtCk");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::MtgLHcCCZcaYipPknCjXjmSfwhI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MtgLHcCCZcaYipPknCjXjmSfwhI");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ujmGdsAicUnAwPuONTxkAYaUAWZ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ujmGdsAicUnAwPuONTxkAYaUAWZ");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::XvcMOhZvgGwFGAqjtjNwEZGKYUS()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XvcMOhZvgGwFGAqjtjNwEZGKYUS");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::vDSwbFbtDMsLLKifyBourlQVBNW()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vDSwbFbtDMsLLKifyBourlQVBNW");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ctCddSBHcoXpatXZQRgcfTFwLUbg(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ctCddSBHcoXpatXZQRgcfTFwLUbg");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::egFsSYUqfRCeOZvSOGSDaZnkWvT(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "egFsSYUqfRCeOZvSOGSDaZnkWvT");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ITpnYxrBxGCVmfzYLprzqcREOBnG(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ITpnYxrBxGCVmfzYLprzqcREOBnG");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::fXRlkVXKTdqpjsCnwSxNxcCLFQh(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "fXRlkVXKTdqpjsCnwSxNxcCLFQh");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::jxCnGWkgcMgQiJfWjAWpWRjUiMiu(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jxCnGWkgcMgQiJfWjAWpWRjUiMiu");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::FXJEeRCHdsmvIxiMThSBfbNoAmh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FXJEeRCHdsmvIxiMThSBfbNoAmh");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::bmLNWeLLWvytRIaKhOvfuJauynq()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bmLNWeLLWvytRIaKhOvfuJauynq");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ovMyBqSueCpHkKSkhRAHRnPFYxs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ovMyBqSueCpHkKSkhRAHRnPFYxs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::aUMUTWcbHFIBmlDRslJQQIgCTNH()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "aUMUTWcbHFIBmlDRslJQQIgCTNH");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::TsagCaAHJGcMilRFFekhWVWPxwN()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TsagCaAHJGcMilRFFekhWVWPxwN");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::rQnTiElmqYsOTEBHEgNNrTqpxBc()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rQnTiElmqYsOTEBHEgNNrTqpxBc");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::xscNWaPiRtUkFTSJcDhprjMqnPP()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xscNWaPiRtUkFTSJcDhprjMqnPP");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::GknPUMhZSxsRNNvsOBtieSDzNaQ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GknPUMhZSxsRNNvsOBtieSDzNaQ");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::usIdwVOxFHYmoZUjbcolZNcOYOh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "usIdwVOxFHYmoZUjbcolZNcOYOh");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::bNaiPUaiuknXyARPWoDHySnOAYL()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bNaiPUaiuknXyARPWoDHySnOAYL");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::RneIRdHlakDUAqFSIdrNBNzeBaC()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RneIRdHlakDUAqFSIdrNBNzeBaC");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::RqtZrRlXghnqYwjpvfzperwYUZB()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RqtZrRlXghnqYwjpvfzperwYUZB");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::BfAdxmcJRHfufgXzkMsScsIxdyVK(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BfAdxmcJRHfufgXzkMsScsIxdyVK");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::wNcNcTXCUQGQuGvZlQoeUprXMtbl(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "wNcNcTXCUQGQuGvZlQoeUprXMtbl");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::ztDsNqppgxchPiBGPgkCfesOCFgE(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ztDsNqppgxchPiBGPgkCfesOCFgE");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::tmVGdgCHaczjwFtUCwShtmmRIjFg(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "tmVGdgCHaczjwFtUCwShtmmRIjFg");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper::gxmviEvqvzxyQvepknbrymiDRVc(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "gxmviEvqvzxyQvepknbrymiDRVc");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>*)returnValue;
}
