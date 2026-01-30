#include "ousWmhihjmWZzPILlaanTjyEypZ.h"

IL2CPP::Il2CppClass* Rewired_Windows::ousWmhihjmWZzPILlaanTjyEypZ::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "", "ousWmhihjmWZzPILlaanTjyEypZ");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::ousWmhihjmWZzPILlaanTjyEypZ::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::ousWmhihjmWZzPILlaanTjyEypZ::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t Rewired_Windows::ousWmhihjmWZzPILlaanTjyEypZ::get_NativePointer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NativePointer");
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
mscorlib::System::Collections::Generic::List_1<Rewired_Windows::MbMpmAIwbfGPiqRSZekmCIZIRGM>* Rewired_Windows::ousWmhihjmWZzPILlaanTjyEypZ::get_Objects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Objects");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Rewired_Windows::MbMpmAIwbfGPiqRSZekmCIZIRGM>*)returnValue;
}
void Rewired_Windows::ousWmhihjmWZzPILlaanTjyEypZ::set_Objects(mscorlib::System::Collections::Generic::List_1<Rewired_Windows::MbMpmAIwbfGPiqRSZekmCIZIRGM>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Objects", std::vector<std::string> { "System.Collections.Generic.List`1<MbMpmAIwbfGPiqRSZekmCIZIRGM>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Windows::ousWmhihjmWZzPILlaanTjyEypZ::aZVVcQHljOgLgIVSBFMtPrNntFn(void* A_0, intptr_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "aZVVcQHljOgLgIVSBFMtPrNntFn");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_0;
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
