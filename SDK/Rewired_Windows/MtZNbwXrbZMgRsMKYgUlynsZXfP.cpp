#include "MtZNbwXrbZMgRsMKYgUlynsZXfP.h"

IL2CPP::Il2CppClass* Rewired_Windows::MtZNbwXrbZMgRsMKYgUlynsZXfP::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "", "MtZNbwXrbZMgRsMKYgUlynsZXfP");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::MtZNbwXrbZMgRsMKYgUlynsZXfP::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Windows::MtZNbwXrbZMgRsMKYgUlynsZXfP::get_value()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_value");
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
void Rewired_Windows::MtZNbwXrbZMgRsMKYgUlynsZXfP::_ctor(uint8_t reportId, uint16_t usagePage, uint16_t usage, int32_t dataIndex, int32_t bitSize, int32_t logicalMin, int32_t logicalMax, int32_t physicalMin, int32_t physicalMax, uint32_t units, uint32_t unitsExp, int32_t reportIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte", "System.UInt16", "System.UInt16", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.UInt32", "System.UInt32", "System.Int32" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)&reportId;
	params[1] = (intptr_t)&usagePage;
	params[2] = (intptr_t)&usage;
	params[3] = (intptr_t)&dataIndex;
	params[4] = (intptr_t)&bitSize;
	params[5] = (intptr_t)&logicalMin;
	params[6] = (intptr_t)&logicalMax;
	params[7] = (intptr_t)&physicalMin;
	params[8] = (intptr_t)&physicalMax;
	params[9] = (intptr_t)&units;
	params[10] = (intptr_t)&unitsExp;
	params[11] = (intptr_t)&reportIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::MtZNbwXrbZMgRsMKYgUlynsZXfP::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
