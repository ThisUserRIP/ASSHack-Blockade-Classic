#include "System_Runtime_Serialization_ValueTypeFixupInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::ValueTypeFixupInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization", "ValueTypeFixupInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::ValueTypeFixupInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::ValueTypeFixupInfo::_ctor(int64_t containerID, mscorlib::System::Reflection::FieldInfo* member, IL2CPP::Array<int32_t>* parentIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int64", "System.Reflection.FieldInfo", "System.Int32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&containerID;
	params[1] = (intptr_t)member;
	params[2] = (intptr_t)parentIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int64_t mscorlib::System::Runtime::Serialization::ValueTypeFixupInfo::get_ContainerID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ContainerID");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Reflection::FieldInfo* mscorlib::System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentField()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ParentField");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::FieldInfo*)returnValue;
}
IL2CPP::Array<int32_t>* mscorlib::System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ParentIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
