#include "System_Runtime_CompilerServices_DecimalConstantAttribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::CompilerServices::DecimalConstantAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.CompilerServices", "DecimalConstantAttribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::CompilerServices::DecimalConstantAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::CompilerServices::DecimalConstantAttribute::_ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte", "System.Byte", "System.UInt32", "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&scale;
	params[1] = (intptr_t)&sign;
	params[2] = (intptr_t)&hi;
	params[3] = (intptr_t)&mid;
	params[4] = (intptr_t)&low;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Decimal mscorlib::System::Runtime::CompilerServices::DecimalConstantAttribute::get_Value()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Value");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
