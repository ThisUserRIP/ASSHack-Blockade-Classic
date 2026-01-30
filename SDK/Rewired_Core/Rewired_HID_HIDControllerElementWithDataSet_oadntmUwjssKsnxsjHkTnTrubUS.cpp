#include "Rewired_HID_HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet::GetIl2CppClass(), "oadntmUwjssKsnxsjHkTnTrubUS");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::get_dataCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_dataCount");
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
IL2CPP::Array<int32_t>* Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::get_updateLoopIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_updateLoopIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
void Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::set_updateLoop(Rewired_Core::Rewired::UpdateLoopType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_updateLoop", std::vector<std::string> { "Rewired.UpdateLoopType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::dgYslizRyFoZkzsepiTlmmEdNAT(Rewired_Core::Rewired::Config::UpdateLoopSetting A_1, mscorlib::System::Func_2<Rewired_Core::Rewired::UpdateLoopType, Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO>* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dgYslizRyFoZkzsepiTlmmEdNAT");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::YlcXhDxfUeHuXAWbRjyHZdqIPwN(Rewired_Core::Rewired::UpdateLoopType A_1, Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YlcXhDxfUeHuXAWbRjyHZdqIPwN");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::Update(Rewired_Core::Rewired::UpdateLoopType A_1)
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
void Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS::zJbzOufrsBtxEPHEpbdbhOzmLZO()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zJbzOufrsBtxEPHEpbdbhOzmLZO");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
