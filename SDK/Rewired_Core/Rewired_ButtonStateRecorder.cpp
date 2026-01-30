#include "Rewired_ButtonStateRecorder.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ButtonStateRecorder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ButtonStateRecorder");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ButtonStateRecorder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
double Rewired_Core::Rewired::ButtonStateRecorder::get_timePressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_timePressed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
double Rewired_Core::Rewired::ButtonStateRecorder::get_timeUnpressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_timeUnpressed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
double Rewired_Core::Rewired::ButtonStateRecorder::get_lastTimePressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lastTimePressed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
double Rewired_Core::Rewired::ButtonStateRecorder::get_lastTimeUnpressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lastTimeUnpressed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
double Rewired_Core::Rewired::ButtonStateRecorder::get_lastTimeStateChangedToPressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lastTimeStateChangedToPressed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
double Rewired_Core::Rewired::ButtonStateRecorder::get_lastTimeStateChangedToUnpressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lastTimeStateChangedToUnpressed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
double Rewired_Core::Rewired::ButtonStateRecorder::get_lastTimeStateChanged()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lastTimeStateChanged");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ButtonStateRecorder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ButtonStateRecorder::rzxcwQaQDJsOGhoApWnDOXVkvyqu(bool A_1, bool A_2, double A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rzxcwQaQDJsOGhoApWnDOXVkvyqu");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ButtonStateRecorder::djuEbVjhBuQEFaXwOSflvOmJOTIm(float A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "djuEbVjhBuQEFaXwOSflvOmJOTIm");
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
bool Rewired_Core::Rewired::ButtonStateRecorder::lJVaHYodXJYOQDqgZaYnEJTcCjdK(float A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lJVaHYodXJYOQDqgZaYnEJTcCjdK");
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
bool Rewired_Core::Rewired::ButtonStateRecorder::djuEbVjhBuQEFaXwOSflvOmJOTIm(IL2CPP::Array<Rewired_Core::Rewired::ButtonStateRecorder_tLRbedmvVGeYKJkfZiUJPKunlZc*>* A_0, int32_t A_1, float A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "djuEbVjhBuQEFaXwOSflvOmJOTIm");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)&A_1;
	params[2] = (intptr_t)&A_2;
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
void Rewired_Core::Rewired::ButtonStateRecorder::JTQQiRVorzHIyLuZadLqcOqsAtof()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JTQQiRVorzHIyLuZadLqcOqsAtof");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ButtonStateRecorder::zJbzOufrsBtxEPHEpbdbhOzmLZO()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zJbzOufrsBtxEPHEpbdbhOzmLZO");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ButtonStateRecorder::vDSZNmmHLeAwLsNDyGYjQTDDIhuc(double A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vDSZNmmHLeAwLsNDyGYjQTDDIhuc");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ButtonStateRecorder::FfCssZEQCodQFDSNBEeFwsBTaXTs(int32_t A_0, int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FfCssZEQCodQFDSNBEeFwsBTaXTs");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
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
int32_t Rewired_Core::Rewired::ButtonStateRecorder::kgvZSNnRnNEKfEuSSdGVrflKiGY(int32_t A_0, int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "kgvZSNnRnNEKfEuSSdGVrflKiGY");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
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
