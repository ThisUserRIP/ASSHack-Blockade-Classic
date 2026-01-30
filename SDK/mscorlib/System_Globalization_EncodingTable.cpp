#include "System_Globalization_EncodingTable.h"

IL2CPP::Il2CppClass* mscorlib::System::Globalization::EncodingTable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Globalization", "EncodingTable");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Globalization::EncodingTable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t mscorlib::System::Globalization::EncodingTable::GetNumEncodingItems()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNumEncodingItems");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::InternalEncodingDataItem mscorlib::System::Globalization::EncodingTable::ENC(mscorlib::System::String* name, uint16_t cp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ENC", std::vector<std::string> { "System.String", "System.UInt16" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&cp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::InternalEncodingDataItem ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::InternalEncodingDataItem));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::InternalEncodingDataItem>(*(mscorlib::System::Globalization::InternalEncodingDataItem*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::InternalCodePageDataItem mscorlib::System::Globalization::EncodingTable::MapCodePageDataItem(uint16_t cp, uint16_t fcp, mscorlib::System::String* names, uint32_t flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MapCodePageDataItem", std::vector<std::string> { "System.UInt16", "System.UInt16", "System.String", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&cp;
	params[1] = (intptr_t)&fcp;
	params[2] = (intptr_t)names;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::InternalCodePageDataItem ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::InternalCodePageDataItem));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::InternalCodePageDataItem>(*(mscorlib::System::Globalization::InternalCodePageDataItem*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Globalization::EncodingTable::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Globalization::EncodingTable::internalGetCodePageFromName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "internalGetCodePageFromName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
int32_t mscorlib::System::Globalization::EncodingTable::GetCodePageFromName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCodePageFromName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
mscorlib::System::Globalization::CodePageDataItem* mscorlib::System::Globalization::EncodingTable::GetCodePageDataItem(int32_t codepage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCodePageDataItem", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&codepage;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::CodePageDataItem*)returnValue;
}
